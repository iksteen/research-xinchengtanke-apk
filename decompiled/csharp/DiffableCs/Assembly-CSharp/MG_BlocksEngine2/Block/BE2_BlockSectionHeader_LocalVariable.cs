namespace MG_BlocksEngine2.Block;

public class BE2_BlockSectionHeader_LocalVariable : MonoBehaviour, I_BE2_BlockSectionHeaderItem, I_BE2_BlockSectionHeaderInput
{
	private I_BE2_Instruction _instruction; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x20
	private TMP_Text _text; //Field offset: 0x28
	private bool _isText; //Field offset: 0x30

	public override float FloatValue
	{
		 get { } //Length: 4
	}

	public override BE2_InputValues InputValues
	{
		 get { } //Length: 4
	}

	public override Vector2 Size
	{
		 get { } //Length: 164
	}

	public override I_BE2_Spot Spot
	{
		 get { } //Length: 8
	}

	public override string StringValue
	{
		 get { } //Length: 4
	}

	public override Transform Transform
	{
		 get { } //Length: 8
	}

	public BE2_BlockSectionHeader_LocalVariable() { }

	private void Awake() { }

	public override float get_FloatValue() { }

	public override BE2_InputValues get_InputValues() { }

	public override Vector2 get_Size() { }

	public override I_BE2_Spot get_Spot() { }

	public override string get_StringValue() { }

	public override Transform get_Transform() { }

	private float GetFloatValue() { }

	private BE2_InputValues GetInputValues() { }

	private string GetStringValue() { }

	public override void UpdateValues() { }

}

