//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIDragObject : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum DragEffect
	{
		None = 0,
		Momentum = 1,
		MomentumAndSpring = 2,
	}

	public Transform target; //Field offset: 0x18
	public UIPanel panelRegion; //Field offset: 0x20
	public Vector3 scrollMomentum; //Field offset: 0x28
	public bool restrictWithinPanel; //Field offset: 0x34
	public UIRect contentRect; //Field offset: 0x38
	public DragEffect dragEffect; //Field offset: 0x40
	public float momentumAmount; //Field offset: 0x44
	[SerializeField]
	protected Vector3 scale; //Field offset: 0x48
	[HideInInspector]
	[SerializeField]
	private float scrollWheelFactor; //Field offset: 0x54
	private Plane mPlane; //Field offset: 0x58
	private Vector3 mTargetPos; //Field offset: 0x68
	private Vector3 mLastPos; //Field offset: 0x74
	private Vector3 mMomentum; //Field offset: 0x80
	private Vector3 mScroll; //Field offset: 0x8C
	private Bounds mBounds; //Field offset: 0x98
	private int mTouchID; //Field offset: 0xB0
	private bool mStarted; //Field offset: 0xB4
	private bool mPressed; //Field offset: 0xB5

	public Vector3 dragMovement
	{
		 get { } //Length: 12
		 set { } //Length: 12
	}

	public UIDragObject() { }

	public void CancelMovement() { }

	public void CancelSpring() { }

	private void FindPanel() { }

	public Vector3 get_dragMovement() { }

	private void LateUpdate() { }

	private void Move(Vector3 worldDelta) { }

	private void OnDisable() { }

	private void OnDrag(Vector2 delta) { }

	private void OnEnable() { }

	private void OnPress(bool pressed) { }

	private void OnScroll(float delta) { }

	public void set_dragMovement(Vector3 value) { }

	private void UpdateBounds() { }

}

