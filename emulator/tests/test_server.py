import json

from aiohttp import ClientSession, WSServerHandshakeError
from aiohttp.test_utils import TestServer
import pytest

from emulator.server import create_app


async def result(ws):
    while True:
        message = await ws.receive_json(timeout=3)
        if message["type"] != "state":
            return message


async def test_websocket_pair_drive_invalid_input_and_reset():
    async with TestServer(create_app()) as server:
        async with ClientSession() as client:
            async with client.ws_connect(server.make_url('/ws')) as ws:
                assert (await ws.receive_json())["car"]["device_id"] == "c0ffee"
                await ws.send_json({"action": "local"})
                assert (await result(ws))["type"] == "result"
                await ws.send_json({"action": "drive", "throttle": .7, "steering": -.4})
                assert (await result(ws))["type"] == "result"
                state = await (await client.get(server.make_url('/api/state'))).json()
                assert state["car"]["throttle"] == .7 and state["car"]["steering"] == -.4
                await ws.send_str('{bad json')
                assert (await result(ws))["type"] == "error"
                await ws.send_json({"action": "drive", "throttle": float('nan')})
                assert (await result(ws))["type"] == "error"
                await ws.send_json({"action": "reset"})
                assert (await result(ws))["type"] == "result"
                state = await (await client.get(server.make_url('/api/state'))).json()
                assert not state["car"]["paired"] and state["car"]["speed"] == 0


async def test_cross_origin_websocket_is_rejected():
    async with TestServer(create_app()) as server:
        async with ClientSession() as client:
            with pytest.raises(WSServerHandshakeError) as error:
                await client.ws_connect(server.make_url('/ws'), origin="https://unrelated.example")
            assert error.value.status == 403
