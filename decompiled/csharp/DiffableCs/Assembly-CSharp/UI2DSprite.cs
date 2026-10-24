//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UI2DSprite : UIBasicSprite
{
	[HideInInspector]
	[SerializeField]
	private Sprite mSprite; //Field offset: 0x200
	[HideInInspector]
	[SerializeField]
	private Shader mShader; //Field offset: 0x208
	[HideInInspector]
	[SerializeField]
	private Vector4 mBorder; //Field offset: 0x210
	[HideInInspector]
	[SerializeField]
	private bool mFixedAspect; //Field offset: 0x220
	[HideInInspector]
	[SerializeField]
	private float mPixelSize; //Field offset: 0x224
	public Sprite nextSprite; //Field offset: 0x228
	private int mPMA; //Field offset: 0x230

	public virtual Vector4 border
	{
		 get { } //Length: 20
		 set { } //Length: 112
	}

	public virtual Vector4 drawingDimensions
	{
		 get { } //Length: 1096
	}

	public bool fixedAspect
	{
		 get { } //Length: 8
		 set { } //Length: 128
	}

	public virtual Texture mainTexture
	{
		 get { } //Length: 232
	}

	public virtual Material material
	{
		 get { } //Length: 8
		 set { } //Length: 200
	}

	public virtual float pixelSize
	{
		 get { } //Length: 8
	}

	public virtual bool premultipliedAlpha
	{
		 get { } //Length: 232
	}

	public virtual Shader shader
	{
		 get { } //Length: 260
		 set { } //Length: 248
	}

	public Sprite sprite2D
	{
		 get { } //Length: 8
		 set { } //Length: 200
	}

	public UI2DSprite() { }

	public virtual Vector4 get_border() { }

	public virtual Vector4 get_drawingDimensions() { }

	public bool get_fixedAspect() { }

	public virtual Texture get_mainTexture() { }

	public virtual Material get_material() { }

	public virtual float get_pixelSize() { }

	public virtual bool get_premultipliedAlpha() { }

	public virtual Shader get_shader() { }

	public Sprite get_sprite2D() { }

	public virtual void MakePixelPerfect() { }

	public virtual void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	protected virtual void OnUpdate() { }

	public virtual void set_border(Vector4 value) { }

	public void set_fixedAspect(bool value) { }

	public virtual void set_material(Material value) { }

	public virtual void set_shader(Shader value) { }

	public void set_sprite2D(Sprite value) { }

}

