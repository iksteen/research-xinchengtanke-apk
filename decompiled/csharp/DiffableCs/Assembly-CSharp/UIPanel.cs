//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIPanel : UIRect
{
	internal sealed class OnClippingMoved : MulticastDelegate
	{

		public OnClippingMoved(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(UIPanel panel, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(UIPanel panel) { }

	}

	internal sealed class OnCreateMaterial : MulticastDelegate
	{

		public OnCreateMaterial(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(UIWidget widget, Material mat, AsyncCallback callback, object object) { }

		public override Material EndInvoke(IAsyncResult result) { }

		public override Material Invoke(UIWidget widget, Material mat) { }

	}

	internal sealed class OnGeometryUpdated : MulticastDelegate
	{

		public OnGeometryUpdated(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[DoNotObfuscateNGUI]
	internal enum RenderQueue
	{
		Automatic = 0,
		StartAt = 1,
		Explicit = 2,
	}

	public static List<UIPanel> list; //Field offset: 0x0
	private static Single[] mTemp; //Field offset: 0x8
	private static Vector3[] mCorners; //Field offset: 0x10
	private static int mUpdateFrame; //Field offset: 0x18
	public OnGeometryUpdated onGeometryUpdated; //Field offset: 0x90
	public bool showInPanelTool; //Field offset: 0x98
	public bool generateNormals; //Field offset: 0x99
	public bool generateUV2; //Field offset: 0x9A
	public ShadowMode shadowMode; //Field offset: 0x9C
	public bool widgetsAreStatic; //Field offset: 0xA0
	public bool cullWhileDragging; //Field offset: 0xA1
	public bool alwaysOnScreen; //Field offset: 0xA2
	public bool anchorOffset; //Field offset: 0xA3
	public bool softBorderPadding; //Field offset: 0xA4
	public RenderQueue renderQueue; //Field offset: 0xA8
	public int startingRenderQueue; //Field offset: 0xAC
	public List<UIWidget> widgets; //Field offset: 0xB0
	public List<UIDrawCall> drawCalls; //Field offset: 0xB8
	public Matrix4x4 worldToLocal; //Field offset: 0xC0
	public Vector4 drawCallClipRange; //Field offset: 0x100
	public OnClippingMoved onClipMove; //Field offset: 0x110
	public OnCreateMaterial onCreateMaterial; //Field offset: 0x118
	public OnCreateDrawCall onCreateDrawCall; //Field offset: 0x120
	[HideInInspector]
	[SerializeField]
	private Texture2D mClipTexture; //Field offset: 0x128
	[HideInInspector]
	[SerializeField]
	private float mAlpha; //Field offset: 0x130
	[HideInInspector]
	[SerializeField]
	private string mAlphaProp; //Field offset: 0x138
	[HideInInspector]
	[SerializeField]
	private Clipping mClipping; //Field offset: 0x140
	[HideInInspector]
	[SerializeField]
	private Vector4 mClipRange; //Field offset: 0x144
	[HideInInspector]
	[SerializeField]
	private Vector2 mClipSoftness; //Field offset: 0x154
	[HideInInspector]
	[SerializeField]
	private int mDepth; //Field offset: 0x15C
	[HideInInspector]
	[SerializeField]
	private int mSortingOrder; //Field offset: 0x160
	[HideInInspector]
	[SerializeField]
	private string mSortingLayerName; //Field offset: 0x168
	private bool mRebuild; //Field offset: 0x170
	private bool mResized; //Field offset: 0x171
	[SerializeField]
	private Vector2 mClipOffset; //Field offset: 0x174
	private int mMatrixFrame; //Field offset: 0x17C
	private int mAlphaFrameID; //Field offset: 0x180
	private int mLayer; //Field offset: 0x184
	private Vector2 mMin; //Field offset: 0x188
	private Vector2 mMax; //Field offset: 0x190
	private bool mSortWidgets; //Field offset: 0x198
	private bool mUpdateScroll; //Field offset: 0x199
	public bool useSortingOrder; //Field offset: 0x19A
	private UIPanel mParentPanel; //Field offset: 0x1A0
	private bool mHasMoved; //Field offset: 0x1A8
	private OnRenderCallback mOnRender; //Field offset: 0x1B0
	private bool mForced; //Field offset: 0x1B8

	public virtual float alpha
	{
		 get { } //Length: 8
		 set { } //Length: 308
	}

	public string alphaProperty
	{
		 get { } //Length: 8
		 set { } //Length: 100
	}

	public Vector4 baseClipRegion
	{
		 get { } //Length: 20
		 set { } //Length: 344
	}

	public virtual bool canBeAnchored
	{
		 get { } //Length: 16
	}

	public int clipCount
	{
		 get { } //Length: 164
	}

	public Vector2 clipOffset
	{
		 get { } //Length: 12
		 set { } //Length: 112
	}

	public Clipping clipping
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	[Obsolete]
	public Vector4 clipRange
	{
		 get { } //Length: 20
		 set { } //Length: 4
	}

	[Obsolete]
	public bool clipsChildren
	{
		 get { } //Length: 28
	}

	public Vector2 clipSoftness
	{
		 get { } //Length: 12
		 set { } //Length: 56
	}

	public Texture2D clipTexture
	{
		 get { } //Length: 8
		 set { } //Length: 156
	}

	public int depth
	{
		 get { } //Length: 8
		 set { } //Length: 276
	}

	public Vector3 drawCallOffset
	{
		 get { } //Length: 384
	}

	public Vector4 finalClipRegion
	{
		 get { } //Length: 256
	}

	public bool halfPixelOffset
	{
		 get { } //Length: 8
	}

	public bool hasClipping
	{
		 get { } //Length: 20
	}

	public bool hasCumulativeClipping
	{
		 get { } //Length: 28
	}

	public float height
	{
		 get { } //Length: 24
	}

	public virtual Vector3[] localCorners
	{
		 get { } //Length: 484
	}

	public static int nextUnusedDepth
	{
		 get { } //Length: 308
	}

	public UIPanel parentPanel
	{
		 get { } //Length: 8
	}

	public string sortingLayerName
	{
		 get { } //Length: 8
		 set { } //Length: 216
	}

	public int sortingOrder
	{
		 get { } //Length: 8
		 set { } //Length: 196
	}

	public bool usedForUI
	{
		 get { } //Length: 164
	}

	public float width
	{
		 get { } //Length: 4
	}

	public virtual Vector3[] worldCorners
	{
		 get { } //Length: 1224
	}

	private static UIPanel() { }

	public UIPanel() { }

	public void AddWidget(UIWidget w) { }

	public bool Affects(UIWidget w) { }

	protected virtual void Awake() { }

	public override Vector3 CalculateConstrainOffset(Vector2 min, Vector2 max) { }

	public virtual float CalculateFinalAlpha(int frameID) { }

	public static int CompareFunc(UIPanel a, UIPanel b) { }

	public bool ConstrainTargetToBounds(Transform target, bool immediate) { }

	public bool ConstrainTargetToBounds(Transform target, ref Bounds targetBounds, bool immediate) { }

	private void FillAllDrawCalls() { }

	public bool FillDrawCall(UIDrawCall dc) { }

	public bool FillDrawCall(UIDrawCall dc, bool needsCulling) { }

	public static UIPanel Find(Transform trans) { }

	public static UIPanel Find(Transform trans, bool createIfMissing, int layer) { }

	public static UIPanel Find(Transform trans, bool createIfMissing) { }

	public UIDrawCall FindDrawCall(UIWidget w) { }

	private void FindParent() { }

	public virtual float get_alpha() { }

	public string get_alphaProperty() { }

	public Vector4 get_baseClipRegion() { }

	public virtual bool get_canBeAnchored() { }

	public int get_clipCount() { }

	public Vector2 get_clipOffset() { }

	public Clipping get_clipping() { }

	public Vector4 get_clipRange() { }

	public bool get_clipsChildren() { }

	public Vector2 get_clipSoftness() { }

	public Texture2D get_clipTexture() { }

	public int get_depth() { }

	public Vector3 get_drawCallOffset() { }

	public Vector4 get_finalClipRegion() { }

	public bool get_halfPixelOffset() { }

	public bool get_hasClipping() { }

	public bool get_hasCumulativeClipping() { }

	public float get_height() { }

	public virtual Vector3[] get_localCorners() { }

	public static int get_nextUnusedDepth() { }

	public UIPanel get_parentPanel() { }

	public string get_sortingLayerName() { }

	public int get_sortingOrder() { }

	public bool get_usedForUI() { }

	public float get_width() { }

	public virtual Vector3[] get_worldCorners() { }

	public virtual Vector3[] GetSides(Transform relativeTo) { }

	public Vector2 GetViewSize() { }

	public Vector2 GetWindowSize() { }

	public virtual void Invalidate(bool includeChildren) { }

	private void InvalidateClipping() { }

	public bool IsVisible(Vector3 a, Vector3 b, Vector3 c, Vector3 d) { }

	public bool IsVisible(UIWidget w) { }

	public bool IsVisible(Vector3 worldPos) { }

	private void LateUpdate() { }

	protected virtual void OnAnchor() { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	protected virtual void OnInit() { }

	private void OnSetAlphaProp(Material mat) { }

	protected virtual void OnStart() { }

	public virtual void ParentHasChanged() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void RebuildAllDrawCalls() { }

	public void Refresh() { }

	public void RemoveWidget(UIWidget w) { }

	public virtual void set_alpha(float value) { }

	public void set_alphaProperty(string value) { }

	public void set_baseClipRegion(Vector4 value) { }

	public void set_clipOffset(Vector2 value) { }

	public void set_clipping(Clipping value) { }

	public void set_clipRange(Vector4 value) { }

	public void set_clipSoftness(Vector2 value) { }

	public void set_clipTexture(Texture2D value) { }

	public void set_depth(int value) { }

	public void set_sortingLayerName(string value) { }

	public void set_sortingOrder(int value) { }

	public void SetDirty() { }

	public virtual void SetRect(float x, float y, float width, float height) { }

	public void SortWidgets() { }

	private void UpdateDrawCalls(int sortOrder) { }

	private void UpdateLayers() { }

	private void UpdateSelf() { }

	private void UpdateTransformMatrix() { }

	private void UpdateWidgets() { }

}

