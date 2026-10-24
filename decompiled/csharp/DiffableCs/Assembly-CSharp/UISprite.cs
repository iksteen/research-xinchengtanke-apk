//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UISprite : UIBasicSprite
{
	[HideInInspector]
	[SerializeField]
	private object mAtlas; //Field offset: 0x200
	[HideInInspector]
	[SerializeField]
	private string mSpriteName; //Field offset: 0x208
	[HideInInspector]
	[SerializeField]
	private bool mFixedAspect; //Field offset: 0x210
	[HideInInspector]
	[SerializeField]
	private bool mFillCenter; //Field offset: 0x211
	protected UISpriteData mSprite; //Field offset: 0x218
	private bool mSpriteSet; //Field offset: 0x220
	public bool autoMakePixelPerfect; //Field offset: 0x221

	public bool applyGradient
	{
		 get { } //Length: 8
		 set { } //Length: 48
	}

	public INGUIAtlas atlas
	{
		 get { } //Length: 76
		 set { } //Length: 672
	}

	public virtual Vector4 border
	{
		 get { } //Length: 116
	}

	public virtual Vector4 drawingDimensions
	{
		 get { } //Length: 972
	}

	[Obsolete]
	public bool fillCenter
	{
		 get { } //Length: 16
		 set { } //Length: 48
	}

	public bool fixedAspect
	{
		 get { } //Length: 8
		 set { } //Length: 128
	}

	public Color gradientBottom
	{
		 get { } //Length: 20
		 set { } //Length: 168
	}

	public Color gradientTop
	{
		 get { } //Length: 20
		 set { } //Length: 168
	}

	public bool isValid
	{
		 get { } //Length: 28
	}

	public virtual Texture mainTexture
	{
		 get { } //Length: 284
		 set { } //Length: 8
	}

	public virtual Material material
	{
		 get { } //Length: 268
		 set { } //Length: 8
	}

	public virtual int minHeight
	{
		 get { } //Length: 356
	}

	public virtual int minWidth
	{
		 get { } //Length: 356
	}

	protected virtual Vector4 padding
	{
		 get { } //Length: 124
	}

	public virtual float pixelSize
	{
		 get { } //Length: 268
	}

	public virtual bool premultipliedAlpha
	{
		 get { } //Length: 196
	}

	public string spriteName
	{
		 get { } //Length: 8
		 set { } //Length: 300
	}

	public UISprite() { }

	public bool get_applyGradient() { }

	public INGUIAtlas get_atlas() { }

	public virtual Vector4 get_border() { }

	public virtual Vector4 get_drawingDimensions() { }

	public bool get_fillCenter() { }

	public bool get_fixedAspect() { }

	public Color get_gradientBottom() { }

	public Color get_gradientTop() { }

	public bool get_isValid() { }

	public virtual Texture get_mainTexture() { }

	public virtual Material get_material() { }

	public virtual int get_minHeight() { }

	public virtual int get_minWidth() { }

	protected virtual Vector4 get_padding() { }

	public virtual float get_pixelSize() { }

	public virtual bool get_premultipliedAlpha() { }

	public string get_spriteName() { }

	public UISpriteData GetAtlasSprite() { }

	public UISpriteData GetSprite(string spriteName) { }

	public virtual void MakePixelPerfect() { }

	public virtual void MarkAsChanged() { }

	public virtual void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	protected virtual void OnInit() { }

	protected virtual void OnUpdate() { }

	public void set_applyGradient(bool value) { }

	public void set_atlas(INGUIAtlas value) { }

	public void set_fillCenter(bool value) { }

	public void set_fixedAspect(bool value) { }

	public void set_gradientBottom(Color value) { }

	public void set_gradientTop(Color value) { }

	public virtual void set_mainTexture(Texture value) { }

	public virtual void set_material(Material value) { }

	public void set_spriteName(string value) { }

	protected void SetAtlasSprite(UISpriteData sp) { }

}

