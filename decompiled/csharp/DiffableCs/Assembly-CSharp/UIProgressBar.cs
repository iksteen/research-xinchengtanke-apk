//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIProgressBar : UIWidgetContainer
{
	[DoNotObfuscateNGUI]
	internal enum FillDirection
	{
		LeftToRight = 0,
		RightToLeft = 1,
		BottomToTop = 2,
		TopToBottom = 3,
	}

	internal sealed class OnDragFinished : MulticastDelegate
	{

		public OnDragFinished(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	public static UIProgressBar current; //Field offset: 0x0
	public OnDragFinished onDragFinished; //Field offset: 0x18
	public Transform thumb; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	protected UIWidget mBG; //Field offset: 0x28
	[HideInInspector]
	[SerializeField]
	protected UIWidget mFG; //Field offset: 0x30
	[HideInInspector]
	[SerializeField]
	protected float mValue; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	protected FillDirection mFill; //Field offset: 0x3C
	protected bool mStarted; //Field offset: 0x40
	protected Transform mTrans; //Field offset: 0x48
	protected bool mIsDirty; //Field offset: 0x50
	protected Camera mCam; //Field offset: 0x58
	protected float mOffset; //Field offset: 0x60
	public int numberOfSteps; //Field offset: 0x64
	public List<EventDelegate> onChange; //Field offset: 0x68

	public float alpha
	{
		 get { } //Length: 220
		 set { } //Length: 1340
	}

	public UIWidget backgroundWidget
	{
		 get { } //Length: 8
		 set { } //Length: 156
	}

	public Camera cachedCamera
	{
		 get { } //Length: 240
	}

	public Transform cachedTransform
	{
		 get { } //Length: 160
	}

	public FillDirection fillDirection
	{
		 get { } //Length: 8
		 set { } //Length: 40
	}

	public UIWidget foregroundWidget
	{
		 get { } //Length: 8
		 set { } //Length: 156
	}

	protected bool isHorizontal
	{
		 get { } //Length: 16
	}

	protected bool isInverted
	{
		 get { } //Length: 20
	}

	public float value
	{
		 get { } //Length: 204
		 set { } //Length: 8
	}

	public UIProgressBar() { }

	public override void ForceUpdate() { }

	public float get_alpha() { }

	public UIWidget get_backgroundWidget() { }

	public Camera get_cachedCamera() { }

	public Transform get_cachedTransform() { }

	public FillDirection get_fillDirection() { }

	public UIWidget get_foregroundWidget() { }

	protected bool get_isHorizontal() { }

	protected bool get_isInverted() { }

	public float get_value() { }

	protected override float LocalToValue(Vector2 localPos) { }

	protected void OnEnable() { }

	public override void OnPan(Vector2 delta) { }

	protected override void OnStart() { }

	protected void OnValidate() { }

	protected float ScreenToValue(Vector2 screenPos) { }

	public bool Set(float val, bool notify = true) { }

	public void set_alpha(float value) { }

	public void set_backgroundWidget(UIWidget value) { }

	public void set_fillDirection(FillDirection value) { }

	public void set_foregroundWidget(UIWidget value) { }

	public void set_value(float value) { }

	protected void SetThumbPosition(Vector3 worldPos) { }

	public void Start() { }

	protected void Update() { }

	protected override void Upgrade() { }

}

