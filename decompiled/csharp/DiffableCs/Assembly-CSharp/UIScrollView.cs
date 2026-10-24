//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIScrollView : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum DragEffect
	{
		None = 0,
		Momentum = 1,
		MomentumAndSpring = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum Movement
	{
		Horizontal = 0,
		Vertical = 1,
		Unrestricted = 2,
		Custom = 3,
	}

	internal sealed class OnDragNotification : MulticastDelegate
	{

		public OnDragNotification(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[DoNotObfuscateNGUI]
	internal enum ShowCondition
	{
		Always = 0,
		OnlyIfNeeded = 1,
		WhenDragging = 2,
	}

	public static BetterList<UIScrollView> list; //Field offset: 0x0
	public Movement movement; //Field offset: 0x18
	public DragEffect dragEffect; //Field offset: 0x1C
	public bool restrictWithinPanel; //Field offset: 0x20
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool constrainOnDrag; //Field offset: 0x21
	public bool disableDragIfFits; //Field offset: 0x22
	public bool smoothDragStart; //Field offset: 0x23
	public bool iOSDragEmulation; //Field offset: 0x24
	public float scrollWheelFactor; //Field offset: 0x28
	public float momentumAmount; //Field offset: 0x2C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float springStrength; //Field offset: 0x30
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float dampenStrength; //Field offset: 0x34
	public UIProgressBar horizontalScrollBar; //Field offset: 0x38
	public UIProgressBar verticalScrollBar; //Field offset: 0x40
	public ShowCondition showScrollBars; //Field offset: 0x48
	public Vector2 customMovement; //Field offset: 0x4C
	public Pivot contentPivot; //Field offset: 0x54
	public OnDragNotification onDragStarted; //Field offset: 0x58
	public OnDragNotification onDragFinished; //Field offset: 0x60
	public OnDragNotification onMomentumMove; //Field offset: 0x68
	public OnDragNotification onStoppedMoving; //Field offset: 0x70
	[HideInInspector]
	[SerializeField]
	private Vector3 scale; //Field offset: 0x78
	[HideInInspector]
	[SerializeField]
	private Vector2 relativePositionOnReset; //Field offset: 0x84
	protected Transform mTrans; //Field offset: 0x90
	protected UIPanel mPanel; //Field offset: 0x98
	protected Plane mPlane; //Field offset: 0xA0
	protected Vector3 mLastPos; //Field offset: 0xB0
	protected bool mPressed; //Field offset: 0xBC
	protected Vector3 mMomentum; //Field offset: 0xC0
	protected float mScroll; //Field offset: 0xCC
	protected Bounds mBounds; //Field offset: 0xD0
	protected bool mCalculatedBounds; //Field offset: 0xE8
	protected bool mShouldMove; //Field offset: 0xE9
	protected bool mIgnoreCallbacks; //Field offset: 0xEA
	protected int mDragID; //Field offset: 0xEC
	protected Vector2 mDragStartOffset; //Field offset: 0xF0
	protected bool mDragStarted; //Field offset: 0xF8
	private bool mStarted; //Field offset: 0xF9
	private bool mUpdateScrollbars; //Field offset: 0xFA
	[HideInInspector]
	public UICenterOnChild centerOnChild; //Field offset: 0x100

	public override Bounds bounds
	{
		 get { } //Length: 240
	}

	public bool canMoveHorizontally
	{
		 get { } //Length: 56
	}

	public bool canMoveVertically
	{
		 get { } //Length: 56
	}

	public Vector3 currentMomentum
	{
		 get { } //Length: 12
		 set { } //Length: 20
	}

	public bool isDragging
	{
		 get { } //Length: 32
	}

	public UIPanel panel
	{
		 get { } //Length: 8
	}

	protected override bool shouldMove
	{
		 get { } //Length: 580
	}

	public override bool shouldMoveHorizontally
	{
		 get { } //Length: 164
	}

	public override bool shouldMoveVertically
	{
		 get { } //Length: 164
	}

	private static UIScrollView() { }

	public UIScrollView() { }

	private void Awake() { }

	private void CheckScrollbars() { }

	public void DisableSpring() { }

	public void Drag() { }

	public override Bounds get_bounds() { }

	public bool get_canMoveHorizontally() { }

	public bool get_canMoveVertically() { }

	public Vector3 get_currentMomentum() { }

	public bool get_isDragging() { }

	public UIPanel get_panel() { }

	protected override bool get_shouldMove() { }

	public override bool get_shouldMoveHorizontally() { }

	public override bool get_shouldMoveVertically() { }

	public void InvalidateBounds() { }

	private void LateUpdate() { }

	public void MoveAbsolute(Vector3 absolute) { }

	public override void MoveRelative(Vector3 relative) { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void OnPan(Vector2 delta) { }

	public void OnScrollBar() { }

	public void Press(bool pressed) { }

	public void QueueUpdateScrollbars() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void ResetPosition() { }

	public bool RestrictWithinBounds(bool instant) { }

	public bool RestrictWithinBounds(bool instant, bool horizontal, bool vertical) { }

	public void Scroll(float delta) { }

	public void set_currentMomentum(Vector3 value) { }

	public override void SetDragAmount(float x, float y, bool updateScrollbars) { }

	private void Start() { }

	protected void Update() { }

	public void UpdatePosition() { }

	protected void UpdateScrollbars(UIProgressBar slider, float contentMin, float contentMax, float contentSize, float viewSize, bool inverted) { }

	public override void UpdateScrollbars(bool recalculateBounds) { }

	public void UpdateScrollbars() { }

}

