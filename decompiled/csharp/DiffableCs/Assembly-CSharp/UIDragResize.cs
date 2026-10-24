//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIDragResize : MonoBehaviour
{
	public UIWidget target; //Field offset: 0x18
	public Pivot pivot; //Field offset: 0x20
	public int minWidth; //Field offset: 0x24
	public int minHeight; //Field offset: 0x28
	public int maxWidth; //Field offset: 0x2C
	public int maxHeight; //Field offset: 0x30
	public bool updateAnchors; //Field offset: 0x34
	private Plane mPlane; //Field offset: 0x38
	private Vector3 mRayPos; //Field offset: 0x48
	private Vector3 mLocalPos; //Field offset: 0x54
	private int mWidth; //Field offset: 0x60
	private int mHeight; //Field offset: 0x64
	private bool mDragging; //Field offset: 0x68

	public UIDragResize() { }

	private void OnDrag(Vector2 delta) { }

	private void OnDragEnd() { }

	private void OnDragStart() { }

}

