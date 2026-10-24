# xinchengtanke APK research

Reverse-engineering notes and decompilation of `com.Shenqiwei.carapp` version `0.1`, a Unity IL2CPP application for Bluetooth-controlled cars and tanks.

- [Bluetooth protocol](BLUETOOTH_PROTOCOL.md): advertising transport, pairing exchange, packet layout, checksum, control bits, timing, and reply handling.
- [Decompilation guide](decompiled/README.md): Java sources, native pseudocode, C# declarations, Android resources, and Unity objects.
- [Offline packet encoder/decoder](bluetooth_protocol.py).
- [Verification summary](decompiled/verification.json) and [native protocol validation](decompiled/protocol-evidence/validation.json).
- [Tool versions, download sources, and hashes](tools/provenance.json).
- [Race-car emulator](emulator/README.md): original Tsunami model, live Bluetooth advertising transport, browser controls, and packet monitor.

The native export contains 4,417 application methods across 497 class files. C# files contain recovered declarations; native implementations are represented by C-like pseudocode. These outputs are research material rather than an original, rebuildable Unity project.

## Source APK

The APK and raw unpacked binaries are kept outside Git. Download the APK as `xinchengtanke.apk` from either source:

- [Research copy](https://plak.infrapuin.nl/selif/xinchengtanke.apk), set to expire on 24 October 2027.
- [Original publisher](https://www.hainanyunyu.net/file/chuangxin/xinchengtanke.apk).

Expected size: **230,568,834 bytes**. Expected SHA-256:

```text
79454c9c22bc1bd36d7a984c0ffb9e0273714f2f4b5cd8decccd62d2aecf7c53
```

The checksum and APK archive checks are recorded in [xinchengtanke.apk.verified.json](xinchengtanke.apk.verified.json). Verify a downloaded copy before using it as an analysis input:

```bash
sha256sum xinchengtanke.apk
unzip -t xinchengtanke.apk
```

## Offline protocol tools

The encoder/decoder uses Python's standard library and does not transmit over Bluetooth:

```bash
python bluetooth_protocol.py encode --device 123456 --controller 616263 \
  --flags 0x01 --left 50 --right 50 --counter 1
```

To repeat the native helper validation after downloading and unpacking the APK, install `unicorn==2.1.4` in a local environment and run `tools/validate_protocol_native.py`. It reads `unpacked/lib/arm64-v8a/libil2cpp.so` and checks isolated original ARM64 routines. Unity extraction uses `UnityPy==1.25.4` through `tools/extract_unity_assets.py`.

Downloaded tool distributions, virtual environments, Ghidra databases, raw Unity bundle members, duplicate native libraries, and upload-management receipts stay local. The repository includes decompiled sources, metadata-only assemblies, decoded Unity objects and images, disassemblies, research scripts, and final toolchain logs.
