"""Exercise real D-Bus messages on a private test bus, without using the radio."""
import asyncio

from dbus_next import Variant, MessageType
from dbus_next.aio import MessageBus
from dbus_next.constants import PropertyAccess
from dbus_next.service import ServiceInterface, dbus_property, method
import pytest

from bluetooth_protocol import encode_packet
from emulator.bluez import BlueZ
from emulator.model import Car


class FakeAdapter(ServiceInterface):
    def __init__(self):
        super().__init__('org.bluez.Adapter1')
        self.discovering = False
        self.filters = None

    @dbus_property(access=PropertyAccess.READ)
    def Powered(self) -> 'b':
        return True

    @method()
    def SetDiscoveryFilter(self, filters: 'a{sv}'):
        self.filters = filters

    @method()
    def StartDiscovery(self):
        self.discovering = True

    @method()
    def StopDiscovery(self):
        self.discovering = False


class FakeAdvertisements(ServiceInterface):
    def __init__(self, bus):
        super().__init__('org.bluez.LEAdvertisingManager1')
        self.bus, self.sender = bus, None
        self.properties = []
        self.registered = set()

    @method()
    async def RegisterAdvertisement(self, path: 'o', options: 'a{sv}'):
        intro = await self.bus.introspect(self.sender, path)
        remote = self.bus.get_proxy_object(self.sender, path, intro)
        properties = remote.get_interface('org.freedesktop.DBus.Properties')
        # Real BlueZ reads the requested power and writes back the chosen value.
        await properties.call_set('org.bluez.LEAdvertisement1', 'TxPower', Variant('n', -1))
        props = await properties.call_get_all('org.bluez.LEAdvertisement1')
        self.properties.append(props)
        self.registered.add(path)

    @method()
    def UnregisterAdvertisement(self, path: 'o'):
        self.registered.remove(path)


class FakeDevice(ServiceInterface):
    def __init__(self):
        super().__init__('org.bluez.Device1')

    @dbus_property(access=PropertyAccess.READ)
    def ManufacturerData(self) -> 'a{qv}':
        return {}


async def until(predicate):
    async def poll():
        while not predicate():
            await asyncio.sleep(.01)
    await asyncio.wait_for(poll(), 5)


async def test_original_app_pairing_and_control_over_bluez_dbus():
    daemon = await asyncio.create_subprocess_exec('dbus-daemon', '--session', '--nofork', '--print-address=1', stdout=asyncio.subprocess.PIPE)
    address = (await daemon.stdout.readline()).decode().strip()
    service = await MessageBus(bus_address=address).connect()
    await service.request_name('org.bluez')
    adapter = FakeAdapter()
    ads = FakeAdvertisements(service)
    device = FakeDevice()
    service.export('/org/bluez/hci0', adapter)
    service.export('/org/bluez/hci0', ads)
    service.export('/org/bluez/hci0/dev_AA_BB_CC_DD_EE_FF', device)

    def sender(message):
        if message.message_type == MessageType.METHOD_CALL and message.member == 'RegisterAdvertisement':
            ads.sender = message.sender
    service.add_message_handler(sender)
    car = Car()
    bridge = BlueZ(car.receive, bus_address=address)
    try:
        await bridge.start()
        assert adapter.discovering and adapter.filters['Transport'].value == 'le'
        packet = encode_packet(6, bytes(3), b'app')
        device.emit_properties_changed({'ManufacturerData': {0: Variant('ay', packet)}})
        await until(lambda: len(ads.properties) == 1)
        props = ads.properties[-1]
        assert props['Type'].value == 'broadcast' and props['Includes'].value == []
        assert props['TxPower'].value == -1
        reply = props['ManufacturerData'].value[0].value
        assert reply == encode_packet(10, car.device_id, b'app')
        control = encode_packet(7, car.device_id, b'app', bytes([9,0,80,35,0,0,12,0,0,0]))
        device.emit_properties_changed({'ManufacturerData': {0: Variant('ay', control)}})
        await until(lambda: len(ads.properties) == 2)
        assert car.throttle == .8 and car.steering == .35 and car.source == 'bluetooth'
        assert ads.properties[-1]['ManufacturerData'].value[0].value[1] == 9
        await bridge.stop()
        assert not adapter.discovering and not ads.registered
    finally:
        await bridge.stop()
        service.disconnect()
        daemon.terminate()
        await daemon.wait()
