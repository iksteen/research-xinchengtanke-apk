namespace UnityEngine;

[UsedByNativeCode]
public struct CharacterInfo
{
	public int index; //Field offset: 0x0
	[Obsolete]
	public Rect uv; //Field offset: 0x4
	[Obsolete]
	public Rect vert; //Field offset: 0x14
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Obsolete]
	public float width; //Field offset: 0x24
	public int size; //Field offset: 0x28
	public FontStyle style; //Field offset: 0x2C
	[Obsolete]
	public bool flipped; //Field offset: 0x30

	public int advance
	{
		 get { } //Length: 144
	}

	public int maxX
	{
		 get { } //Length: 96
	}

	public int maxY
	{
		 get { } //Length: 56
	}

	public int minX
	{
		 get { } //Length: 56
	}

	public int minY
	{
		 get { } //Length: 96
	}

	public Vector2 uvBottomLeft
	{
		 get { } //Length: 72
	}

	internal Vector2 uvBottomLeftUnFlipped
	{
		internal get { } //Length: 72
	}

	public Vector2 uvBottomRight
	{
		 get { } //Length: 16
	}

	internal Vector2 uvBottomRightUnFlipped
	{
		internal get { } //Length: 96
	}

	public Vector2 uvTopLeft
	{
		 get { } //Length: 16
	}

	internal Vector2 uvTopLeftUnFlipped
	{
		internal get { } //Length: 88
	}

	public Vector2 uvTopRight
	{
		 get { } //Length: 4
	}

	internal Vector2 uvTopRightUnFlipped
	{
		internal get { } //Length: 116
	}

	public int get_advance() { }

	public int get_maxX() { }

	public int get_maxY() { }

	public int get_minX() { }

	public int get_minY() { }

	public Vector2 get_uvBottomLeft() { }

	internal Vector2 get_uvBottomLeftUnFlipped() { }

	public Vector2 get_uvBottomRight() { }

	internal Vector2 get_uvBottomRightUnFlipped() { }

	public Vector2 get_uvTopLeft() { }

	internal Vector2 get_uvTopLeftUnFlipped() { }

	public Vector2 get_uvTopRight() { }

	internal Vector2 get_uvTopRightUnFlipped() { }

}

