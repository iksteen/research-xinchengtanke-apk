# xinchengtanke.apk — unpacked and decompiled

Package: `com.Shenqiwei.carapp`, version `0.1` (version code `1`).
Unity version: `2020.3.48f1c1`; IL2CPP metadata version: `27.1`.
APK SHA-256: `79454c9c22bc1bd36d7a984c0ffb9e0273714f2f4b5cd8decccd62d2aecf7c53`.

All **4,417 distinct application method addresses** exported successfully into **497 class files**. All 58 unpacked APK entries were verified against their original ZIP sizes and CRCs. See [`verification.json`](verification.json).

The reverse-engineered transport and packet format are documented in [`../BLUETOOTH_PROTOCOL.md`](../BLUETOOTH_PROTOCOL.md), with an [offline encoder/decoder](../bluetooth_protocol.py).

Git includes the readable decompilation, metadata-only assemblies, decoded Unity objects and images, evidence, scripts, and final toolchain logs. The source APK, `../unpacked/`, `unity-assets/bundle/`, and `ghidra-project/` are local-only outputs excluded by `.gitignore`. They can be regenerated from the APK; see the [repository guide](../README.md) for the download sources and expected checksum. Links to those local outputs below require a populated analysis workspace.

## Where to start

| Output | Contents |
| --- | --- |
| [`../unpacked/`](../unpacked/) | All 58 original APK entries, including both ARM native-library variants and the original Unity bundle. |
| [`apktool/AndroidManifest.xml`](apktool/AndroidManifest.xml) | Decoded Android manifest. `apktool/res/` contains decoded resources and `apktool/smali/` contains 139 Smali files. |
| [`java/sources/`](java/sources/) | 46 Java source files decompiled by jadx. |
| [`native-arm64/`](native-arm64/) | Native C-like pseudocode for application methods, grouped by declaring class. Each method includes its managed name, signature, and native address. `index.json` records success or failure individually. |
| [`csharp/DiffableCs/Assembly-CSharp/`](csharp/DiffableCs/Assembly-CSharp/) | Readable C# class declarations, fields, and method signatures. **Method bodies here are empty placeholders**, not recovered implementations. |
| [`csharp/DiffableCs/Assembly-CSharp-firstpass/`](csharp/DiffableCs/Assembly-CSharp-firstpass/) | C# declarations for the Unity-to-Java Bluetooth bridge. |
| [`il2cpp-arm64/dump.cs`](il2cpp-arm64/dump.cs) | Combined metadata dump with class names, field offsets, and method addresses, including Unity and framework code. Bodies are placeholders. |
| [`il2cpp-arm64/DummyDll/`](il2cpp-arm64/DummyDll/) | Reconstructed metadata-only .NET assemblies for inspection in ILSpy or other tools. |
| [`unity-assets/bundle/`](unity-assets/bundle/) | All 131 decompressed Unity bundle members, including scenes, serialized assets, and resource streams. |
| [`unity-assets/objects/`](unity-assets/objects/) | Exported textures, sprites, text, scene objects, and script metadata. |
| [`ghidra-project/xinchengtanke-native.gpr`](ghidra-project/xinchengtanke-native.gpr) | Ghidra project with bounded native functions and IL2CPP symbols. |

## Useful application entry points

- [`java/sources/com/sthjd/mylibrary/HjdUnityBluetoothLE.java`](java/sources/com/sthjd/mylibrary/HjdUnityBluetoothLE.java): Android Bluetooth scanning and advertising implementation.
- [`native-arm64/HjdBluetoothHardwareInterface.c`](native-arm64/HjdBluetoothHardwareInterface.c): Unity Bluetooth bridge, packet checksum generation, and packet validation.
- [`native-arm64/HjdBleTool.c`](native-arm64/HjdBleTool.c): Byte-array comparison, copying, and bit manipulation helpers.
- [`native-arm64/TankEngineController.c`](native-arm64/TankEngineController.c): Tank controls.
- [`native-arm64/HandTankEngineController.c`](native-arm64/HandTankEngineController.c) and [`native-arm64/GyroTankEngineController.c`](native-arm64/GyroTankEngineController.c): Alternate tank controls.
- [`native-arm64/CarEngineController.c`](native-arm64/CarEngineController.c): Car controls.
- `BE2_*` classes: block-programming interface and execution logic.

## Recovery limits

This is a Unity IL2CPP application: its managed application logic was compiled into `libil2cpp.so`. The recovered C# files contain declarations; the native pseudocode contains the recovered method implementations. The pseudocode retains native pointer operations and inferred types and is not an original or rebuildable Unity source project. Native analysis focuses on the ARM64 application and first-pass assemblies; the ARMv7 binaries remain available under `../unpacked/lib/armeabi-v7a/`.

Unity asset extraction found 15,474 serialized objects. Custom MonoBehaviour layouts and some Unity China-specific objects cannot be fully interpreted by the stock type trees. Their original bytes are preserved in the unpacked bundle, with raw per-object exports where possible. Texture and sprite exports that tolerate additional unknown fields are explicitly marked in `unity-assets/index.json`; their raw bytes are also retained. See [`unity-assets/summary.json`](unity-assets/summary.json) and [`unity-assets/export-errors.json`](unity-assets/export-errors.json) for exact coverage and remaining failures.

The Ghidra ELF image base is explicitly set to zero to match the IL2CPP method addresses. Before exporting, the script checks mapped instruction bytes against the original ELF. Function boundaries combine the recorded native method address table with direct ARM64 call destinations, including stripped runtime helpers. Application methods are disassembled within those ranges. Broad heuristic auto-analysis is disabled for the final export. Eight decompiler workers produce the native pseudocode. Per-method decompilation status is recorded in `native-arm64/index.json`.

## Tools and reproducibility

- [jadx 1.5.6](https://github.com/skylot/jadx/releases/tag/v1.5.6)
- [Apktool 3.0.3](https://github.com/iBotPeaches/Apktool/releases/tag/v3.0.3)
- [Il2CppDumper 6.7.46](https://github.com/Perfare/Il2CppDumper/releases/tag/v6.7.46)
- [Cpp2IL 2022.1.0-pre-release.21](https://github.com/SamboyCoding/Cpp2IL/releases/tag/2022.1.0-pre-release.21)
- Ghidra 12.1.2 DEV, installed locally at `/opt/ghidra`
- [UnityPy 1.25.4](https://github.com/K0lb3/UnityPy), installed in `../tools/unitypy-venv/`

Tool downloads and SHA-256 hashes are recorded in `../tools/provenance.json`. Logs are in `logs/`; `ghidra-final-with-helpers.log` records the final native pass. The native scripts are [`../tools/ApplyIl2CppSymbols.java`](../tools/ApplyIl2CppSymbols.java), [`../tools/PrepareIl2CppFunctions.java`](../tools/PrepareIl2CppFunctions.java), and [`../tools/ExportApplicationParallel.java`](../tools/ExportApplicationParallel.java). The Unity exporter is [`../tools/extract_unity_assets.py`](../tools/extract_unity_assets.py).

The application was not installed or launched. The protocol validation executes only its isolated checksum and receive-filter ARM64 instructions in an emulator; see [`protocol-evidence/validation.json`](protocol-evidence/validation.json).
