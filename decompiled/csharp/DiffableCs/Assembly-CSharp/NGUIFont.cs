//Type is in global namespace

[ExecuteInEditMode]
public class NGUIFont : ScriptableObject, INGUIFont
{
	internal struct KerningAdjustment
	{
		public int left; //Field offset: 0x0
		public int right; //Field offset: 0x4
		public int offset; //Field offset: 0x8

	}

	[HideInInspector]
	[SerializeField]
	private NGUIFontType mType; //Field offset: 0x18
	[HideInInspector]
	[SerializeField]
	private Material mMat; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	private Rect mUVRect; //Field offset: 0x28
	[HideInInspector]
	[SerializeField]
	private BMFont mFont; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	private object mAtlas; //Field offset: 0x40
	[HideInInspector]
	[SerializeField]
	private object mReplacement; //Field offset: 0x48
	[HideInInspector]
	[SerializeField]
	private object mSybolAtlas; //Field offset: 0x50
	[HideInInspector]
	[SerializeField]
	private float mSymbolScale; //Field offset: 0x58
	[HideInInspector]
	[SerializeField]
	private int mSymbolOffset; //Field offset: 0x5C
	[HideInInspector]
	[SerializeField]
	private int mSymbolMaxHeight; //Field offset: 0x60
	[HideInInspector]
	[SerializeField]
	private bool mSymbolCentered; //Field offset: 0x64
	[HideInInspector]
	[SerializeField]
	private List<BMSymbol> mSymbols; //Field offset: 0x68
	private List<BMSymbol> mEmbeddedSymbols; //Field offset: 0x70
	[HideInInspector]
	[SerializeField]
	private Font mDynamicFont; //Field offset: 0x78
	[HideInInspector]
	[SerializeField]
	private int mDynamicFontSize; //Field offset: 0x80
	[HideInInspector]
	[SerializeField]
	private FontStyle mDynamicFontStyle; //Field offset: 0x84
	[HideInInspector]
	[SerializeField]
	private int mSpaceWidth; //Field offset: 0x88
	private UISpriteData mSprite; //Field offset: 0x90
	private int mPMA; //Field offset: 0x98
	private int mPacked; //Field offset: 0x9C
	[HideInInspector]
	[SerializeField]
	private List<KerningAdjustment> mKerningAdjustments; //Field offset: 0xA0
	private Dictionary<UInt32, Int16> mKerningCache; //Field offset: 0xA8

	public override INGUIAtlas atlas
	{
		 get { } //Length: 260
		 set { } //Length: 580
	}

	public override BMFont bmFont
	{
		 get { } //Length: 196
		 set { } //Length: 224
	}

	public override int defaultSize
	{
		 get { } //Length: 252
		 set { } //Length: 216
	}

	public override Font dynamicFont
	{
		 get { } //Length: 212
		 set { } //Length: 412
	}

	public override FontStyle dynamicFontStyle
	{
		 get { } //Length: 212
		 set { } //Length: 264
	}

	public override INGUIFont finalFont
	{
		 get { } //Length: 212
	}

	public override bool hasSymbols
	{
		 get { } //Length: 244
	}

	public override bool isDynamic
	{
		 get { } //Length: 292
	}

	public override bool isValid
	{
		 get { } //Length: 148
	}

	public int kerningCount
	{
		 get { } //Length: 564
	}

	public List<KerningAdjustment> kerningData
	{
		 get { } //Length: 260
	}

	public override Material material
	{
		 get { } //Length: 636
		 set { } //Length: 344
	}

	public override bool packedFontShader
	{
		 get { } //Length: 532
	}

	[Obsolete]
	public bool premultipliedAlpha
	{
		 get { } //Length: 4
	}

	public override bool premultipliedAlphaShader
	{
		 get { } //Length: 568
	}

	public override INGUIFont replacement
	{
		 get { } //Length: 160
		 set { } //Length: 564
	}

	[Obsolete]
	public int size
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public override int spaceWidth
	{
		 get { } //Length: 212
		 set { } //Length: 232
	}

	public override UISpriteData sprite
	{
		 get { } //Length: 756
	}

	public override string spriteName
	{
		 get { } //Length: 252
		 set { } //Length: 300
	}

	public override INGUIAtlas symbolAtlas
	{
		 get { } //Length: 76
		 set { } //Length: 212
	}

	public bool symbolCentered
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public Material symbolMaterial
	{
		 get { } //Length: 188
	}

	public int symbolMaxHeight
	{
		 get { } //Length: 8
		 set { } //Length: 24
	}

	public int symbolOffset
	{
		 get { } //Length: 8
		 set { } //Length: 24
	}

	public override List<BMSymbol> symbols
	{
		 get { } //Length: 208
		 set { } //Length: 236
	}

	public float symbolScale
	{
		 get { } //Length: 8
		 set { } //Length: 80
	}

	public Texture2D symbolTexture
	{
		 get { } //Length: 196
	}

	public override int texHeight
	{
		 get { } //Length: 212
		 set { } //Length: 224
	}

	public override Texture2D texture
	{
		 get { } //Length: 196
	}

	public override int texWidth
	{
		 get { } //Length: 212
		 set { } //Length: 224
	}

	public override NGUIFontType type
	{
		 get { } //Length: 196
		 set { } //Length: 72
	}

	public override Rect uvRect
	{
		 get { } //Length: 376
		 set { } //Length: 340
	}

	public NGUIFont() { }

	public override BMSymbol AddSymbol(string sequence, string spriteName) { }

	public override INGUIAtlas get_atlas() { }

	public override BMFont get_bmFont() { }

	public override int get_defaultSize() { }

	public override Font get_dynamicFont() { }

	public override FontStyle get_dynamicFontStyle() { }

	public override INGUIFont get_finalFont() { }

	public override bool get_hasSymbols() { }

	public override bool get_isDynamic() { }

	public override bool get_isValid() { }

	public int get_kerningCount() { }

	public List<KerningAdjustment> get_kerningData() { }

	public override Material get_material() { }

	public override bool get_packedFontShader() { }

	public bool get_premultipliedAlpha() { }

	public override bool get_premultipliedAlphaShader() { }

	public override INGUIFont get_replacement() { }

	public int get_size() { }

	public override int get_spaceWidth() { }

	public override UISpriteData get_sprite() { }

	public override string get_spriteName() { }

	public override INGUIAtlas get_symbolAtlas() { }

	public bool get_symbolCentered() { }

	public Material get_symbolMaterial() { }

	public int get_symbolMaxHeight() { }

	public int get_symbolOffset() { }

	public override List<BMSymbol> get_symbols() { }

	public float get_symbolScale() { }

	public Texture2D get_symbolTexture() { }

	public override int get_texHeight() { }

	public override Texture2D get_texture() { }

	public override int get_texWidth() { }

	public override NGUIFontType get_type() { }

	public override Rect get_uvRect() { }

	public int GetKerning(int previousChar, int currentChar) { }

	public override UISpriteData GetSprite(string spriteName) { }

	private BMSymbol GetSymbol(string sequence, bool createIfMissing) { }

	public override void MarkAsChanged() { }

	public override BMSymbol MatchSymbol(ref string text, int offset, int textLength) { }

	public override bool References(INGUIFont font) { }

	public override void RemoveSymbol(string sequence) { }

	public override void RenameSymbol(string before, string after) { }

	public override void set_atlas(INGUIAtlas value) { }

	public override void set_bmFont(BMFont value) { }

	public override void set_defaultSize(int value) { }

	public override void set_dynamicFont(Font value) { }

	public override void set_dynamicFontStyle(FontStyle value) { }

	public override void set_material(Material value) { }

	public override void set_replacement(INGUIFont value) { }

	public void set_size(int value) { }

	public override void set_spaceWidth(int value) { }

	public override void set_spriteName(string value) { }

	public void set_symbolAtlas(INGUIAtlas value) { }

	public void set_symbolCentered(bool value) { }

	public void set_symbolMaxHeight(int value) { }

	public void set_symbolOffset(int value) { }

	public override void set_symbols(List<BMSymbol> value) { }

	public void set_symbolScale(float value) { }

	public override void set_texHeight(int value) { }

	public override void set_texWidth(int value) { }

	public override void set_type(NGUIFontType value) { }

	public override void set_uvRect(Rect value) { }

	public void SetKerning(int previousChar, int currentChar, int amount) { }

	public void SetKerning(List<KerningAdjustment> kerning) { }

	private void Trim() { }

	public override void UpdateUVRect() { }

	public override bool UsesSprite(string s) { }

}

