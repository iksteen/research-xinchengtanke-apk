//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UITexture : UIBasicSprite
{
	[HideInInspector]
	[SerializeField]
	private Rect mRect; //Field offset: 0x1FC
	[HideInInspector]
	[SerializeField]
	private Texture mTexture; //Field offset: 0x210
	[HideInInspector]
	[SerializeField]
	private Shader mShader; //Field offset: 0x218
	[HideInInspector]
	[SerializeField]
	private Vector4 mBorder; //Field offset: 0x220
	[HideInInspector]
	[SerializeField]
	private bool mFixedAspect; //Field offset: 0x230
	private int mPMA; //Field offset: 0x234

	public virtual Vector4 border
	{
		 get { } //Length: 20
		 set { } //Length: 112
	}

	public virtual Vector4 drawingDimensions
	{
		 get { } //Length: 624
	}

	public bool fixedAspect
	{
		 get { } //Length: 8
		 set { } //Length: 128
	}

	public virtual Texture mainTexture
	{
		 get { } //Length: 220
		 set { } //Length: 380
	}

	public virtual Material material
	{
		 get { } //Length: 8
		 set { } //Length: 212
	}

	public virtual bool premultipliedAlpha
	{
		 get { } //Length: 316
	}

	public virtual Shader shader
	{
		 get { } //Length: 260
		 set { } //Length: 396
	}

	public Rect uvRect
	{
		 get { } //Length: 20
		 set { } //Length: 160
	}

	public UITexture() { }

	public virtual Vector4 get_border() { }

	public virtual Vector4 get_drawingDimensions() { }

	public bool get_fixedAspect() { }

	public virtual Texture get_mainTexture() { }

	public virtual Material get_material() { }

	public virtual bool get_premultipliedAlpha() { }

	public virtual Shader get_shader() { }

	public Rect get_uvRect() { }

	public virtual void MakePixelPerfect() { }

	public virtual void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	protected virtual void OnUpdate() { }

	public virtual void set_border(Vector4 value) { }

	public void set_fixedAspect(bool value) { }

	public virtual void set_mainTexture(Texture value) { }

	public virtual void set_material(Material value) { }

	public virtual void set_shader(Shader value) { }

	public void set_uvRect(Rect value) { }

}

