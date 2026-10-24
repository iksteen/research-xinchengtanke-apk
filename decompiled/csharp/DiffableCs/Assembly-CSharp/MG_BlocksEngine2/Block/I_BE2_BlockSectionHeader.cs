namespace MG_BlocksEngine2.Block;

public interface I_BE2_BlockSectionHeader
{

	public I_BE2_BlockSectionHeaderInput[] InputsArray
	{
		 get { } //Length: 0
	}

	public I_BE2_BlockSectionHeaderItem[] ItemsArray
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

	public I_BE2_BlockSectionHeaderInput[] get_InputsArray() { }

	public I_BE2_BlockSectionHeaderItem[] get_ItemsArray() { }

	public RectTransform get_RectTransform() { }

	public Shadow get_Shadow() { }

	public Vector2 get_Size() { }

	public void UpdateInputsArray() { }

	public void UpdateItemsArray() { }

	public void UpdateLayout() { }

}

