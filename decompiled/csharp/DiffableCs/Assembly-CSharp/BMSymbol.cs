//Type is in global namespace

public class BMSymbol
{
	public string sequence; //Field offset: 0x10
	public string spriteName; //Field offset: 0x18
	public bool colored; //Field offset: 0x20
	public bool pixelPerfect; //Field offset: 0x21
	private UISpriteData mSprite; //Field offset: 0x28
	private bool mIsValid; //Field offset: 0x30
	private int mLength; //Field offset: 0x34
	private int mOffsetX; //Field offset: 0x38
	private int mOffsetY; //Field offset: 0x3C
	private int mWidth; //Field offset: 0x40
	private int mHeight; //Field offset: 0x44
	private int mAdvance; //Field offset: 0x48
	private Rect mUV; //Field offset: 0x4C

	public int advance
	{
		 get { } //Length: 8
	}

	public int height
	{
		 get { } //Length: 8
	}

	public int length
	{
		 get { } //Length: 44
	}

	public int offsetX
	{
		 get { } //Length: 8
	}

	public int offsetY
	{
		 get { } //Length: 8
	}

	public int paddedHeight
	{
		 get { } //Length: 36
	}

	public Rect uvRect
	{
		 get { } //Length: 12
	}

	public int width
	{
		 get { } //Length: 8
	}

	public BMSymbol() { }

	public int get_advance() { }

	public int get_height() { }

	public int get_length() { }

	public int get_offsetX() { }

	public int get_offsetY() { }

	public int get_paddedHeight() { }

	public Rect get_uvRect() { }

	public int get_width() { }

	public void MarkAsChanged() { }

	public bool Validate(INGUIAtlas atlas) { }

}

