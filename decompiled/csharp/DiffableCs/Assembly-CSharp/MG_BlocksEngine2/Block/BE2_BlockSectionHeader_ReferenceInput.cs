namespace MG_BlocksEngine2.Block;

public class BE2_BlockSectionHeader_ReferenceInput : MonoBehaviour, I_BE2_BlockSectionHeaderInput
{
	public I_BE2_BlockSectionHeaderInput referenceInput; //Field offset: 0x18
	[CompilerGenerated]
	private readonly I_BE2_Spot <Spot>k__BackingField; //Field offset: 0x20

	public override float FloatValue
	{
		 get { } //Length: 176
	}

	public override BE2_InputValues InputValues
	{
		 get { } //Length: 176
	}

	public override I_BE2_Spot Spot
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override string StringValue
	{
		 get { } //Length: 176
	}

	public override Transform Transform
	{
		 get { } //Length: 8
	}

	public BE2_BlockSectionHeader_ReferenceInput() { }

	public override float get_FloatValue() { }

	public override BE2_InputValues get_InputValues() { }

	[CompilerGenerated]
	public override I_BE2_Spot get_Spot() { }

	public override string get_StringValue() { }

	public override Transform get_Transform() { }

	public override void UpdateValues() { }

}

