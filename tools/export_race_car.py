"""Export the APK's Tsunami race car as lightweight browser geometry."""
import hashlib
import json
from pathlib import Path

import UnityPy
from UnityPy.helpers.MeshHelper import MeshHandler

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "emulator/static/assets"


def vector(value, keys):
    return [round(getattr(value, key), 7) for key in keys]


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    env = UnityPy.load(str(ROOT / "unpacked/assets/bin/Data/data.unity3d"))
    level = next(asset for asset in env.assets if asset.name == "level5")
    asset = next(asset for asset in env.assets if asset.name == "sharedassets5.assets")

    def export_node(reader):
        transform = reader.parse_as_object()
        game = transform.m_GameObject.deref().parse_as_object()
        node = {"name": game.m_Name, "position": vector(transform.m_LocalPosition, "xyz"),
                "rotation": vector(transform.m_LocalRotation, "xyzw"),
                "scale": vector(transform.m_LocalScale, "xyz"), "children": []}
        for component in game.m_Component:
            ref = component.component
            if ref.type.name == "MeshFilter":
                mesh = ref.deref().parse_as_object().m_Mesh.deref().parse_as_object(check_read=False)
                handler = MeshHandler(mesh)
                handler.process()
                vertices = [[round(-v[0], 6), round(v[1], 6), round(v[2], 6)] for v in handler.m_Vertices]
                normals = [[round(-v[0], 6), round(v[1], 6), round(v[2], 6)] for v in handler.m_Normals]
                node["mesh"] = {"name": mesh.m_Name, "vertices": vertices, "normals": normals,
                                "uv": [[round(x,6),round(y,6)] for x,y in handler.m_UV0],
                                "indices": [i for group in handler.get_triangles() for a,b,c in group for i in [c,b,a]]}
        node["position"][0] *= -1
        node["rotation"][1] *= -1
        node["rotation"][2] *= -1
        node["children"] = [export_node(child.deref()) for child in transform.m_Children]
        return node

    car = export_node(level.objects[186])
    assert car["name"] == "TsunamiBody" and len(car["children"]) == 4
    (OUT / "race-car.json").write_text(json.dumps(car, separators=(",", ":")))
    asset.objects[17].parse_as_object(check_read=False).image.save(OUT / "race-car.png")
    floor = ROOT / "decompiled/unity-assets/objects/resources.assets/Texture2D/116_asphalt.png"
    from PIL import Image
    with Image.open(floor) as image:
        image.convert("RGB").resize((512,512)).save(OUT / "asphalt.jpg", quality=85)
    provenance = {"source_apk_sha256": "79454c9c22bc1bd36d7a984c0ffb9e0273714f2f4b5cd8decccd62d2aecf7c53",
                  "scene": "level5", "transform_path_id": 186,
                  "meshes": "sharedassets5.assets: TsunamiBody and four TsunamiWheel meshes",
                  "texture": "sharedassets5.assets:17 Tsunami_Texture",
                  "floor": str(floor.relative_to(ROOT)),
                  "coordinate_conversion": "Unity left-handed to right-handed: reflect X, reverse triangles",
                  "files": {p.name: hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(OUT.iterdir())
                            if p.is_file() and p.name != "provenance.json"}}
    (OUT / "provenance.json").write_text(json.dumps(provenance, indent=2)+"\n")
    print("Exported original Tsunami race car and four wheels to", OUT)


if __name__ == "__main__":
    main()
