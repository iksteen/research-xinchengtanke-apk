//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UISnapshotPoint : MonoBehaviour
{
	public bool isOrthographic; //Field offset: 0x18
	public float nearClip; //Field offset: 0x1C
	public float farClip; //Field offset: 0x20
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int fieldOfView; //Field offset: 0x24
	public float orthoSize; //Field offset: 0x28
	public Texture2D thumbnail; //Field offset: 0x30

	public UISnapshotPoint() { }

	private void Start() { }

}

