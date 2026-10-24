//Type is in global namespace

public interface INGUIFont
{

	public INGUIAtlas atlas
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public BMFont bmFont
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int defaultSize
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Font dynamicFont
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public FontStyle dynamicFontStyle
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public INGUIFont finalFont
	{
		 get { } //Length: 0
	}

	public bool hasSymbols
	{
		 get { } //Length: 0
	}

	public bool isDynamic
	{
		 get { } //Length: 0
	}

	public bool isValid
	{
		 get { } //Length: 0
	}

	public Material material
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool packedFontShader
	{
		 get { } //Length: 0
	}

	public bool premultipliedAlphaShader
	{
		 get { } //Length: 0
	}

	public INGUIFont replacement
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int spaceWidth
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public UISpriteData sprite
	{
		 get { } //Length: 0
	}

	public string spriteName
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public INGUIAtlas symbolAtlas
	{
		 get { } //Length: 0
	}

	public List<BMSymbol> symbols
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int texHeight
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Texture2D texture
	{
		 get { } //Length: 0
	}

	public int texWidth
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public NGUIFontType type
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Rect uvRect
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public BMSymbol AddSymbol(string sequence, string spriteName) { }

	public INGUIAtlas get_atlas() { }

	public BMFont get_bmFont() { }

	public int get_defaultSize() { }

	public Font get_dynamicFont() { }

	public FontStyle get_dynamicFontStyle() { }

	public INGUIFont get_finalFont() { }

	public bool get_hasSymbols() { }

	public bool get_isDynamic() { }

	public bool get_isValid() { }

	public Material get_material() { }

	public bool get_packedFontShader() { }

	public bool get_premultipliedAlphaShader() { }

	public INGUIFont get_replacement() { }

	public int get_spaceWidth() { }

	public UISpriteData get_sprite() { }

	public string get_spriteName() { }

	public INGUIAtlas get_symbolAtlas() { }

	public List<BMSymbol> get_symbols() { }

	public int get_texHeight() { }

	public Texture2D get_texture() { }

	public int get_texWidth() { }

	public NGUIFontType get_type() { }

	public Rect get_uvRect() { }

	public UISpriteData GetSprite(string spriteName) { }

	public void MarkAsChanged() { }

	public BMSymbol MatchSymbol(ref string text, int offset, int textLength) { }

	public bool References(INGUIFont font) { }

	public void RemoveSymbol(string sequence) { }

	public void RenameSymbol(string before, string after) { }

	public void set_atlas(INGUIAtlas value) { }

	public void set_bmFont(BMFont value) { }

	public void set_defaultSize(int value) { }

	public void set_dynamicFont(Font value) { }

	public void set_dynamicFontStyle(FontStyle value) { }

	public void set_material(Material value) { }

	public void set_replacement(INGUIFont value) { }

	public void set_spaceWidth(int value) { }

	public void set_spriteName(string value) { }

	public void set_symbols(List<BMSymbol> value) { }

	public void set_texHeight(int value) { }

	public void set_texWidth(int value) { }

	public void set_type(NGUIFontType value) { }

	public void set_uvRect(Rect value) { }

	public void UpdateUVRect() { }

	public bool UsesSprite(string s) { }

}

