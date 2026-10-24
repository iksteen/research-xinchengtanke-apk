//Type is in global namespace

public abstract class UIBasicSprite : UIWidget
{
	[DoNotObfuscateNGUI]
	internal enum AdvancedType
	{
		Invisible = 0,
		Sliced = 1,
		Tiled = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum FillDirection
	{
		Horizontal = 0,
		Vertical = 1,
		Radial90 = 2,
		Radial180 = 3,
		Radial360 = 4,
	}

	[DoNotObfuscateNGUI]
	internal enum Flip
	{
		Nothing = 0,
		Horizontally = 1,
		Vertically = 2,
		Both = 3,
	}

	[DoNotObfuscateNGUI]
	internal enum Type
	{
		Simple = 0,
		Sliced = 1,
		Tiled = 2,
		Filled = 3,
		Advanced = 4,
	}

	protected static Vector2[] mTempPos; //Field offset: 0x0
	protected static Vector2[] mTempUVs; //Field offset: 0x8
	[HideInInspector]
	[SerializeField]
	protected Type mType; //Field offset: 0x190
	[HideInInspector]
	[SerializeField]
	protected FillDirection mFillDirection; //Field offset: 0x194
	[HideInInspector]
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	protected float mFillAmount; //Field offset: 0x198
	[HideInInspector]
	[SerializeField]
	protected bool mInvert; //Field offset: 0x19C
	[HideInInspector]
	[SerializeField]
	protected Flip mFlip; //Field offset: 0x1A0
	[HideInInspector]
	[SerializeField]
	protected bool mApplyGradient; //Field offset: 0x1A4
	[HideInInspector]
	[SerializeField]
	protected Color mGradientTop; //Field offset: 0x1A8
	[HideInInspector]
	[SerializeField]
	protected Color mGradientBottom; //Field offset: 0x1B8
	protected Rect mInnerUV; //Field offset: 0x1C8
	protected Rect mOuterUV; //Field offset: 0x1D8
	public AdvancedType centerType; //Field offset: 0x1E8
	public AdvancedType leftType; //Field offset: 0x1EC
	public AdvancedType rightType; //Field offset: 0x1F0
	public AdvancedType bottomType; //Field offset: 0x1F4
	public AdvancedType topType; //Field offset: 0x1F8

	protected Color drawingColor
	{
		 get { } //Length: 196
	}

	protected Vector4 drawingUVs
	{
		 get { } //Length: 328
	}

	public float fillAmount
	{
		 get { } //Length: 8
		 set { } //Length: 60
	}

	public FillDirection fillDirection
	{
		 get { } //Length: 8
		 set { } //Length: 28
	}

	public Flip flip
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public bool hasBorder
	{
		 get { } //Length: 68
	}

	public bool invert
	{
		 get { } //Length: 8
		 set { } //Length: 40
	}

	public virtual int minHeight
	{
		 get { } //Length: 280
	}

	public virtual int minWidth
	{
		 get { } //Length: 280
	}

	protected override Vector4 padding
	{
		 get { } //Length: 64
	}

	public override float pixelSize
	{
		 get { } //Length: 8
	}

	public override bool premultipliedAlpha
	{
		 get { } //Length: 8
	}

	public override Type type
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	private static UIBasicSprite() { }

	protected UIBasicSprite() { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	private void AddVertexColours(List<Color> cols, ref Color color, int x, int y) { }

	protected void AdvancedFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, ref Vector4 v, ref Vector4 u, ref Color c) { }

	private static void Fill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, float v0x, float v1x, float v0y, float v1y, float u0x, float u1x, float u0y, float u1y, Color col) { }

	protected void Fill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, Rect outer, Rect inner) { }

	protected void FilledFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, ref Vector4 v, ref Vector4 u, ref Color c) { }

	protected Color get_drawingColor() { }

	protected Vector4 get_drawingUVs() { }

	public float get_fillAmount() { }

	public FillDirection get_fillDirection() { }

	public Flip get_flip() { }

	public bool get_hasBorder() { }

	public bool get_invert() { }

	public virtual int get_minHeight() { }

	public virtual int get_minWidth() { }

	protected override Vector4 get_padding() { }

	public override float get_pixelSize() { }

	public override bool get_premultipliedAlpha() { }

	public override Type get_type() { }

	private static bool RadialCut(Vector2[] xy, Vector2[] uv, float fill, bool invert, int corner) { }

	private static void RadialCut(Vector2[] xy, float cos, float sin, bool invert, int corner) { }

	public void set_fillAmount(float value) { }

	public void set_fillDirection(FillDirection value) { }

	public void set_flip(Flip value) { }

	public void set_invert(bool value) { }

	public override void set_type(Type value) { }

	protected void SimpleFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, ref Vector4 v, ref Vector4 u, ref Color c) { }

	protected void SlicedFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, ref Vector4 v, ref Vector4 u, ref Color gc) { }

	protected void TiledFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, ref Vector4 v, ref Color c) { }

}

