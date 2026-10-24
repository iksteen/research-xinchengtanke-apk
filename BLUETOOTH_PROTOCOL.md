# xinchengtanke Bluetooth protocol

Reverse engineered from `com.Shenqiwei.carapp` version `0.1`, Unity `2020.3.48f1c1`, in [xinchengtanke.apk](xinchengtanke.apk).

APK SHA-256: `79454c9c22bc1bd36d7a984c0ffb9e0273714f2f4b5cd8decccd62d2aecf7c53`.

The byte layouts and application behaviour below come from the Java plugin and ARM64 code. The original checksum and receive-validation helpers were also run in an isolated ARM64 emulator. [Validation results](decompiled/protocol-evidence/validation.json) record the checks and constructed example packets. Physical device behaviour and radio timing have not been measured.

## Transport

Commands and replies use **BLE manufacturer-specific advertisements**. The inspected path uses advertising and scanning rather than a GATT connection or Android's bonded-device pairing.

| Setting | App behaviour |
| --- | --- |
| AD type | `0xFF`, manufacturer-specific data |
| Company identifier | `0x0000`; Java calls `addManufacturerData(0, payload)` |
| Application payload | 19 bytes |
| Advertising | Low-latency mode (`2`), high TX-power setting (`3`), non-connectable, timeout `0` |
| Name / TX-power AD fields | Both disabled |
| Scanning | Low-latency mode (`2`), no Android `ScanFilter` list |

One complete manufacturer AD structure is:

```text
16 FF 00 00 [19-byte application payload]
│  │  └──── company identifier, little endian
│  └─────── AD type
└────────── AD length: 22 following bytes
```

The Java receive filter requires `scanRecord[0] == 0x16` and `scanRecord[1] == 0xFF`. It assumes the manufacturer structure comes first; a record beginning with a Flags AD structure fails this filter even if the manufacturer data appears later. The full scan record is passed to Unity as Base64. Base64 is used for the Java-to-Unity callback, not on the radio link.

Source: [HjdUnityBluetoothLE.java](decompiled/java/sources/com/sthjd/mylibrary/HjdUnityBluetoothLE.java), `androidStartAdvertising`, `api21Scan`, `sendDiscoveredDevice`, and `UnitySendScanData`.

## Packet layout

`P[n]` indexes the 19-byte application payload. `R[n]` indexes a raw scan record starting with `16 FF <company ID>`. Slice endpoints are exclusive.

| Payload offset | Raw offset | Size | Meaning |
| --- | --- | --- | --- |
| `P[0]` | `R[4]` | 1 | Protocol/device family: `05` in the inspected car and tank controllers |
| `P[1]` | `R[5]` | 1 | Message type / opcode |
| `P[2:5]` | `R[6:9]` | 3 | Toy ID, stored as `PanelMainUIController.tankeaddr` |
| `P[5:8]` | `R[9:12]` | 3 | Controller ID: `machine_a`, `machine_b`, `machine_c` |
| `P[8:18]` | `R[12:22]` | 10 | Message-specific body |
| `P[18]` | `R[22]` | 1 | XOR checksum |

These IDs are application fields, separate from the BLE advertiser's MAC address. The toy ID initially contains three zero bytes and is learned from the pairing reply.

The controller ID consists of the low bytes of the **first three characters of `UnityEngine.SystemInfo.deviceUniqueIdentifier`**. An identifier beginning with `a7f` produces `61 37 66`. The code reads characters directly rather than hex-decoding them.

Sources: [ContainerBeforeSelectUIController.c](decompiled/native-arm64/ContainerBeforeSelectUIController.c), `InitBluethood`; [PanelMainUIController.c](decompiled/native-arm64/PanelMainUIController.c), `.cctor`; [field declarations](decompiled/csharp/DiffableCs/Assembly-CSharp/PanelMainUIController.cs).

## Checksum

Start with `0xE9`, XOR all 18 preceding payload bytes, and store the result in `P[18]`:

```python
check = 0xE9
for value in payload[:18]:
    check ^= value
payload[18] = check
```

Equivalently, XORing all 19 payload bytes yields `0xE9`. The AD length, AD type, and company identifier are outside this checksum. The Unity advertising wrapper calculates it before passing the payload to Java.

Source: [HjdBluetoothHardwareInterface.c](decompiled/native-arm64/HjdBluetoothHardwareInterface.c), `StartAdvertising` at `0xDC4054` and `cal_AndroidBle_sumdata` at `0xDC41DC`. The original ARM64 checksum routine passed 128 deterministic random-input comparisons with the reference encoder.

## Message types and pairing

| Opcode | Direction | Meaning established from the app |
| --- | --- | --- |
| `06` | Phone → toy | Pairing/discovery request, `send_duima_code` |
| `0A` | Toy → phone | Pairing reply, `revice_duima_code` |
| `07` | Phone → toy | Normal control message, `send_now_code` |
| `09` | Toy → phone | Normal response/event message, `revice_now_code` |

Both the ordinary car and tank controller constructors use family `05` and these opcodes.

The pairing sequence is:

1. Initialize Bluetooth and derive the controller ID.
2. Build `05 06 00 00 00 <controller ID> <ten zero bytes> <checksum>`.
3. Stop previous advertising, wait 100 ms, then advertise the request. Advertising continues until stopped or replaced.
4. Stop previous scanning, wait 100 ms, and start scanning with a Unity receive callback.
5. Accept a reply with family `05`, opcode `0A`, and the matching controller ID.
6. Copy `R[6:9]` into `tankeaddr`, mark the app connected, and prepare an opcode `07` control frame using the learned ID.

The controller ID in the reply must match the request. No GATT UUID or connection handle is involved in this exchange.

Source: [ContainerRemoteTankUIController.c](decompiled/native-arm64/ContainerRemoteTankUIController.c), `OnClickButtonBlesetting` at `0xDDDC3C` and `<OnClickButtonBlesetting>b__21_4` at `0xDDF128`; the equivalent [car controller](decompiled/native-arm64/ContainerRemoteCarUIController.c) uses the same frame layout.

## Normal control body (`07`)

This describes the ordinary remote-control screens. The APK also contains gyro, hand-control, route, and programming screens; their complete behaviour has not been independently mapped here.

| Body index | Payload offset | Meaning |
| --- | --- | --- |
| `D[0]` | `P[8]` | Control bitmask, below |
| `D[1]` | `P[9]` | `00` |
| `D[2]` | `P[10]` | Left rate: integer truncation of `left_rate × 100`, stored in one byte |
| `D[3]` | `P[11]` | Right rate: integer truncation of `right_rate × 100`, stored in one byte |
| `D[4:6]` | `P[12:14]` | `00 00` |
| `D[6]` | `P[14]` | Rolling update counter: `1…250`, then `1` |
| `D[7:10]` | `P[15:18]` | `00 00 00` |

The rate fields are percentage-like motor-control magnitudes in this path. The tank engine commonly derives them using absolute-value operations. The serializer truncates and stores the low byte; it does not clamp values to `0…100`.

On the ordinary **car** screen, the left rate is throttle magnitude and the right rate is steering magnitude. [CarEngineController.c](decompiled/native-arm64/CarEngineController.c), `Update` at `0xDD5180`, stores the absolute left-joystick input in static field `+0x9C` while setting motor torque; it stores the absolute right-joystick input in `+0xA0` while setting front-wheel steer angles. [ContainerRemoteCarUIController.c](decompiled/native-arm64/ContainerRemoteCarUIController.c) serializes those two fields into `P[10]` and `P[11]`. These are separate throttle/steering channels for the car.

### Control bits in `D[0]`

| Mask | Meaning | Remote-screen condition |
| --- | --- | --- |
| `01` | Forward/up | `active_updown_type == 1` |
| `02` | Reverse/down | `active_updown_type == -1` |
| `04` | Left | `active_leftright_type == 1` |
| `08` | Right | `active_leftright_type == -1` |
| `10` | Tank turret rotation request | Rotation button state is `Pressed` (`2`) |
| `20` | Tank cannon/fire request | `send_code_dapao_timer > 0` |
| `40` | Tank music request | `send_code_music_timer > 0` |
| `80` | Not set by these screens | Meaning unestablished |

The ordinary car screen uses the four direction bits. The tank screen adds turret, cannon, and music requests. Direction bits combine with the two rate fields.

For the tank's cannon/music button, a short release after more than two timing ticks sets a 20-tick fire pulse. Holding for more than 60 ticks sets a 20-tick music pulse and locks out the short-release action for that press. At the nominal cadence below, these are roughly 60 ms minimum for the short press, over 1.2 s for the long press, and roughly 400 ms pulses. They are app timing rather than hardware guarantees.

Sources: [tank controller](decompiled/native-arm64/ContainerRemoteTankUIController.c), `Update` at `0xDDE248`; [car controller](decompiled/native-arm64/ContainerRemoteCarUIController.c), `Update` at `0xDD8F6C`; [TankEngineController.c](decompiled/native-arm64/TankEngineController.c), `Update` at `0x6E0428`; [HjdBleTool.c](decompiled/native-arm64/HjdBleTool.c), `setIntegerSomeBit` at `0x7F7068`.

### Update cadence

The app compares the new 10-byte body with the previous one and sends changes when its send-lock counter permits. A send sets that lock to three ticks. A clock check advances timers at most once per Unity frame when at least 20 ms has elapsed.

- New control packets are throttled to approximately 60 ms or slower in this path.
- The rolling counter advances every 12 ticks, approximately 240 ms or slower, making an otherwise unchanged body change periodically.
- Android chooses the actual advertisement interval, separately from the app's payload-update cadence.

The inspected `Update` code stops previous advertising and makes two consecutive `StartAdvertising` calls with the same new packet. This is an implementation detail; each advertisement contains the same 19-byte payload.

## Replies and tank hit events (`09`)

The common receive helper returns the first two body bytes, `R[12]` and `R[13]`, to its caller. In the tank callback:

- `P[8] == 02` identifies an event handled as a hit.
- `P[9]` is compared with the previous event token, `tank_response_randon_data`.
- A changed token causes the app to decrement its local `tank_blood_volume_data` when above zero and update the health display.
- Repeated copies of the same token do not decrement health again.

This establishes the app's interpretation. Firmware rules for generating tokens, other event codes, and additional reply fields remain unverified. The code does not establish `P[9]` as a battery reading or health amount.

Source: [ContainerRemoteTankUIController.c](decompiled/native-arm64/ContainerRemoteTankUIController.c), receive callback at `0xDDF128`.

## Receive validation

After the Java `16 FF` check, native `calDataIsTrue` checks:

```text
R[0]     == 16
R[4]     == expected family
R[5]     == expected reply opcode
R[9:12]  == this controller's ID
```

It copies `R[12:14]` to the result array. **The native receive helper does not validate the XOR checksum, company identifier, or toy ID.** Running the original helper with modified inputs confirmed these behaviours. It also accepts a matching 14-byte prefix, although a normal complete manufacturer structure is 23 bytes. Very short malformed inputs can take the array-bounds exception path.

A new decoder can validate full length and checksum for its own purposes while keeping those checks distinct from the original app's acceptance rules. A matching response with a corrupted checksum is accepted by the app.

Source: [HjdBluetoothHardwareInterface.c](decompiled/native-arm64/HjdBluetoothHardwareInterface.c), `calDataIsTrue` at `0xDC485C`; [native validation results](decompiled/protocol-evidence/validation.json). Checking `R[1] == FF` belongs to the Java filter.

## Checked examples and offline tool

These are constructed examples, not radio captures. They use controller ID `61 62 63` (`abc`) and illustrative toy ID `12 34 56`.

Pairing request, 19-byte manufacturer payload:

```text
05 06 00 00 00 61 62 63 00 00 00 00 00 00 00 00 00 00 8A
```

Forward at rate 50 on both channels, counter 1:

```text
05 07 12 34 56 61 62 63 01 00 32 32 00 00 01 00 00 00 FB
```

The complete manufacturer AD structure for the latter is:

```text
16 FF 00 00 05 07 12 34 56 61 62 63 01 00 32 32 00 00 01 00 00 00 FB
```

Android's `addManufacturerData` takes the 19-byte payload and company ID `0` separately. A raw advertising-data API takes the 23-byte AD structure.

The [offline encoder/decoder](bluetooth_protocol.py) generates and inspects both representations without using Bluetooth:

```bash
python bluetooth_protocol.py encode --opcode 0x06 --controller 616263
python bluetooth_protocol.py encode --device 123456 --controller 616263 \
  --flags 0x01 --left 50 --right 50 --counter 1
python bluetooth_protocol.py decode \
  '16 ff 00 00 05 07 12 34 56 61 62 63 01 00 32 32 00 00 01 00 00 00 fb'
```

## Evidence and open questions

Primary evidence consists of the Java plugin, recovered field names, ARM64 instructions, and native pseudocode. [Selected disassemblies](decompiled/protocol-evidence/) preserve the packet routines. [The validation script](tools/validate_protocol_native.py) executes only isolated checksum and receive-filter instructions in Unicorn; it does not initialize or run the Android application.

A physical BLE capture is still needed to establish actual advertising cadence, toy reply timing, firmware event-token generation, and the complete semantics of other control screens. No GATT protocol was found in the inspected transport path. Unestablished reserved bytes and event codes should remain labelled unknown until observed or traced.
