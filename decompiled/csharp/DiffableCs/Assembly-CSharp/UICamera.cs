//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UICamera : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static CompareFunc<DepthEntry> <>9__190_0; //Field offset: 0x8
		public static CompareFunc<DepthEntry> <>9__190_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal bool <.cctor>b__230_0(KeyCode key) { }

		internal bool <.cctor>b__230_1(KeyCode key) { }

		internal bool <.cctor>b__230_2(KeyCode key) { }

		internal float <.cctor>b__230_3(string axis) { }

		internal MouseOrTouch <.cctor>b__230_4(int button) { }

		internal MouseOrTouch <.cctor>b__230_5(int id, bool createIfMissing) { }

		internal void <.cctor>b__230_6(int id) { }

		internal int <Raycast>b__190_0(DepthEntry r1, DepthEntry r2) { }

		internal int <Raycast>b__190_1(DepthEntry r1, DepthEntry r2) { }

	}

	internal sealed class BoolDelegate : MulticastDelegate
	{

		public BoolDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, bool state, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, bool state) { }

	}

	[DoNotObfuscateNGUI]
	internal enum ClickNotification
	{
		None = 0,
		Always = 1,
		BasedOnDelta = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum ControlScheme
	{
		Mouse = 0,
		Touch = 1,
		Controller = 2,
	}

	private struct DepthEntry
	{
		public int depth; //Field offset: 0x0
		public RaycastHit hit; //Field offset: 0x4
		public Vector3 point; //Field offset: 0x30
		public GameObject go; //Field offset: 0x40

	}

	[DoNotObfuscateNGUI]
	internal enum EventType
	{
		World_3D = 0,
		UI_3D = 1,
		World_2D = 2,
		UI_2D = 3,
	}

	internal sealed class FloatDelegate : MulticastDelegate
	{

		public FloatDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, float delta, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, float delta) { }

	}

	internal sealed class GetAnyKeyFunc : MulticastDelegate
	{

		public GetAnyKeyFunc(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override bool EndInvoke(IAsyncResult result) { }

		public override bool Invoke() { }

	}

	internal sealed class GetAxisFunc : MulticastDelegate
	{

		public GetAxisFunc(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string name, AsyncCallback callback, object object) { }

		public override float EndInvoke(IAsyncResult result) { }

		public override float Invoke(string name) { }

	}

	internal sealed class GetKeyStateFunc : MulticastDelegate
	{

		public GetKeyStateFunc(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(KeyCode key, AsyncCallback callback, object object) { }

		public override bool EndInvoke(IAsyncResult result) { }

		public override bool Invoke(KeyCode key) { }

	}

	internal sealed class GetMouseDelegate : MulticastDelegate
	{

		public GetMouseDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(int button, AsyncCallback callback, object object) { }

		public override MouseOrTouch EndInvoke(IAsyncResult result) { }

		public override MouseOrTouch Invoke(int button) { }

	}

	internal sealed class GetTouchCallback : MulticastDelegate
	{

		public GetTouchCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(int index, AsyncCallback callback, object object) { }

		public override Touch EndInvoke(IAsyncResult result) { }

		public override Touch Invoke(int index) { }

	}

	internal sealed class GetTouchCountCallback : MulticastDelegate
	{

		public GetTouchCountCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override int EndInvoke(IAsyncResult result) { }

		public override int Invoke() { }

	}

	internal sealed class GetTouchDelegate : MulticastDelegate
	{

		public GetTouchDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(int id, bool createIfMissing, AsyncCallback callback, object object) { }

		public override MouseOrTouch EndInvoke(IAsyncResult result) { }

		public override MouseOrTouch Invoke(int id, bool createIfMissing) { }

	}

	internal sealed class KeyCodeDelegate : MulticastDelegate
	{

		public KeyCodeDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, KeyCode key, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, KeyCode key) { }

	}

	internal class MouseOrTouch
	{
		public KeyCode key; //Field offset: 0x10
		public Vector2 pos; //Field offset: 0x14
		public Vector2 lastPos; //Field offset: 0x1C
		public Vector2 delta; //Field offset: 0x24
		public Vector2 totalDelta; //Field offset: 0x2C
		public Camera pressedCam; //Field offset: 0x38
		public GameObject last; //Field offset: 0x40
		public GameObject current; //Field offset: 0x48
		public GameObject pressed; //Field offset: 0x50
		public GameObject dragged; //Field offset: 0x58
		public GameObject lastClickGO; //Field offset: 0x60
		public float pressTime; //Field offset: 0x68
		public float clickTime; //Field offset: 0x6C
		public ClickNotification clickNotification; //Field offset: 0x70
		public bool touchBegan; //Field offset: 0x74
		public bool pressStarted; //Field offset: 0x75
		public bool dragStarted; //Field offset: 0x76
		public int ignoreDelta; //Field offset: 0x78

		public float deltaTime
		{
			 get { } //Length: 44
		}

		public bool isOverUI
		{
			 get { } //Length: 376
		}

		public MouseOrTouch() { }

		public float get_deltaTime() { }

		public bool get_isOverUI() { }

	}

	internal sealed class MoveDelegate : MulticastDelegate
	{

		public MoveDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Vector2 delta, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(Vector2 delta) { }

	}

	internal sealed class ObjectDelegate : MulticastDelegate
	{

		public ObjectDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, GameObject obj, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, GameObject obj) { }

	}

	internal sealed class OnCustomInput : MulticastDelegate
	{

		public OnCustomInput(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	internal sealed class OnSchemeChange : MulticastDelegate
	{

		public OnSchemeChange(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	internal sealed class OnScreenResize : MulticastDelegate
	{

		public OnScreenResize(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[DoNotObfuscateNGUI]
	internal enum ProcessEventsIn
	{
		Update = 0,
		LateUpdate = 1,
	}

	internal sealed class RemoveTouchDelegate : MulticastDelegate
	{

		public RemoveTouchDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(int id, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(int id) { }

	}

	internal class Touch
	{
		public int fingerId; //Field offset: 0x10
		public TouchPhase phase; //Field offset: 0x14
		public Vector2 position; //Field offset: 0x18
		public int tapCount; //Field offset: 0x20

		public Touch() { }

	}

	internal sealed class VectorDelegate : MulticastDelegate
	{

		public VectorDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, Vector2 delta, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, Vector2 delta) { }

	}

	internal sealed class VoidDelegate : MulticastDelegate
	{

		public VoidDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go) { }

	}

	public static BetterList<UICamera> list; //Field offset: 0x0
	public static GetKeyStateFunc GetKeyDown; //Field offset: 0x8
	public static GetKeyStateFunc GetKeyUp; //Field offset: 0x10
	public static GetKeyStateFunc GetKey; //Field offset: 0x18
	public static GetAxisFunc GetAxis; //Field offset: 0x20
	public static GetAnyKeyFunc GetAnyKeyDown; //Field offset: 0x28
	public static GetMouseDelegate GetMouse; //Field offset: 0x30
	public static GetTouchDelegate GetTouch; //Field offset: 0x38
	public static RemoveTouchDelegate RemoveTouch; //Field offset: 0x40
	public static OnScreenResize onScreenResize; //Field offset: 0x48
	public static OnCustomInput onCustomInput; //Field offset: 0x50
	public static bool showTooltips; //Field offset: 0x58
	public static bool ignoreAllEvents; //Field offset: 0x59
	public static bool ignoreControllerInput; //Field offset: 0x5A
	private static bool mDisableController; //Field offset: 0x5B
	private static Vector2 mLastPos; //Field offset: 0x5C
	public static Vector3 lastWorldPosition; //Field offset: 0x64
	public static Ray lastWorldRay; //Field offset: 0x70
	public static RaycastHit lastHit; //Field offset: 0x88
	public static UICamera current; //Field offset: 0xB8
	public static Camera currentCamera; //Field offset: 0xC0
	public static OnSchemeChange onSchemeChange; //Field offset: 0xC8
	private static ControlScheme mLastScheme; //Field offset: 0xD0
	public static int currentTouchID; //Field offset: 0xD4
	private static KeyCode mCurrentKey; //Field offset: 0xD8
	public static MouseOrTouch currentTouch; //Field offset: 0xE0
	private static bool mInputFocus; //Field offset: 0xE8
	private static GameObject mGenericHandler; //Field offset: 0xF0
	public static GameObject fallThrough; //Field offset: 0xF8
	public static VoidDelegate onClick; //Field offset: 0x100
	public static VoidDelegate onDoubleClick; //Field offset: 0x108
	public static BoolDelegate onHover; //Field offset: 0x110
	public static BoolDelegate onPress; //Field offset: 0x118
	public static BoolDelegate onSelect; //Field offset: 0x120
	public static FloatDelegate onScroll; //Field offset: 0x128
	public static VectorDelegate onDrag; //Field offset: 0x130
	public static VoidDelegate onDragStart; //Field offset: 0x138
	public static ObjectDelegate onDragOver; //Field offset: 0x140
	public static ObjectDelegate onDragOut; //Field offset: 0x148
	public static VoidDelegate onDragEnd; //Field offset: 0x150
	public static ObjectDelegate onDrop; //Field offset: 0x158
	public static KeyCodeDelegate onKey; //Field offset: 0x160
	public static KeyCodeDelegate onNavigate; //Field offset: 0x168
	public static VectorDelegate onPan; //Field offset: 0x170
	public static BoolDelegate onTooltip; //Field offset: 0x178
	public static MoveDelegate onMouseMove; //Field offset: 0x180
	private static MouseOrTouch[] mMouse; //Field offset: 0x188
	public static MouseOrTouch controller; //Field offset: 0x190
	public static List<MouseOrTouch> activeTouches; //Field offset: 0x198
	private static List<Int32> mTouchIDs; //Field offset: 0x1A0
	private static int mWidth; //Field offset: 0x1A8
	private static int mHeight; //Field offset: 0x1AC
	private static GameObject mTooltip; //Field offset: 0x1B0
	private static float mTooltipTime; //Field offset: 0x1B8
	public static bool isDragging; //Field offset: 0x1BC
	private static int mLastInteractionCheck; //Field offset: 0x1C0
	private static bool mLastInteractionResult; //Field offset: 0x1C4
	private static int mLastFocusCheck; //Field offset: 0x1C8
	private static bool mLastFocusResult; //Field offset: 0x1CC
	private static int mLastOverCheck; //Field offset: 0x1D0
	private static bool mLastOverResult; //Field offset: 0x1D4
	private static GameObject mRayHitObject; //Field offset: 0x1D8
	private static GameObject mHover; //Field offset: 0x1E0
	private static GameObject mSelected; //Field offset: 0x1E8
	private static DepthEntry mHit; //Field offset: 0x1F0
	private static BetterList<DepthEntry> mHits; //Field offset: 0x238
	private static RaycastHit[] mRayHits; //Field offset: 0x240
	private static Collider2D[] mOverlap; //Field offset: 0x248
	private static Plane m2DPlane; //Field offset: 0x250
	private static float mNextEvent; //Field offset: 0x260
	private static int mNotifying; //Field offset: 0x264
	private static bool mUsingTouchEvents; //Field offset: 0x268
	public static GetTouchCountCallback GetInputTouchCount; //Field offset: 0x270
	public static GetTouchCallback GetInputTouch; //Field offset: 0x278
	public EventType eventType; //Field offset: 0x18
	public bool eventsGoToColliders; //Field offset: 0x1C
	public LayerMask eventReceiverMask; //Field offset: 0x20
	public ProcessEventsIn processEventsIn; //Field offset: 0x24
	public bool debug; //Field offset: 0x28
	public bool useMouse; //Field offset: 0x29
	public bool useTouch; //Field offset: 0x2A
	public bool allowMultiTouch; //Field offset: 0x2B
	public bool useKeyboard; //Field offset: 0x2C
	public bool useController; //Field offset: 0x2D
	public bool stickyTooltip; //Field offset: 0x2E
	public float tooltipDelay; //Field offset: 0x30
	public bool longPressTooltip; //Field offset: 0x34
	public float mouseDragThreshold; //Field offset: 0x38
	public float mouseClickThreshold; //Field offset: 0x3C
	public float touchDragThreshold; //Field offset: 0x40
	public float touchClickThreshold; //Field offset: 0x44
	public float rangeDistance; //Field offset: 0x48
	public string horizontalAxisName; //Field offset: 0x50
	public string verticalAxisName; //Field offset: 0x58
	public string horizontalPanAxisName; //Field offset: 0x60
	public string verticalPanAxisName; //Field offset: 0x68
	public string scrollAxisName; //Field offset: 0x70
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool commandClick; //Field offset: 0x78
	public KeyCode submitKey0; //Field offset: 0x7C
	public KeyCode submitKey1; //Field offset: 0x80
	public KeyCode cancelKey0; //Field offset: 0x84
	public KeyCode cancelKey1; //Field offset: 0x88
	public bool autoHideCursor; //Field offset: 0x8C
	private Camera mCam; //Field offset: 0x90
	private float mNextRaycast; //Field offset: 0x98

	public Camera cachedCamera
	{
		 get { } //Length: 180
	}

	public static GameObject controllerNavigationObject
	{
		 get { } //Length: 1200
		 set { } //Length: 560
	}

	public static KeyCode currentKey
	{
		 get { } //Length: 100
		 set { } //Length: 608
	}

	public static Ray currentRay
	{
		 get { } //Length: 324
	}

	public static ControlScheme currentScheme
	{
		 get { } //Length: 512
		 set { } //Length: 276
	}

	public static bool disableController
	{
		 get { } //Length: 164
		 set { } //Length: 108
	}

	public static int dragCount
	{
		 get { } //Length: 624
	}

	public static UICamera eventHandler
	{
		 get { } //Length: 396
	}

	public static UICamera first
	{
		 get { } //Length: 228
	}

	[Obsolete]
	public static GameObject genericEventHandler
	{
		 get { } //Length: 100
		 set { } //Length: 108
	}

	private bool handlesEvents
	{
		private get { } //Length: 160
	}

	public static GameObject hoveredObject
	{
		 get { } //Length: 484
		 set { } //Length: 2012
	}

	public static bool inputHasFocus
	{
		 get { } //Length: 264
	}

	public static bool interactingWithUI
	{
		 get { } //Length: 660
	}

	public static bool isOverUI
	{
		 get { } //Length: 980
	}

	public static Vector2 lastEventPosition
	{
		 get { } //Length: 468
		 set { } //Length: 116
	}

	[Obsolete]
	public static Vector2 lastTouchPosition
	{
		 get { } //Length: 100
		 set { } //Length: 116
	}

	public static Camera mainCamera
	{
		 get { } //Length: 192
	}

	public static MouseOrTouch mouse0
	{
		 get { } //Length: 132
	}

	public static MouseOrTouch mouse1
	{
		 get { } //Length: 136
	}

	public static MouseOrTouch mouse2
	{
		 get { } //Length: 136
	}

	public static GameObject selectedObject
	{
		 get { } //Length: 312
		 set { } //Length: 2068
	}

	[Obsolete]
	public bool stickyPress
	{
		 get { } //Length: 8
	}

	public static GameObject tooltipObject
	{
		 get { } //Length: 100
		 set { } //Length: 96
	}

	[Obsolete]
	public static int touchCount
	{
		 get { } //Length: 88
	}

	public static bool uiHasFocus
	{
		 get { } //Length: 880
	}

	private static UICamera() { }

	public UICamera() { }

	private void Awake() { }

	public static void CancelNextTooltip() { }

	private static int CompareFunc(UICamera a, UICamera b) { }

	public static int CountInputSources() { }

	public static UICamera FindCameraForLayer(int layer) { }

	private static Rigidbody FindRootRigidbody(Transform trans) { }

	private static Rigidbody2D FindRootRigidbody2D(Transform trans) { }

	public Camera get_cachedCamera() { }

	public static GameObject get_controllerNavigationObject() { }

	public static KeyCode get_currentKey() { }

	public static Ray get_currentRay() { }

	public static ControlScheme get_currentScheme() { }

	public static bool get_disableController() { }

	public static int get_dragCount() { }

	public static UICamera get_eventHandler() { }

	public static UICamera get_first() { }

	public static GameObject get_genericEventHandler() { }

	private bool get_handlesEvents() { }

	public static GameObject get_hoveredObject() { }

	public static bool get_inputHasFocus() { }

	public static bool get_interactingWithUI() { }

	public static bool get_isOverUI() { }

	public static Vector2 get_lastEventPosition() { }

	public static Vector2 get_lastTouchPosition() { }

	public static Camera get_mainCamera() { }

	public static MouseOrTouch get_mouse0() { }

	public static MouseOrTouch get_mouse1() { }

	public static MouseOrTouch get_mouse2() { }

	public static GameObject get_selectedObject() { }

	public bool get_stickyPress() { }

	public static GameObject get_tooltipObject() { }

	public static int get_touchCount() { }

	public static bool get_uiHasFocus() { }

	private static int GetDirection(KeyCode up0, KeyCode up1, KeyCode down0, KeyCode down1) { }

	private static int GetDirection(KeyCode up, KeyCode down) { }

	private static int GetDirection(string axis) { }

	private bool HasCollider(GameObject go) { }

	public static bool HideTooltip() { }

	public static bool IsHighlighted(GameObject go) { }

	public static bool IsPartOfUI(GameObject go) { }

	public static bool IsPressed(GameObject go) { }

	private static bool IsVisible(Vector3 worldPoint, GameObject go) { }

	private static bool IsVisible(ref DepthEntry de) { }

	private void LateUpdate() { }

	public static void Notify(GameObject go, string funcName, object obj) { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void ProcessEvents() { }

	private void ProcessFakeTouches() { }

	public void ProcessMouse() { }

	public void ProcessOthers() { }

	private void ProcessPress(bool pressed, float click, float drag) { }

	private void ProcessRelease(bool isMouse, float drag) { }

	public void ProcessTouch(bool pressed, bool released) { }

	public void ProcessTouches() { }

	public static void Raycast(MouseOrTouch touch) { }

	public static bool Raycast(Vector3 inPos) { }

	public static void ResetTooltip(float delay = 0.5) { }

	public static void set_controllerNavigationObject(GameObject value) { }

	public static void set_currentKey(KeyCode value) { }

	public static void set_currentScheme(ControlScheme value) { }

	public static void set_disableController(bool value) { }

	public static void set_genericEventHandler(GameObject value) { }

	public static void set_hoveredObject(GameObject value) { }

	public static void set_lastEventPosition(Vector2 value) { }

	public static void set_lastTouchPosition(Vector2 value) { }

	public static void set_selectedObject(GameObject value) { }

	public static void set_tooltipObject(GameObject value) { }

	public static bool ShowTooltip(GameObject go) { }

	private void Start() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void StartIgnoring() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void StopIgnoring() { }

	private void Update() { }

}

