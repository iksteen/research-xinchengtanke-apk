namespace MG_BlocksEngine2.Block;

public interface I_BE2_BlockSection
{

	public I_BE2_Block Block
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_BlockSectionBody Body
	{
		 get { } //Length: 0
	}

	public I_BE2_BlockSectionHeader Header
	{
		 get { } //Length: 0
	}

	public RectTransform RectTransform
	{
		 get { } //Length: 0
	}

	public Vector2 Size
	{
		 get { } //Length: 0
	}

	public I_BE2_Block get_Block() { }

	public I_BE2_BlockSectionBody get_Body() { }

	public I_BE2_BlockSectionHeader get_Header() { }

	public RectTransform get_RectTransform() { }

	public Vector2 get_Size() { }

	public void set_Block(I_BE2_Block value) { }

	public void UpdateLayout() { }

}

