//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIDrawCall : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Clipping
	{
		None = 0,
		TextureMask = 1,
		SoftClip = 3,
		ConstrainButDontClip = 4,
	}

	internal sealed class OnCreateDrawCall : MulticastDelegate
	{

		public OnCreateDrawCall(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(UIDrawCall dc, MeshFilter filter, MeshRenderer ren, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(UIDrawCall dc, MeshFilter filter, MeshRenderer ren) { }

	}

	internal sealed class OnRenderCallback : MulticastDelegate
	{

		public OnRenderCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Material mat, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(Material mat) { }

	}

	[DoNotObfuscateNGUI]
	internal enum ShadowMode
	{
		None = 0,
		Receive = 1,
		CastAndReceive = 2,
	}

	private static BetterList<UIDrawCall> mActiveList; //Field offset: 0x0
	private const int maxIndexBufferCache = 10; //Field offset: 0x0
	private static BetterList<UIDrawCall> mInactiveList; //Field offset: 0x8
	private static ColorSpace mColorSpace; //Field offset: 0x10
	private static List<Int32[]> mCache; //Field offset: 0x18
	private static Int32[] ClipRange; //Field offset: 0x20
	private static Int32[] ClipArgs; //Field offset: 0x28
	private static int dx9BugWorkaround; //Field offset: 0x30
	[HideInInspector]
	public int widgetCount; //Field offset: 0x18
	[HideInInspector]
	public int depthStart; //Field offset: 0x1C
	[HideInInspector]
	public int depthEnd; //Field offset: 0x20
	[HideInInspector]
	public UIPanel manager; //Field offset: 0x28
	[HideInInspector]
	public UIPanel panel; //Field offset: 0x30
	[HideInInspector]
	public Texture2D clipTexture; //Field offset: 0x38
	[HideInInspector]
	public bool alwaysOnScreen; //Field offset: 0x40
	[HideInInspector]
	public List<Vector3> verts; //Field offset: 0x48
	[HideInInspector]
	public List<Vector3> norms; //Field offset: 0x50
	[HideInInspector]
	public List<Vector4> tans; //Field offset: 0x58
	[HideInInspector]
	public List<Vector2> uvs; //Field offset: 0x60
	[HideInInspector]
	public List<Vector4> uv2; //Field offset: 0x68
	[HideInInspector]
	public List<Color> cols; //Field offset: 0x70
	private Material mMaterial; //Field offset: 0x78
	private Texture mTexture; //Field offset: 0x80
	private Shader mShader; //Field offset: 0x88
	private int mClipCount; //Field offset: 0x90
	private Transform mTrans; //Field offset: 0x98
	private Mesh mMesh; //Field offset: 0xA0
	private MeshFilter mFilter; //Field offset: 0xA8
	private MeshRenderer mRenderer; //Field offset: 0xB0
	private Material mDynamicMat; //Field offset: 0xB8
	private Int32[] mIndices; //Field offset: 0xC0
	private ShadowMode mShadowMode; //Field offset: 0xC8
	private bool mRebuildMat; //Field offset: 0xCC
	private bool mLegacyShader; //Field offset: 0xCD
	private int mRenderQueue; //Field offset: 0xD0
	private int mTriangles; //Field offset: 0xD4
	public bool isDirty; //Field offset: 0xD8
	private bool mTextureClip; //Field offset: 0xD9
	private bool mIsNew; //Field offset: 0xDA
	public OnRenderCallback onRender; //Field offset: 0xE0
	public OnCreateDrawCall onCreateDrawCall; //Field offset: 0xE8
	private string mSortingLayerName; //Field offset: 0xF0
	private int mSortingOrder; //Field offset: 0xF8
	protected MaterialPropertyBlock mBlock; //Field offset: 0x100

	public static BetterList<UIDrawCall> activeList
	{
		 get { } //Length: 100
	}

	public Material baseMaterial
	{
		 get { } //Length: 8
		 set { } //Length: 156
	}

	public Transform cachedTransform
	{
		 get { } //Length: 160
	}

	public Material dynamicMaterial
	{
		 get { } //Length: 8
	}

	public int finalRenderQueue
	{
		 get { } //Length: 148
	}

	public static BetterList<UIDrawCall> inactiveList
	{
		 get { } //Length: 100
	}

	public bool isClipped
	{
		 get { } //Length: 16
	}

	[Obsolete]
	public static BetterList<UIDrawCall> list
	{
		 get { } //Length: 100
	}

	public Texture mainTexture
	{
		 get { } //Length: 8
		 set { } //Length: 272
	}

	public int renderQueue
	{
		 get { } //Length: 8
		 set { } //Length: 180
	}

	public Shader shader
	{
		 get { } //Length: 8
		 set { } //Length: 156
	}

	public ShadowMode shadowMode
	{
		 get { } //Length: 8
		 set { } //Length: 256
	}

	public string sortingLayerName
	{
		 get { } //Length: 192
		 set { } //Length: 204
	}

	public int sortingOrder
	{
		 get { } //Length: 8
		 set { } //Length: 180
	}

	public int triangles
	{
		 get { } //Length: 128
	}

	private static UIDrawCall() { }

	public UIDrawCall() { }

	private void Awake() { }

	public static void ClearAll() { }

	public static int Count(UIPanel panel) { }

	private static UIDrawCall Create(string name) { }

	private static UIDrawCall Create(string name, UIPanel pan, Material mat, Texture tex, Shader shader) { }

	public static UIDrawCall Create(UIPanel panel, Material mat, Texture tex, Shader shader) { }

	private void CreateMaterial() { }

	public static void Destroy(UIDrawCall dc) { }

	private Int32[] GenerateCachedIndexBuffer(int vertexCount, int indexCount) { }

	public static BetterList<UIDrawCall> get_activeList() { }

	public Material get_baseMaterial() { }

	public Transform get_cachedTransform() { }

	public Material get_dynamicMaterial() { }

	public int get_finalRenderQueue() { }

	public static BetterList<UIDrawCall> get_inactiveList() { }

	public bool get_isClipped() { }

	public static BetterList<UIDrawCall> get_list() { }

	public Texture get_mainTexture() { }

	public int get_renderQueue() { }

	public Shader get_shader() { }

	public ShadowMode get_shadowMode() { }

	public string get_sortingLayerName() { }

	public int get_sortingOrder() { }

	public int get_triangles() { }

	public static void MoveToScene(Scene scene) { }

	private void OnDestroy() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnWillRenderObject() { }

	private Material RebuildMaterial() { }

	public static void ReleaseAll() { }

	public static void ReleaseInactive() { }

	public void set_baseMaterial(Material value) { }

	public void set_mainTexture(Texture value) { }

	public void set_renderQueue(int value) { }

	public void set_shader(Shader value) { }

	public void set_shadowMode(ShadowMode value) { }

	public void set_sortingLayerName(string value) { }

	public void set_sortingOrder(int value) { }

	private void SetClipping(int index, Vector4 cr, Vector2 soft, float angle) { }

	public void UpdateGeometry(int widgetCount, bool needsBounds) { }

	private void UpdateMaterials() { }

}

