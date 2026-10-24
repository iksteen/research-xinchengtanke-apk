"""Packet-driven virtual car; no Bluetooth or UI dependencies."""
from collections import deque
import math
import time

from bluetooth_protocol import checksum, encode_packet, manufacturer_ad


def payload_from_bytes(raw: bytes) -> bytes:
    if len(raw) == 19:
        packet = raw
    else:
        # Parse AD structures, including a possible leading Flags structure.
        index = 0
        packet = None
        while index < len(raw) and raw[index]:
            length = raw[index]
            end = index + length + 1
            if end > len(raw):
                raise ValueError("Truncated advertising-data structure")
            if length == 22 and raw[index + 1] == 0xFF and raw[index + 2:index + 4] == b"\0\0":
                packet = raw[index + 4:end]
                break
            index = end
        if packet is None:
            raise ValueError("Expected 19 payload bytes or manufacturer AD data with company ID 0000")
    if packet[0] != 5:
        raise ValueError("Expected protocol family 05")
    if checksum(packet[:18]) != packet[18]:
        raise ValueError("Invalid XOR checksum")
    return packet


class Car:
    MAX_FORWARD_SPEED = 18.0  # m/s; arcade tuning, not measured hardware performance.
    MAX_REVERSE_SPEED = 9.0
    ACCELERATION_RESPONSE = 12.0
    BRAKING_RESPONSE = 16.0

    def __init__(self, device_id=b"\xc0\xff\xee", clock=time.monotonic):
        if len(device_id) != 3:
            raise ValueError("Device ID must have three bytes")
        self.device_id = device_id
        self.clock = clock
        self.controller = None
        self.last_control = None
        self.flags = self.counter = self.rx = self.tx = self.rejected = 0
        self.throttle = self.steering = self.speed = self.x = self.z = self.heading = self.distance = 0.0
        self.log = deque(maxlen=80)
        self.sequence = 0
        self.last_rx = self.last_tx = None
        self.watchdog = False
        self.source = "none"

    def event(self, direction, packet, note, source):
        self.sequence += 1
        row = {"id": self.sequence, "time": time.time(), "direction": direction,
               "hex": packet.hex(" "), "note": note, "source": source}
        self.log.appendleft(row)
        if direction == "RX":
            self.last_rx = row
        elif direction == "TX":
            self.last_tx = row

    def receive(self, raw, source="local"):
        try:
            packet = payload_from_bytes(raw)
            opcode, target, controller = packet[1], packet[2:5], packet[5:8]
            if opcode == 6:
                if target not in [bytes(3), self.device_id]:
                    raise ValueError("Pairing request targets another car")
                if self.controller is not None and self.controller != controller:
                    raise ValueError("Already paired; release the controller first")
                self.controller = controller
                self.source = source
                self.throttle = self.steering = 0.0
                self.last_control = None
                note = "Pair request accepted"
                reply = encode_packet(10, self.device_id, controller)
            elif opcode == 7:
                if controller != self.controller or self.controller is None:
                    raise ValueError("Controller is not paired")
                if target != self.device_id:
                    raise ValueError("Control packet targets another car")
                flags = packet[8]
                if flags & 3 == 3 or flags & 12 == 12:
                    raise ValueError("Conflicting direction bits")
                # The car's left joystick is throttle; its right joystick is steering.
                # These are not two independent tank tracks.
                self.throttle = (bool(flags & 1) - bool(flags & 2)) * min(packet[10], 100) / 100
                self.steering = (bool(flags & 8) - bool(flags & 4)) * min(packet[11], 100) / 100
                self.flags, self.counter = flags, packet[14]
                self.last_control = self.clock()
                self.source = source
                self.watchdog = False
                note = "Drive command"
                # Only framing of car replies is known; do not invent tank-hit telemetry.
                reply = encode_packet(9, self.device_id, controller)
            else:
                raise ValueError(f"Unsupported phone opcode {opcode:02X}; expected 06 or 07")
        except ValueError as error:
            self.rejected += 1
            self.event("DROP", raw, str(error), source)
            raise
        self.rx += 1
        self.tx += 1
        self.event("RX", packet, note, source)
        self.event("TX", reply, "Pair reply 0A" if opcode == 6 else "Status reply 09", source)
        return reply

    def local_drive(self, throttle, steering, controller=b"sim"):
        if self.controller is None:
            self.receive(encode_packet(6, bytes(3), controller))
        if self.controller != controller or self.source == "bluetooth":
            raise ValueError("Release the Bluetooth controller before using local controls")
        throttle, steering = float(throttle), float(steering)
        if not math.isfinite(throttle) or not math.isfinite(steering):
            raise ValueError("Controls must be finite")
        throttle = max(-1.0, min(1.0, throttle))
        steering = max(-1.0, min(1.0, steering))
        flags = (1 if throttle > 0 else 2 if throttle < 0 else 0) | (8 if steering > 0 else 4 if steering < 0 else 0)
        body = bytes([flags, 0, round(abs(throttle)*100), round(abs(steering)*100), 0, 0,
                      self.counter % 250 + 1, 0, 0, 0])
        return self.receive(encode_packet(7, self.device_id, controller, body))

    def release(self):
        self.controller = self.last_control = None
        self.throttle = self.steering = self.speed = 0.0
        self.flags = 0
        self.source = "none"
        self.watchdog = False

    def reset(self):
        self.release()
        self.x = self.z = self.heading = self.distance = 0.0

    @property
    def steering_angle(self):
        # Keep a tight low-speed turning circle without spinning at racing speeds.
        return self.steering * 0.48 / (1.0 + (abs(self.speed) / 14.0) ** 2)

    def step(self, dt):
        dt = max(0.0, min(dt, 0.1))
        if self.last_control is not None and self.clock() - self.last_control > 1.0:
            self.throttle = self.steering = 0.0
            self.flags = 0
            self.watchdog = True
        target = self.throttle * (self.MAX_FORWARD_SPEED if self.throttle >= 0 else self.MAX_REVERSE_SPEED)
        response = self.BRAKING_RESPONSE if target * self.speed <= 0 else self.ACCELERATION_RESPONSE
        self.speed += (target - self.speed) * -math.expm1(-response * dt)
        if abs(self.speed) < 0.002:
            self.speed = 0.0
        # Bicycle model: steering rotates the front axle, with reverse steering.
        self.heading += self.speed / 1.75 * math.tan(-self.steering_angle) * dt
        self.x += math.sin(self.heading) * self.speed * dt
        self.z += math.cos(self.heading) * self.speed * dt
        self.distance += abs(self.speed) * dt

    def snapshot(self):
        return {"device_id": self.device_id.hex(), "controller": self.controller.hex() if self.controller else None,
                "source": self.source, "paired": self.controller is not None, "watchdog": self.watchdog,
                "x": self.x, "z": self.z, "heading": self.heading, "speed": self.speed,
                "distance": self.distance, "throttle": self.throttle, "steering": self.steering,
                "steering_angle": self.steering_angle,
                "flags": self.flags, "counter": self.counter, "rx": self.rx, "tx": self.tx,
                "rejected": self.rejected, "last_rx": self.last_rx, "last_tx": self.last_tx,
                "log": list(self.log)[:30]}
