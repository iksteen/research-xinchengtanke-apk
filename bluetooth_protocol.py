"""Offline encoder/decoder for the xinchengtanke BLE advertisement protocol."""
import argparse
import json
from functools import reduce
from operator import xor


def checksum(first_18: bytes) -> int:
    if len(first_18) != 18:
        raise ValueError("Checksum input must contain exactly 18 bytes")
    return reduce(xor, first_18, 0xE9)


def encode_packet(opcode: int, device_id: bytes, controller_id: bytes,
                  body: bytes = bytes(10), family: int = 5) -> bytes:
    if len(device_id) != 3 or len(controller_id) != 3 or len(body) != 10:
        raise ValueError("Device ID/controller ID/body lengths must be 3/3/10 bytes")
    prefix = bytes([family, opcode]) + device_id + controller_id + body
    return prefix + bytes([checksum(prefix)])


def manufacturer_ad(packet: bytes, company_id: int = 0) -> bytes:
    if len(packet) != 19:
        raise ValueError("Packet must contain 19 bytes")
    return b"\x16\xff" + company_id.to_bytes(2, "little") + packet


def decode_packet(data: bytes) -> dict:
    company = None
    if len(data) >= 23 and data[:2] == b"\x16\xff":
        company = int.from_bytes(data[2:4], "little")
        data = data[4:23]
    if len(data) != 19:
        raise ValueError("Supply a 19-byte payload or a scan record starting with 16 FF and at least 23 bytes")
    result = {"family": data[0], "opcode": data[1], "device_id": data[2:5].hex(),
              "controller_id": data[5:8].hex(), "body": data[8:18].hex(),
              "checksum": data[18], "checksum_ok": checksum(data[:18]) == data[18]}
    if company is not None:
        result["company_id"] = company
    if data[1] == 7:
        names = ["forward", "reverse", "left", "right", "turret", "fire", "music", "unknown_bit7"]
        result["controls"] = {"flags": data[8], "active_bits": [n for i,n in enumerate(names) if data[8] & (1 << i)],
                              "left_rate": data[10], "right_rate": data[11], "counter": data[14]}
    elif data[1] == 9:
        result["event"] = {"code": data[8], "token": data[9]}
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    encode = sub.add_parser("encode")
    encode.add_argument("--opcode", type=lambda s: int(s, 0), default=7)
    encode.add_argument("--device", default="000000", help="Three-byte ID as hex")
    encode.add_argument("--controller", required=True, help="Three-byte ID as hex, e.g. 616263")
    encode.add_argument("--flags", type=lambda s: int(s, 0), default=0)
    encode.add_argument("--left", type=int, default=0)
    encode.add_argument("--right", type=int, default=0)
    encode.add_argument("--counter", type=int, default=0)
    decode = sub.add_parser("decode")
    decode.add_argument("hex_bytes")
    args = parser.parse_args()
    if args.command == "decode":
        print(json.dumps(decode_packet(bytes.fromhex(args.hex_bytes)), indent=2))
    else:
        for name in ["flags", "left", "right", "counter"]:
            if not 0 <= getattr(args, name) <= 255:
                parser.error(f"--{name} must fit one byte")
        body = bytes([args.flags, 0, args.left, args.right, 0, 0, args.counter, 0, 0, 0])
        packet = encode_packet(args.opcode, bytes.fromhex(args.device), bytes.fromhex(args.controller), body)
        print(json.dumps({"manufacturer_payload": packet.hex(" "), "raw_ad_structure": manufacturer_ad(packet).hex(" ")}, indent=2))


if __name__ == "__main__":
    main()
