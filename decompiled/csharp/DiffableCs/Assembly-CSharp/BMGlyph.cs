//Type is in global namespace

public class BMGlyph
{
	public int index; //Field offset: 0x10
	public int x; //Field offset: 0x14
	public int y; //Field offset: 0x18
	public int width; //Field offset: 0x1C
	public int height; //Field offset: 0x20
	public int offsetX; //Field offset: 0x24
	public int offsetY; //Field offset: 0x28
	public int advance; //Field offset: 0x2C
	public int channel; //Field offset: 0x30
	public List<Int32> kerning; //Field offset: 0x38

	public BMGlyph() { }

	public int GetKerning(int previousChar) { }

	public void SetKerning(int previousChar, int amount) { }

	public void Trim(int xMin, int yMin, int xMax, int yMax) { }

}

