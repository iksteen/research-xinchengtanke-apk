//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIDragDropItem : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Restriction
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		PressAndHold = 3,
	}

	public static List<UIDragDropItem> draggedItems; //Field offset: 0x0
	private static int mIgnoreClick; //Field offset: 0x8
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Restriction restriction; //Field offset: 0x18
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool clickToDrag; //Field offset: 0x1C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool cloneOnDrag; //Field offset: 0x1D
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool interactable; //Field offset: 0x1E
	[HideInInspector]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float pressAndHoldDelay; //Field offset: 0x20
	protected Transform mTrans; //Field offset: 0x28
	protected Transform mParent; //Field offset: 0x30
	protected Collider mCollider; //Field offset: 0x38
	protected Collider2D mCollider2D; //Field offset: 0x40
	protected UIButton mButton; //Field offset: 0x48
	protected UIRoot mRoot; //Field offset: 0x50
	protected UIGrid mGrid; //Field offset: 0x58
	protected UITable mTable; //Field offset: 0x60
	protected float mDragStartTime; //Field offset: 0x68
	protected UIDragScrollView mDragScrollView; //Field offset: 0x70
	protected bool mPressed; //Field offset: 0x78
	protected bool mDragging; //Field offset: 0x79
	protected MouseOrTouch mTouch; //Field offset: 0x80

	private static UIDragDropItem() { }

	public UIDragDropItem() { }

	protected override void Awake() { }

	protected override void DestroySelf() { }

	protected void EnableDragScrollView() { }

	public static bool IsDragged(GameObject go) { }

	protected void OnApplicationFocus(bool focus) { }

	protected override void OnClick() { }

	protected override void OnClone(GameObject original) { }

	protected override void OnDisable() { }

	protected override void OnDrag(Vector2 delta) { }

	protected override void OnDragDropEnd(GameObject surface) { }

	protected override void OnDragDropMove(Vector2 delta) { }

	protected override void OnDragDropRelease(GameObject surface) { }

	protected override void OnDragDropStart() { }

	protected override void OnDragEnd() { }

	protected override void OnDragStart() { }

	protected override void OnEnable() { }

	protected void OnGlobalClick(GameObject go) { }

	protected void OnGlobalPress(GameObject go, bool state) { }

	protected override void OnPress(bool isPressed) { }

	protected override void Start() { }

	public override UIDragDropItem StartDragging() { }

	public void StopDragging(GameObject go = null) { }

	protected override void Update() { }

}

