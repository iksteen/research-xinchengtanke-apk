namespace MG_BlocksEngine2.Block;

public interface I_BE2_BlockSectionHeaderInput
{

	public float FloatValue
	{
		 get { } //Length: 0
	}

	public BE2_InputValues InputValues
	{
		 get { } //Length: 0
	}

	public I_BE2_Spot Spot
	{
		 get { } //Length: 0
	}

	public string StringValue
	{
		 get { } //Length: 0
	}

	public Transform Transform
	{
		 get { } //Length: 0
	}

	public float get_FloatValue() { }

	public BE2_InputValues get_InputValues() { }

	public I_BE2_Spot get_Spot() { }

	public string get_StringValue() { }

	public Transform get_Transform() { }

	public void UpdateValues() { }

}

