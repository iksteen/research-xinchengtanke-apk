//Type is in global namespace

public class BMFont
{
	[HideInInspector]
	[SerializeField]
	private int mSize; //Field offset: 0x10
	[HideInInspector]
	[SerializeField]
	private int mBase; //Field offset: 0x14
	[HideInInspector]
	[SerializeField]
	private int mWidth; //Field offset: 0x18
	[HideInInspector]
	[SerializeField]
	private int mHeight; //Field offset: 0x1C
	[HideInInspector]
	[SerializeField]
	private string mSpriteName; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	private List<BMGlyph> mSaved; //Field offset: 0x28
	private Dictionary<Int32, BMGlyph> mDict; //Field offset: 0x30

	public int baseOffset
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public int charSize
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public int glyphCount
	{
		 get { } //Length: 96
	}

	public List<BMGlyph> glyphs
	{
		 get { } //Length: 8
	}

	public bool isValid
	{
		 get { } //Length: 84
	}

	public string spriteName
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public int texHeight
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public int texWidth
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public BMFont() { }

	public void Clear() { }

	public int get_baseOffset() { }

	public int get_charSize() { }

	public int get_glyphCount() { }

	public List<BMGlyph> get_glyphs() { }

	public bool get_isValid() { }

	public string get_spriteName() { }

	public int get_texHeight() { }

	public int get_texWidth() { }

	public BMGlyph GetGlyph(int index, bool createIfMissing) { }

	public BMGlyph GetGlyph(int index) { }

	public void set_baseOffset(int value) { }

	public void set_charSize(int value) { }

	public void set_spriteName(string value) { }

	public void set_texHeight(int value) { }

	public void set_texWidth(int value) { }

	public void Trim(int xMin, int yMin, int xMax, int yMax) { }

}

