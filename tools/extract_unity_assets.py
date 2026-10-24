"""Unpack Unity bundle members and export inspectable asset data."""
from collections import Counter
from pathlib import Path
import json
import re

import UnityPy
from UnityPy.files import ObjectReader

ROOT = Path(__file__).resolve().parent.parent
SOURCE = ROOT / "unpacked/assets/bin/Data/data.unity3d"
OUTPUT = ROOT / "decompiled/unity-assets"
OUTPUT.mkdir(parents=True, exist_ok=True)

# This Unity China build appends fields absent from UnityPy's stock texture
# and sprite type trees. Preserve the raw bytes and explicitly record whenever
# a texture export uses the known fields without consuming the whole object.
original_parse = ObjectReader.parse_as_object
partial_texture_reads = {}


def parse_known_texture_fields(self, node=None, check_read=True):
    try:
        return original_parse(self, node=node, check_read=check_read)
    except ValueError as error:
        if self.type.name not in {"Texture2D", "Sprite"} or not check_read:
            raise
        result = original_parse(self, node=node, check_read=False)
        partial_texture_reads[(self.assets_file.name, self.path_id)] = str(error)
        return result


ObjectReader.parse_as_object = parse_known_texture_fields


def safe(value):
    return re.sub(r"[^\w. -]", "_", str(value))[:120] or "unnamed"


env = UnityPy.load(str(SOURCE))
bundle = next(iter(env.files.values()))
members = []
for name, member in bundle.files.items():
    dest = OUTPUT / "bundle" / name
    if not dest.resolve().is_relative_to((OUTPUT / "bundle").resolve()):
        raise ValueError(name)
    dest.parent.mkdir(parents=True, exist_ok=True)
    reader = getattr(member, "reader", member)
    data = reader.bytes
    dest.write_bytes(data)
    members.append({"name": name, "size": len(data)})

json_types = {
    "MonoScript", "MonoBehaviour", "GameObject", "Transform", "RectTransform",
    "BuildSettings", "PlayerSettings", "InputManager", "TextAsset",
}
index = []
counts = Counter()
failures = []
for obj in env.objects:
    kind = obj.type.name
    counts[kind] += 1
    record = {"asset": obj.assets_file.name, "path_id": obj.path_id, "type": kind}
    prefix = OUTPUT / "objects" / safe(obj.assets_file.name) / kind
    stem = str(obj.path_id)
    try:
        if kind in {"Texture2D", "Sprite", "TextAsset"}:
            value = obj.parse_as_object()
            record["name"] = getattr(value, "m_Name", "")
            stem += "_" + safe(record["name"])
            prefix.mkdir(parents=True, exist_ok=True)
            if kind in {"Texture2D", "Sprite"}:
                dest = prefix / (stem + ".png")
                value.image.save(dest)
            else:
                dest = prefix / (stem + ".txt")
                script = value.m_Script
                dest.write_bytes(script if isinstance(script, bytes) else script.encode("utf-8", "surrogateescape"))
            record["export"] = str(dest.relative_to(OUTPUT))
        elif kind in json_types:
            prefix.mkdir(parents=True, exist_ok=True)
            dest = prefix / (stem + ".json")
            value = obj.parse_as_dict()
            record["name"] = value.get("m_Name", "")
            dest.write_text(json.dumps(value, ensure_ascii=True, indent=2), encoding="utf-8")
            record["export"] = str(dest.relative_to(OUTPUT))
    except Exception as error:
        record["export_error"] = str(error)
        failures.append({"asset": record["asset"], "path_id": record["path_id"], "type": kind, "error": str(error)})
        if kind in json_types:
            prefix.mkdir(parents=True, exist_ok=True)
            dest = prefix / (stem + ".bin")
            dest.write_bytes(obj.get_raw_data())
            record["raw_export"] = str(dest.relative_to(OUTPUT))
    warning = partial_texture_reads.get((obj.assets_file.name, obj.path_id))
    if warning:
        prefix.mkdir(parents=True, exist_ok=True)
        dest = prefix / (stem + ".bin")
        dest.write_bytes(obj.get_raw_data())
        record["raw_export"] = str(dest.relative_to(OUTPUT))
        record["partial_type_tree_warning"] = warning
    index.append(record)

summary = {"unitypy_version": UnityPy.__version__, "bundle_members": len(members), "object_count": len(index), "types": dict(counts), "readable_exports": sum("export" in x for x in index), "raw_exports": sum("raw_export" in x for x in index), "export_errors": len(failures), "partial_texture_type_trees": len(partial_texture_reads)}
for name, data in [("index.json", index), ("bundle-members.json", members), ("export-errors.json", failures), ("summary.json", summary)]:
    (OUTPUT / name).write_text(json.dumps(data, ensure_ascii=True, indent=2) + "\n", encoding="utf-8")
print(json.dumps(summary, indent=2))
