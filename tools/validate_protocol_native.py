"""Check the protocol notes against isolated original ARM64 helper routines."""
from pathlib import Path
import importlib.util
import json
import random
import struct

from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM
from unicorn.arm64_const import UC_ARM64_REG_SP, UC_ARM64_REG_PC, UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_X4, UC_ARM64_REG_X5, UC_ARM64_REG_X6, UC_ARM64_REG_X7, UC_ARM64_REG_LR

ROOT = Path(__file__).resolve().parent.parent
spec = importlib.util.spec_from_file_location("protocol", ROOT / "bluetooth_protocol.py")
protocol = importlib.util.module_from_spec(spec)
spec.loader.exec_module(protocol)
ELF = (ROOT / "unpacked/lib/arm64-v8a/libil2cpp.so").read_bytes()
CODE, DATA, STACK, STOP = 0xDC4000, 0x10000000, 0x20000000, 0x30000000
REGISTERS = [UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2, UC_ARM64_REG_X3, UC_ARM64_REG_X4, UC_ARM64_REG_X5, UC_ARM64_REG_X6, UC_ARM64_REG_X7]


def emulator():
    uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    uc.mem_map(CODE, 0x1000)
    uc.mem_write(CODE, ELF[CODE:CODE+0x1000])
    uc.mem_map(DATA, 0x1000)
    uc.mem_map(STACK, 0x10000)
    uc.mem_map(STOP, 0x1000)
    uc.reg_write(UC_ARM64_REG_SP, STACK+0xFF00)
    uc.reg_write(UC_ARM64_REG_LR, STOP)
    return uc


def array(uc, address, value):
    uc.mem_write(address, bytes(24) + struct.pack("<Q", len(value)) + value)


def native_checksum(packet):
    uc = emulator()
    array(uc, DATA, packet)
    uc.reg_write(UC_ARM64_REG_X0, DATA)
    uc.emu_start(0xDC41DC, STOP, count=1000)
    assert uc.reg_read(UC_ARM64_REG_PC) == STOP
    return bytes(uc.mem_read(DATA+32, 19))


def native_accept(raw, controller=b"abc", opcode=10):
    uc = emulator()
    array(uc, DATA, raw)
    array(uc, DATA+0x100, bytes(2))
    for register, value in zip(REGISTERS, [DATA, 5, opcode, *controller, DATA+0x100, 0]):
        uc.reg_write(register, value)
    uc.emu_start(0xDC485C, STOP, count=1000)
    assert uc.reg_read(UC_ARM64_REG_PC) == STOP
    return bool(uc.reg_read(UC_ARM64_REG_X0)), bytes(uc.mem_read(DATA+0x120, 2))


random_source = random.Random(20261024)
for _ in range(128):
    prefix = random_source.randbytes(18)
    expected = prefix + bytes([protocol.checksum(prefix)])
    assert native_checksum(prefix + b"\0") == expected

request = protocol.encode_packet(6, bytes(3), b"abc")
control = protocol.encode_packet(7, bytes.fromhex("123456"), b"abc", bytes([1,0,50,50,0,0,1,0,0,0]))
reply = protocol.encode_packet(10, bytes.fromhex("123456"), b"abc", bytes([2,77])+bytes(8))
raw = protocol.manufacturer_ad(reply)
assert native_accept(raw) == (True, bytes([2,77]))
assert native_accept(raw, b"abd")[0] is False
assert native_accept(raw, opcode=9)[0] is False
assert native_accept(raw[:4]+bytes([4])+raw[5:])[0] is False
assert native_accept(bytes([0x15])+raw[1:])[0] is False
assert native_accept(raw[:-1]+bytes([raw[-1]^1]))[0] is True
assert native_accept(raw[:2]+b"\x34\x12"+raw[4:])[0] is True
assert native_accept(raw[:6]+b"\xAA\xBB\xCC"+raw[9:])[0] is True
assert native_accept(raw[:14])[0] is True
assert native_accept(raw[:1]+b"\0"+raw[2:])[0] is True
summary = {
    "checksum_helper": "0xDC41DC", "receive_helper": "0xDC485C",
    "random_checksum_cases": 128, "receive_cases": 10, "all_passed": True,
    "observed_receive_behavior": {"checks_family_opcode_controller_id": True, "checks_checksum": False,
                                  "checks_company_id": False, "checks_target_id": False, "accepts_14_byte_prefix": True},
    "examples": {name: {"payload": value.hex(" "), "raw_ad": protocol.manufacturer_ad(value).hex(" ")}
                 for name,value in [("pair_request",request),("forward_50_percent",control),("synthetic_pair_reply",reply)]},
}
out = ROOT / "decompiled/protocol-evidence"
out.mkdir(exist_ok=True)
(out/"validation.json").write_text(json.dumps(summary,indent=2)+"\n")
print(json.dumps(summary,indent=2))
