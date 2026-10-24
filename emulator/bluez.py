"""BlueZ non-connectable advertising and manufacturer-data scanning."""
import asyncio
import logging

from dbus_next import BusType, Variant, Message, MessageType
from dbus_next.aio import MessageBus
from dbus_next.constants import PropertyAccess
from dbus_next.service import ServiceInterface, method, dbus_property

LOG = logging.getLogger(__name__)


class Advertisement(ServiceInterface):
    def __init__(self, payload):
        super().__init__("org.bluez.LEAdvertisement1")
        self.payload = payload
        self.tx_power = 0

    @method()
    def Release(self):
        pass

    @dbus_property(access=PropertyAccess.READ)
    def Type(self) -> 's':
        return "broadcast"

    @dbus_property(access=PropertyAccess.READ)
    def ManufacturerData(self) -> 'a{qv}':
        return {0: Variant('ay', self.payload)}

    @dbus_property(access=PropertyAccess.READ)
    def Includes(self) -> 'as':
        return []

    @dbus_property(access=PropertyAccess.READWRITE)
    def TxPower(self) -> 'n':
        return self.tx_power

    @TxPower.setter
    def TxPower(self, value: 'n'):
        # BlueZ writes back the actual power selected by the controller.
        self.tx_power = value


class BlueZ:
    def __init__(self, receiver, adapter="hci0", bus_address=None):
        self.receiver, self.adapter, self.bus_address = receiver, adapter, bus_address
        self.bus = self.adapter_proxy = self.manager = None
        self.enabled = False
        self.error = None
        self.path = f"/org/bluez/{adapter}"
        self.ad_path = "/org/xinchengtanke/emulator/advertisement"
        self.advertisement = None
        self.queue = asyncio.Queue(maxsize=1)
        self.worker = None
        self.active_payload = None
        self.background = set()

    def snapshot(self):
        return {"enabled": self.enabled, "adapter": self.adapter, "error": self.error,
                "advertising": self.advertisement is not None}

    async def start(self):
        if self.enabled:
            return
        self.error = None
        try:
            self.bus = await MessageBus(bus_address=self.bus_address, bus_type=BusType.SYSTEM).connect()
            intro = await self.bus.introspect("org.bluez", self.path)
            proxy = self.bus.get_proxy_object("org.bluez", self.path, intro)
            self.adapter_proxy = proxy.get_interface("org.bluez.Adapter1")
            self.manager = proxy.get_interface("org.bluez.LEAdvertisingManager1")
            props = proxy.get_interface("org.freedesktop.DBus.Properties")
            powered = await props.call_get("org.bluez.Adapter1", "Powered")
            if not powered.value:
                raise RuntimeError(f"{self.adapter} is powered off; turn Bluetooth on first")
            self.bus.add_message_handler(self._message)
            rule = "type='signal',sender='org.bluez'"
            result = await self.bus.call(Message(destination="org.freedesktop.DBus", path="/org/freedesktop/DBus",
                                                 interface="org.freedesktop.DBus", member="AddMatch", signature="s", body=[rule]))
            if result.message_type == MessageType.ERROR:
                raise RuntimeError(result.body[0])
            await self.adapter_proxy.call_set_discovery_filter({"Transport": Variant('s', 'le'),
                                                               "DuplicateData": Variant('b', True),
                                                               "Pattern": Variant('s', '')})
            await self.adapter_proxy.call_start_discovery()
            self.enabled = True
            self.worker = asyncio.create_task(self._advertise_worker())
        except Exception as error:
            self.error = str(error)
            await self.stop()
            raise RuntimeError(f"Bluetooth unavailable: {error}") from error

    def _message(self, message):
        if message.message_type != MessageType.SIGNAL:
            return
        properties = None
        if message.interface == "org.freedesktop.DBus.Properties" and message.member == "PropertiesChanged":
            if message.path.startswith(self.path + "/") and message.body[0] == "org.bluez.Device1":
                properties = message.body[1]
        elif message.interface == "org.freedesktop.DBus.ObjectManager" and message.member == "InterfacesAdded":
            if message.body[0].startswith(self.path + "/"):
                properties = message.body[1].get("org.bluez.Device1", {})
        if properties and "ManufacturerData" in properties:
            manufacturers = properties["ManufacturerData"].value
            value = manufacturers.get(0)
            if value is not None:
                packet = bytes(value.value)
                if len(packet) == 19 and packet[0] == 5 and packet[1] in (6, 7):
                    task = asyncio.create_task(self._receive(packet))
                    self.background.add(task)
                    task.add_done_callback(self.background.discard)

    async def _receive(self, packet):
        if not self.enabled:
            return
        try:
            reply = self.receiver(packet, "bluetooth")
            await self.publish(reply)
        except ValueError:
            pass  # Protocol rejection is recorded by the emulator.

    async def publish(self, payload):
        if not self.enabled or payload == self.active_payload:
            return
        if self.queue.full():
            self.queue.get_nowait()
        self.queue.put_nowait(payload)

    async def _advertise_worker(self):
        while True:
            payload = await self.queue.get()
            try:
                if self.advertisement is not None:
                    await self.manager.call_unregister_advertisement(self.ad_path)
                    self.bus.unexport(self.ad_path)
                    self.advertisement = None
                advertisement = Advertisement(payload)
                self.bus.export(self.ad_path, advertisement)
                try:
                    await self.manager.call_register_advertisement(self.ad_path, {})
                except Exception:
                    self.bus.unexport(self.ad_path)
                    raise
                self.advertisement = advertisement
                self.active_payload = payload
                self.error = None
            except Exception as error:
                self.error = f"Advertising failed: {error}"
                LOG.warning(self.error)

    async def stop(self):
        self.enabled = False
        if self.worker:
            self.worker.cancel()
            await asyncio.gather(self.worker, return_exceptions=True)
            self.worker = None
        for task in list(self.background):
            task.cancel()
        if self.background:
            await asyncio.gather(*self.background, return_exceptions=True)
        if self.bus:
            if self.advertisement is not None:
                try:
                    await self.manager.call_unregister_advertisement(self.ad_path)
                except Exception:
                    LOG.debug("Advertisement already removed", exc_info=True)
                self.bus.unexport(self.ad_path)
            if self.adapter_proxy:
                try:
                    await self.adapter_proxy.call_stop_discovery()
                except Exception:
                    LOG.debug("Discovery already stopped", exc_info=True)
            self.bus.disconnect()
        self.bus = self.manager = self.adapter_proxy = self.advertisement = None
        self.active_payload = None
        self.queue = asyncio.Queue(maxsize=1)
