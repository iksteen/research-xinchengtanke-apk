namespace MG_BlocksEngine2.Block;

public interface I_BE2_BlockLayout
{

	public Color Color
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public RectTransform RectTransform
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_BlockSection[] SectionsArray
	{
		 get { } //Length: 0
	}

	public Vector2 Size
	{
		 get { } //Length: 0
	}

	public Color get_Color() { }

	public RectTransform get_RectTransform() { }

	public I_BE2_BlockSection[] get_SectionsArray() { }

	public Vector2 get_Size() { }

	public void set_Color(Color value) { }

	public void set_RectTransform(RectTransform value) { }

	public void UpdateLayout() { }

}

