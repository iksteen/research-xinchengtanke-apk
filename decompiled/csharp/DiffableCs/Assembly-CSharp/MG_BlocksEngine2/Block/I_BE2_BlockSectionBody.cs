namespace MG_BlocksEngine2.Block;

public interface I_BE2_BlockSectionBody
{

	public I_BE2_BlockSection BlockSection
	{
		 get { } //Length: 0
	}

	public I_BE2_Block[] ChildBlocksArray
	{
		 get { } //Length: 0
	}

	public int ChildBlocksCount
	{
		 get { } //Length: 0
	}

	public RectTransform RectTransform
	{
		 get { } //Length: 0
	}

	public Shadow Shadow
	{
		 get { } //Length: 0
	}

	public Vector2 Size
	{
		 get { } //Length: 0
	}

	public I_BE2_Spot Spot
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_BlockSection get_BlockSection() { }

	public I_BE2_Block[] get_ChildBlocksArray() { }

	public int get_ChildBlocksCount() { }

	public RectTransform get_RectTransform() { }

	public Shadow get_Shadow() { }

	public Vector2 get_Size() { }

	public I_BE2_Spot get_Spot() { }

	public void set_Spot(I_BE2_Spot value) { }

	public void UpdateChildBlocksList() { }

	public void UpdateLayout() { }

}

