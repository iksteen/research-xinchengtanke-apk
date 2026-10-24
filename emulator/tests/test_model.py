import math

import pytest

from bluetooth_protocol import encode_packet, manufacturer_ad
from emulator.model import Car, payload_from_bytes

DEVICE, CONTROLLER = bytes.fromhex("c0ffee"), b"abc"


def command(flags=1, power=70, steering=0, counter=1, target=DEVICE, controller=CONTROLLER):
    return encode_packet(7, target, controller, bytes([flags, 0, power, steering, 0, 0, counter, 0, 0, 0]))


def test_pairing_reply_is_accepted_by_original_app_rules():
    car = Car()
    reply = car.receive(encode_packet(6, bytes(3), CONTROLLER))
    raw = manufacturer_ad(reply)
    assert len(raw) == 23 and raw[:2] == bytes.fromhex("16ff")
    assert raw[4] == 5 and raw[5] == 10 and raw[9:12] == CONTROLLER
    assert raw[6:9] == DEVICE
    assert payload_from_bytes(raw) == reply


def test_scan_records_can_have_flags_and_padding():
    packet = encode_packet(6, bytes(3), CONTROLLER)
    assert payload_from_bytes(b"\x02\x01\x06" + manufacturer_ad(packet) + bytes(5)) == packet
    with pytest.raises(ValueError, match="Truncated"):
        payload_from_bytes(b"\x16\xff\x00")


def test_pairing_binds_controller_and_device():
    car = Car()
    with pytest.raises(ValueError, match="not paired"):
        car.receive(command())
    car.receive(encode_packet(6, bytes(3), CONTROLLER))
    with pytest.raises(ValueError, match="Already paired"):
        car.receive(encode_packet(6, bytes(3), b"xyz"))
    with pytest.raises(ValueError, match="another car"):
        car.receive(command(target=b"bad"))
    with pytest.raises(ValueError, match="not paired"):
        car.receive(command(controller=b"bad"))


def test_car_channels_mean_throttle_and_steering_not_tank_tracks():
    car = Car()
    car.receive(encode_packet(6, bytes(3), CONTROLLER))
    reply = car.receive(command(flags=9, power=75, steering=40, counter=250))
    assert car.throttle == .75 and car.steering == .4
    assert car.counter == 250 and reply[1] == 9 and reply[8:18] == bytes(10)
    car.receive(command(flags=6, power=50, steering=90))
    assert car.throttle == -.5 and car.steering == -.9


def test_bad_checksums_and_conflicting_directions_do_not_move_car():
    car = Car()
    car.receive(encode_packet(6, bytes(3), CONTROLLER))
    packet = command()
    with pytest.raises(ValueError, match="checksum"):
        car.receive(packet[:-1] + bytes([packet[-1] ^ 1]))
    with pytest.raises(ValueError, match="Conflicting"):
        car.receive(command(flags=3))
    assert car.throttle == 0 and car.rejected == 2


def test_watchdog_stops_without_more_commands():
    now = [0.0]
    car = Car(clock=lambda: now[0])
    car.receive(encode_packet(6, bytes(3), CONTROLLER))
    car.receive(command())
    for _ in range(30):
        car.step(.02)
    assert car.speed > 2 and car.z > 0
    now[0] = 2.0
    for _ in range(60):
        car.step(.02)
    assert car.watchdog and car.throttle == 0 and car.speed == 0


def test_race_car_accelerates_quickly_and_still_stops_on_release():
    car = Car(clock=lambda: 0)
    car.local_drive(1, 0)
    for _ in range(15):
        car.step(.02)
    assert 17 < car.speed <= 18  # Over 60 km/h within 0.3 seconds.
    car.local_drive(0, 0)
    for _ in range(30):
        car.step(.02)
    assert car.speed == 0
    car.local_drive(-1, 0)
    for _ in range(15):
        car.step(.02)
    assert -9 <= car.speed < -8


def test_fast_steering_is_controllable_and_matches_telemetry():
    car = Car(clock=lambda: 0)
    car.local_drive(1, 1)
    assert car.steering_angle == .48
    for _ in range(50):
        car.step(.02)
    assert .17 < car.steering_angle < .19
    heading = car.heading
    car.step(.02)
    assert abs(car.heading - heading) / .02 < 2.0
    assert car.snapshot()['steering_angle'] == car.steering_angle


def test_steering_produces_curved_motion_and_reverse_reverses_yaw():
    car = Car()
    car.receive(encode_packet(6, bytes(3), CONTROLLER))
    car.receive(command(flags=9, power=70, steering=70))
    for _ in range(25):
        car.step(.02)
    assert car.x < 0 and car.z > 0 and car.heading < 0
    car.reset()
    car.receive(encode_packet(6, bytes(3), CONTROLLER))
    car.receive(command(flags=10, power=70, steering=70))
    for _ in range(25):
        car.step(.02)
    assert car.z < 0 and car.heading > 0


def test_local_controls_use_real_packets_and_reset_retains_device_id():
    car = Car()
    car.local_drive(.65, -1)
    assert car.controller == b"sim" and car.rx == 2 and car.tx == 2
    assert car.flags == 5 and car.last_rx["hex"].startswith("05 07 c0 ff ee")
    with pytest.raises(ValueError, match="finite"):
        car.local_drive(math.nan, 0)
    car.reset()
    assert not car.controller and car.device_id == DEVICE and car.x == 0


@pytest.mark.parametrize("heading,power", [(0, 1), (0, -1), (math.pi/2, 1), (math.pi/2, -1)])
def test_long_drives_do_not_hit_invisible_arena_walls(heading, power):
    now = [0.0]
    car = Car(clock=lambda: now[0])
    car.heading = heading
    for tick in range(600):
        if tick % 4 == 0:
            car.local_drive(power, 0)
        now[0] += .05
        car.step(.05)
    assert math.hypot(car.x, car.z) > 140
    assert abs(car.speed) > 4.9
