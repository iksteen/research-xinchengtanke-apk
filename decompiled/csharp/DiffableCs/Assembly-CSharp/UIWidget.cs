//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIWidget : UIRect
{
	[DoNotObfuscateNGUI]
	internal enum AspectRatioSource
	{
		Free = 0,
		BasedOnWidth = 1,
		BasedOnHeight = 2,
	}

	internal sealed class HitCheck : MulticastDelegate
	{

		public HitCheck(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Vector3 worldPos, AsyncCallback callback, object object) { }

		public override bool EndInvoke(IAsyncResult result) { }

		public override bool Invoke(Vector3 worldPos) { }

	}

	internal sealed class OnDimensionsChanged : MulticastDelegate
	{

		public OnDimensionsChanged(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	internal sealed class OnPostFillCallback : MulticastDelegate
	{

		public OnPostFillCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(UIWidget widget, int bufferOffset, List<Vector3> verts, List<Vector2> uvs, List<Color> cols, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(UIWidget widget, int bufferOffset, List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	}

	[DoNotObfuscateNGUI]
	internal enum Pivot
	{
		TopLeft = 0,
		Top = 1,
		TopRight = 2,
		Left = 3,
		Center = 4,
		Right = 5,
		BottomLeft = 6,
		Bottom = 7,
		BottomRight = 8,
	}

	[HideInInspector]
	[SerializeField]
	protected Color mColor; //Field offset: 0x90
	[HideInInspector]
	[SerializeField]
	protected Pivot mPivot; //Field offset: 0xA0
	[HideInInspector]
	[SerializeField]
	protected int mWidth; //Field offset: 0xA4
	[HideInInspector]
	[SerializeField]
	protected int mHeight; //Field offset: 0xA8
	[HideInInspector]
	[SerializeField]
	protected int mDepth; //Field offset: 0xAC
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool boundless; //Field offset: 0xB0
	[HideInInspector]
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected Material mMat; //Field offset: 0xB8
	public OnDimensionsChanged onChange; //Field offset: 0xC0
	public OnPostFillCallback onPostFill; //Field offset: 0xC8
	public OnRenderCallback mOnRender; //Field offset: 0xD0
	public bool autoResizeBoxCollider; //Field offset: 0xD8
	public bool hideIfOffScreen; //Field offset: 0xD9
	public AspectRatioSource keepAspectRatio; //Field offset: 0xDC
	public float aspectRatio; //Field offset: 0xE0
	public HitCheck hitCheck; //Field offset: 0xE8
	public UIPanel panel; //Field offset: 0xF0
	public UIGeometry geometry; //Field offset: 0xF8
	public bool fillGeometry; //Field offset: 0x100
	protected bool mPlayMode; //Field offset: 0x101
	protected Vector4 mDrawRegion; //Field offset: 0x104
	private Matrix4x4 mLocalToPanel; //Field offset: 0x114
	private bool mIsVisibleByAlpha; //Field offset: 0x154
	private bool mIsVisibleByPanel; //Field offset: 0x155
	private bool mIsInFront; //Field offset: 0x156
	private float mLastAlpha; //Field offset: 0x158
	private bool mMoved; //Field offset: 0x15C
	public UIDrawCall drawCall; //Field offset: 0x160
	protected Vector3[] mCorners; //Field offset: 0x168
	private int mAlphaFrameID; //Field offset: 0x170
	private int mMatrixFrame; //Field offset: 0x174
	private Vector3 mOldV0; //Field offset: 0x178
	private Vector3 mOldV1; //Field offset: 0x184

	public virtual float alpha
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public override Vector4 border
	{
		 get { } //Length: 8
		 set { } //Length: 4
	}

	public Color color
	{
		 get { } //Length: 12
		 set { } //Length: 152
	}

	public override int depth
	{
		 get { } //Length: 8
		 set { } //Length: 292
	}

	public override Vector4 drawingDimensions
	{
		 get { } //Length: 292
	}

	public Vector4 drawRegion
	{
		 get { } //Length: 20
		 set { } //Length: 156
	}

	public bool hasBoxCollider
	{
		 get { } //Length: 336
	}

	public bool hasVertices
	{
		 get { } //Length: 20
	}

	public int height
	{
		 get { } //Length: 8
		 set { } //Length: 668
	}

	public override bool isSelectable
	{
		 get { } //Length: 8
	}

	public bool isVisible
	{
		 get { } //Length: 160
	}

	public Vector3 localCenter
	{
		 get { } //Length: 136
	}

	public virtual Vector3[] localCorners
	{
		 get { } //Length: 196
	}

	public override Vector2 localSize
	{
		 get { } //Length: 76
	}

	public override Texture mainTexture
	{
		 get { } //Length: 172
		 set { } //Length: 132
	}

	public override Material material
	{
		 get { } //Length: 8
		 set { } //Length: 188
	}

	public override int minHeight
	{
		 get { } //Length: 8
	}

	public override int minWidth
	{
		 get { } //Length: 8
	}

	public OnRenderCallback onRender
	{
		 get { } //Length: 8
		 set { } //Length: 416
	}

	public override Pivot pivot
	{
		 get { } //Length: 8
		 set { } //Length: 784
	}

	public Vector2 pivotOffset
	{
		 get { } //Length: 128
	}

	public Pivot rawPivot
	{
		 get { } //Length: 8
		 set { } //Length: 80
	}

	public int raycastDepth
	{
		 get { } //Length: 212
	}

	[Obsolete]
	public Vector2 relativeSize
	{
		 get { } //Length: 8
	}

	public override Shader shader
	{
		 get { } //Length: 172
		 set { } //Length: 132
	}

	public int width
	{
		 get { } //Length: 8
		 set { } //Length: 684
	}

	public Vector3 worldCenter
	{
		 get { } //Length: 64
	}

	public virtual Vector3[] worldCorners
	{
		 get { } //Length: 348
	}

	public UIWidget() { }

	protected virtual void Awake() { }

	public Bounds CalculateBounds(Transform relativeParent) { }

	public Bounds CalculateBounds() { }

	public float CalculateCumulativeAlpha(int frameID) { }

	public virtual float CalculateFinalAlpha(int frameID) { }

	public void CheckLayer() { }

	public UIPanel CreatePanel() { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static int FullCompareFunc(UIWidget left, UIWidget right) { }

	public virtual float get_alpha() { }

	public override Vector4 get_border() { }

	public Color get_color() { }

	public override int get_depth() { }

	public override Vector4 get_drawingDimensions() { }

	public Vector4 get_drawRegion() { }

	public bool get_hasBoxCollider() { }

	public bool get_hasVertices() { }

	public int get_height() { }

	public override bool get_isSelectable() { }

	public bool get_isVisible() { }

	public Vector3 get_localCenter() { }

	public virtual Vector3[] get_localCorners() { }

	public override Vector2 get_localSize() { }

	public override Texture get_mainTexture() { }

	public override Material get_material() { }

	public override int get_minHeight() { }

	public override int get_minWidth() { }

	public OnRenderCallback get_onRender() { }

	public override Pivot get_pivot() { }

	public Vector2 get_pivotOffset() { }

	public Pivot get_rawPivot() { }

	public int get_raycastDepth() { }

	public Vector2 get_relativeSize() { }

	public override Shader get_shader() { }

	public int get_width() { }

	public Vector3 get_worldCenter() { }

	public virtual Vector3[] get_worldCorners() { }

	public virtual Vector3[] GetSides(Transform relativeTo) { }

	public virtual void Invalidate(bool includeChildren) { }

	public override void MakePixelPerfect() { }

	public override void MarkAsChanged() { }

	public override void OnAddToPanel(UIPanel p) { }

	protected virtual void OnAnchor() { }

	private void OnApplicationPause(bool paused) { }

	private void OnDestroy() { }

	protected virtual void OnDisable() { }

	public override void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	protected virtual void OnInit() { }

	public override void OnRemoveFromPanel(UIPanel p) { }

	protected virtual void OnStart() { }

	protected virtual void OnUpdate() { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static int PanelCompareFunc(UIWidget left, UIWidget right) { }

	public virtual void ParentHasChanged() { }

	public void RemoveFromPanel() { }

	public void ResizeCollider() { }

	public virtual void set_alpha(float value) { }

	public override void set_border(Vector4 value) { }

	public void set_color(Color value) { }

	public override void set_depth(int value) { }

	public void set_drawRegion(Vector4 value) { }

	public void set_height(int value) { }

	public override void set_mainTexture(Texture value) { }

	public override void set_material(Material value) { }

	public void set_onRender(OnRenderCallback value) { }

	public override void set_pivot(Pivot value) { }

	public void set_rawPivot(Pivot value) { }

	public override void set_shader(Shader value) { }

	public void set_width(int value) { }

	public void SetColorNoAlpha(Color c) { }

	public void SetDimensions(int w, int h) { }

	public override void SetDirty() { }

	public virtual void SetRect(float x, float y, float width, float height) { }

	protected void UpdateFinalAlpha(int frameID) { }

	public bool UpdateGeometry(int frame) { }

	public bool UpdateTransform(int frame) { }

	public bool UpdateVisibility(bool visibleByAlpha, bool visibleByPanel) { }

	protected override void UpgradeFrom265() { }

	public void WriteToBuffers(List<Vector3> v, List<Vector2> u, List<Color> c, List<Vector3> n, List<Vector4> t, List<Vector4> u2) { }

}

