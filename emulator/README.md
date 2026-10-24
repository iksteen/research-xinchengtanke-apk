# Tsunami race-car emulator

A local application that renders the APK's actual Tsunami race car and emulates its Bluetooth advertisement protocol. The Android app supplies throttle and steering; the browser shows the moving car, wheel animation, telemetry, and packet activity. All browser dependencies and assets are local.

## Run and connect the Android app

Requires Linux, Python 3.11–3.14, BlueZ, and a powered Bluetooth adapter that supports simultaneous LE scanning and advertising. The current desktop adapter has been checked successfully. Your user must be allowed to access BlueZ through the system D-Bus. The browser needs WebGL.

From the repository root:

```bash
uv sync --locked
uv run --locked python -m emulator.server --bluetooth
```

Open **http://127.0.0.1:8765**. In the original Android app, select the **car**, open its Bluetooth settings/pairing screen, and initiate pairing. Grant its Bluetooth/nearby-device permissions and, on Android versions that require it, location permission and enabled location services. Keep the phone close to this computer. The browser should change from “Listening for Android app” to “Android app connected”; joystick commands then move the virtual car.

This protocol uses manufacturer advertisements in both directions. There is no GATT service or operating-system Bluetooth bond to select. The emulator starts scanning immediately and first advertises when it receives a valid pairing request. The default application car ID is `C0 FF EE`; the Android app learns this from the reply.

Options:

```bash
uv run --locked python -m emulator.server --bluetooth --adapter hci1 --device-id 123456 --port 8766
```

Without `--bluetooth`, click **Connect Android app** to start the radio. **Use local controller** switches to the keyboard or directional buttons (WASD/arrows, Space to brake); these generate the same encoded commands through the packet receiver. **Release controller** stops Bluetooth and clears the pairing. **Reset** also returns the car to its starting position. Ctrl+C removes the emulator's advertisement and ends its discovery session.

To keep it running independently of a terminal or agent session, start a transient user service after `uv sync --locked`, from the repository root:

```bash
systemd-run --user --unit=tsunami-car-emulator --collect \
  --property="WorkingDirectory=$PWD" --property=Restart=on-failure \
  --property=RestartSec=2 "$PWD/.venv/bin/python" -u -m emulator.server --bluetooth
```

This runs for the current user session and restarts after a crash. It does not enable startup after reboot. Manage it with:

```bash
systemctl --user status tsunami-car-emulator.service
systemctl --user restart tsunami-car-emulator.service
systemctl --user stop tsunami-car-emulator.service
journalctl --user -u tsunami-car-emulator.service -f
```

## Implemented protocol

- Scan company `0x0000`, family `0x05`, 19-byte payloads; validate the original XOR checksum.
- Accept `0x06` pairing requests with a zero or matching car ID, bind the three-byte controller ID, and advertise a matching `0x0A` reply.
- Accept `0x07` commands only for the paired controller and this car; reply with `0x09`.
- Use direction bits in payload byte 8, throttle magnitude in byte 10, steering magnitude in byte 11, and counter in byte 14. Car throttle and steering are separate from the tank's two tracks.
- Emit non-connectable BlueZ broadcasts containing manufacturer data, with no name, service list, or extra included fields. This matters because the Android Java receiver expects the manufacturer structure first.
- Show accepted/rejected packets and replies in the protocol monitor. In local mode, inject either a 19-byte payload or an AD record such as `16 FF 00 00 ...`.

See [the protocol research](../BLUETOOTH_PROTOCOL.md) for byte layout and native-code evidence. BlueZ property changes cannot update an already registered advertisement, so replies are replaced by unregistering/re-registering; repeated identical replies remain on air.

The car's reply-body semantics are not established, so replies use zeroed body bytes. Pairing/reply framing is based on the original app's receive validation. The driving surface extends continuously without arena walls. The camera button cycles between Follow view (default), a POV mounted just above the rear spoiler, and Orbit view for inspection. Follow view trails the car smoothly as it turns. Movement uses responsive arcade tuning: 18 m/s (64.8 km/h) forward, 9 m/s reverse, quick acceleration/braking, and speed-sensitive front-wheel steering. Local controls refresh every 50–75 ms. The illustrative bicycle model has a one-second command watchdog; it is not calibrated to physical hardware. Tank weapon commands and tank-hit events are not implemented.

## Assets and source

`static/assets/race-car.json` contains the original `TsunamiBody` and four `TsunamiWheel` meshes from Unity scene `level5`. The car texture is the original `Tsunami_Texture`; the floor uses the app's asphalt texture. [provenance.json](static/assets/provenance.json) records source IDs, APK checksum, conversion, and exported-file hashes. Extracted assets retain their original owners' rights.

To regenerate from the unpacked APK and existing decoded floor image:

```bash
tools/unitypy-venv/bin/python tools/export_race_car.py
```

The exporter uses `UnityPy==1.25.4` and Pillow. The frontend vendors Three.js **0.186.1** and OrbitControls from the npm `three` package under `static/vendor/`, with its MIT license. No npm build step is required.

## Verification

```bash
uv sync --locked --group dev
uv run --locked pytest -q
```

Tests cover checksum/AD parsing, controller binding, direction/rate decoding, watchdog and motion, the HTTP/WebSocket control path, and an end-to-end pairing/control exchange against a BlueZ test service on a private D-Bus. The D-Bus test requires `dbus-daemon` and permission to create local sockets. A real adapter has also accepted discovery and manufacturer-advertisement registration/cleanup. Desktop/mobile browser rendering and local driving were checked with Playwright.

Live Bluetooth pairing and drive commands have also been observed on the real adapter. A capture of a physical toy is still needed to establish its radio timing and reply-body behavior. Dependency deprecation warnings on Python 3.14 come from dbus-next 0.2.3.
