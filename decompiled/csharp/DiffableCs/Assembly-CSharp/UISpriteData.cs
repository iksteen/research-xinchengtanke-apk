//Type is in global namespace

public class UISpriteData
{
	public string name; //Field offset: 0x10
	public int x; //Field offset: 0x18
	public int y; //Field offset: 0x1C
	public int width; //Field offset: 0x20
	public int height; //Field offset: 0x24
	public int borderLeft; //Field offset: 0x28
	public int borderRight; //Field offset: 0x2C
	public int borderTop; //Field offset: 0x30
	public int borderBottom; //Field offset: 0x34
	public int paddingLeft; //Field offset: 0x38
	public int paddingRight; //Field offset: 0x3C
	public int paddingTop; //Field offset: 0x40
	public int paddingBottom; //Field offset: 0x44

	public bool hasBorder
	{
		 get { } //Length: 32
	}

	public bool hasPadding
	{
		 get { } //Length: 32
	}

	public UISpriteData() { }

	public void CopyBorderFrom(UISpriteData sd) { }

	public void CopyFrom(UISpriteData sd) { }

	public bool get_hasBorder() { }

	public bool get_hasPadding() { }

	public void SetBorder(int left, int bottom, int right, int top) { }

	public void SetPadding(int left, int bottom, int right, int top) { }

	public void SetRect(int x, int y, int width, int height) { }

}

