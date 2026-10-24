namespace UnityEngine;

[UsedByNativeCode]
public struct RectInt : IEquatable<RectInt>, IFormattable
{
	private int m_XMin; //Field offset: 0x0
	private int m_YMin; //Field offset: 0x4
	private int m_Width; //Field offset: 0x8
	private int m_Height; //Field offset: 0xC

	public int height
	{
		 get { } //Length: 8
	}

	public int width
	{
		 get { } //Length: 8
	}

	public int x
	{
		 get { } //Length: 8
	}

	public int y
	{
		 get { } //Length: 8
	}

	public override bool Equals(RectInt other) { }

	public int get_height() { }

	public int get_width() { }

	public int get_x() { }

	public int get_y() { }

	public virtual string ToString() { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

}

