//Type is in global namespace

[ExecuteInEditMode]
public class UIFont : MonoBehaviour, INGUIFont
{
	[HideInInspector]
	[SerializeField]
	private Material mMat; //Field offset: 0x18
	[HideInInspector]
	[SerializeField]
	private Rect mUVRect; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	private BMFont mFont; //Field offset: 0x30
	[HideInInspector]
	[SerializeField]
	private object mAtlas; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	private object mReplacement; //Field offset: 0x40
	[HideInInspector]
	[SerializeField]
	private List<BMSymbol> mSymbols; //Field offset: 0x48
	[HideInInspector]
	[SerializeField]
	private Font mDynamicFont; //Field offset: 0x50
	[HideInInspector]
	[SerializeField]
	private int mDynamicFontSize; //Field offset: 0x58
	[HideInInspector]
	[SerializeField]
	private FontStyle mDynamicFontStyle; //Field offset: 0x5C
	private UISpriteData mSprite; //Field offset: 0x60
	private int mPMA; //Field offset: 0x68
	private int mPacked; //Field offset: 0x6C

	public override INGUIAtlas atlas
	{
		 get { } //Length: 220
		 set { } //Length: 564
	}

	public override BMFont bmFont
	{
		 get { } //Length: 196
		 set { } //Length: 224
	}

	public override int defaultSize
	{
		 get { } //Length: 224
		 set { } //Length: 216
	}

	public override Font dynamicFont
	{
		 get { } //Length: 196
		 set { } //Length: 396
	}

	public override FontStyle dynamicFontStyle
	{
		 get { } //Length: 196
		 set { } //Length: 248
	}

	public override INGUIFont finalFont
	{
		 get { } //Length: 212
	}

	public override bool hasSymbols
	{
		 get { } //Length: 232
	}

	public override bool isDynamic
	{
		 get { } //Length: 252
	}

	public override bool isValid
	{
		 get { } //Length: 148
	}

	public override Material material
	{
		 get { } //Length: 656
		 set { } //Length: 328
	}

	public override bool packedFontShader
	{
		 get { } //Length: 508
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
		 get { } //Length: 192
		 set { } //Length: 212
	}

	public override UISpriteData sprite
	{
		 get { } //Length: 740
	}

	public override string spriteName
	{
		 get { } //Length: 208
		 set { } //Length: 284
	}

	public override INGUIAtlas symbolAtlas
	{
		 get { } //Length: 4
	}

	public override List<BMSymbol> symbols
	{
		 get { } //Length: 196
		 set { } //Length: 224
	}

	public override int texHeight
	{
		 get { } //Length: 212
		 set { } //Length: 224
	}

	public override Texture2D texture
	{
		 get { } //Length: 340
	}

	public override int texWidth
	{
		 get { } //Length: 212
		 set { } //Length: 224
	}

	public override NGUIFontType type
	{
		 get { } //Length: 156
		 set { } //Length: 4
	}

	public override Rect uvRect
	{
		 get { } //Length: 360
		 set { } //Length: 324
	}

	public UIFont() { }

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

	public override List<BMSymbol> get_symbols() { }

	public override int get_texHeight() { }

	public override Texture2D get_texture() { }

	public override int get_texWidth() { }

	public override NGUIFontType get_type() { }

	public override Rect get_uvRect() { }

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

	public override void set_symbols(List<BMSymbol> value) { }

	public override void set_texHeight(int value) { }

	public override void set_texWidth(int value) { }

	public override void set_type(NGUIFontType value) { }

	public override void set_uvRect(Rect value) { }

	private void Trim() { }

	public override void UpdateUVRect() { }

	public override bool UsesSprite(string s) { }

}

