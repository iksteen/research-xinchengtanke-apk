"""Run with: uv run python -m emulator.server"""
import argparse
import asyncio
import json
import logging
import math
from pathlib import Path
import time

from aiohttp import web, WSMsgType

from bluetooth_protocol import encode_packet
from .bluez import BlueZ
from .model import Car

STATIC = Path(__file__).parent / "static"
RUNTIME = web.AppKey("runtime", object)


class Runtime:
    def __init__(self, device_id, adapter, bus_address=None, bluetooth=False):
        self.car = Car(device_id)
        self.bluetooth = BlueZ(self.car.receive, adapter, bus_address)
        self.clients = set()
        self.task = None
        self.start_bluetooth = bluetooth

    def snapshot(self):
        return {"car": self.car.snapshot(), "bluetooth": self.bluetooth.snapshot()}

    async def command(self, message):
        action = message.get("action")
        if action == "drive":
            values = [float(message.get(key, 0)) for key in ["throttle", "steering"]]
            if not all(math.isfinite(x) for x in values):
                raise ValueError("Controls must be finite")
            if self.bluetooth.enabled:
                raise ValueError("Turn off Bluetooth mode before using local controls")
            self.car.local_drive(*values)
        elif action == "local":
            if self.bluetooth.enabled:
                await self.bluetooth.stop()
            self.car.release()
            self.car.receive(encode_packet(6, bytes(3), b"sim"))
        elif action == "pair":
            if self.bluetooth.enabled:
                raise ValueError("Use the Android app to pair in Bluetooth mode")
            self.car.receive(encode_packet(6, bytes(3), b"sim"))
        elif action == "packet":
            if self.bluetooth.enabled:
                raise ValueError("Turn off Bluetooth mode before injecting virtual packets")
            reply = self.car.receive(bytes.fromhex(message.get("hex", "")), "packet")
            return {"reply": reply.hex(" ")}
        elif action in ["reset", "release"]:
            if self.bluetooth.enabled:
                await self.bluetooth.stop()
            if action == "reset":
                self.car.reset()
            else:
                self.car.release()
        elif action == "bluetooth":
            if message.get("enabled"):
                self.car.release()
                await self.bluetooth.start()
            else:
                await self.bluetooth.stop()
                self.car.release()
        elif action == "brake":
            self.car.speed = self.car.throttle = self.car.steering = 0.0
            self.car.flags = 0
        else:
            raise ValueError("Unknown action")
        return {}

    async def loop(self):
        previous = time.monotonic()
        frame = 0
        while True:
            now = time.monotonic()
            self.car.step(now - previous)
            previous = now
            if frame % 2 == 0:
                data = json.dumps({"type": "state", **self.snapshot()}, allow_nan=False)
                for client in list(self.clients):
                    if client.closed:
                        self.clients.discard(client)
                    else:
                        try:
                            await asyncio.wait_for(client.send_str(data), timeout=1)
                        except (ConnectionError, TimeoutError, RuntimeError):
                            self.clients.discard(client)
            frame += 1
            await asyncio.sleep(0.02)


async def websocket(request):
    runtime = request.app[RUNTIME]
    # Keep the local control API inaccessible to cross-origin browser pages.
    origin = request.headers.get("Origin")
    if origin and origin not in [f"http://{request.host}", f"https://{request.host}"]:
        raise web.HTTPForbidden(text="Origin mismatch")
    ws = web.WebSocketResponse(max_msg_size=8192, heartbeat=20)
    await ws.prepare(request)
    runtime.clients.add(ws)
    await ws.send_json({"type": "state", **runtime.snapshot()})
    try:
        async for message in ws:
            if message.type == WSMsgType.TEXT:
                try:
                    data = json.loads(message.data)
                    if not isinstance(data, dict):
                        raise ValueError("Expected a JSON object")
                    result = await runtime.command(data)
                    await ws.send_json({"type": "result", "action": data.get("action"), **result})
                except (ValueError, TypeError, RuntimeError) as error:
                    await ws.send_json({"type": "error", "message": str(error)})
    finally:
        runtime.clients.discard(ws)
    return ws


async def lifecycle(app):
    runtime = app[RUNTIME]
    if runtime.start_bluetooth:
        try:
            await runtime.bluetooth.start()
        except RuntimeError as error:
            logging.getLogger(__name__).warning("%s", error)
    runtime.task = asyncio.create_task(runtime.loop())
    yield
    for ws in list(runtime.clients):
        await ws.close()
    runtime.task.cancel()
    await asyncio.gather(runtime.task, return_exceptions=True)
    await runtime.bluetooth.stop()


async def index(request):
    return web.FileResponse(STATIC / "index.html")


async def state(request):
    return web.json_response(request.app[RUNTIME].snapshot())


def create_app(device_id=b"\xc0\xff\xee", adapter="hci0", bus_address=None, bluetooth=False):
    app = web.Application()
    app[RUNTIME] = Runtime(device_id, adapter, bus_address, bluetooth)
    app.cleanup_ctx.append(lifecycle)
    app.router.add_get("/", index)
    app.router.add_get("/ws", websocket)
    app.router.add_get("/api/state", state)
    app.router.add_static("/static/", STATIC)
    return app


def main():
    parser = argparse.ArgumentParser(description="Tsunami race-car and Bluetooth protocol emulator")
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", default=8765, type=int)
    parser.add_argument("--adapter", default="hci0")
    parser.add_argument("--device-id", default="c0ffee")
    parser.add_argument("--bluetooth", action="store_true", help="Listen for the Android app immediately")
    args = parser.parse_args()
    try:
        device_id = bytes.fromhex(args.device_id)
        if len(device_id) != 3:
            raise ValueError()
    except ValueError:
        parser.error("--device-id must contain six hex digits")
    logging.basicConfig(level=logging.INFO)
    web.run_app(create_app(device_id, args.adapter, bluetooth=args.bluetooth), host=args.host, port=args.port)


if __name__ == "__main__":
    main()
