//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIDraggableCamera : MonoBehaviour
{
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Transform rootForBounds; //Field offset: 0x18
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Vector2 scale; //Field offset: 0x20
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float scrollWheelFactor; //Field offset: 0x28
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Vector2 scrollZoomRange; //Field offset: 0x2C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public DragEffect dragEffect; //Field offset: 0x34
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool smoothDragStart; //Field offset: 0x38
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float momentumAmount; //Field offset: 0x3C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Vector2 padding; //Field offset: 0x40
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool paddingIsRelative; //Field offset: 0x48
	private Camera mCam; //Field offset: 0x50
	private Transform mTrans; //Field offset: 0x58
	private bool mPressed; //Field offset: 0x60
	private Vector2 mMomentum; //Field offset: 0x64
	private Bounds mBounds; //Field offset: 0x6C
	private float mScroll; //Field offset: 0x84
	private bool mDragStarted; //Field offset: 0x88

	public Camera cachedCamera
	{
		 get { } //Length: 8
	}

	public Vector2 currentMomentum
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public float zoom
	{
		 get { } //Length: 204
	}

	public UIDraggableCamera() { }

	private Vector3 CalculateConstrainOffset() { }

	public bool ConstrainToBounds(bool immediate) { }

	public void Drag(Vector2 delta) { }

	public Camera get_cachedCamera() { }

	public Vector2 get_currentMomentum() { }

	public float get_zoom() { }

	public void Press(bool isPressed) { }

	public void Scroll(float delta) { }

	public void set_currentMomentum(Vector2 value) { }

	private void Start() { }

	private void Update() { }

}

