namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_NoViewBlockSectionHeader : MonoBehaviour, I_BE2_BlockSectionHeader
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private I_BE2_BlockSection _section; //Field offset: 0x20
	private I_BE2_BlockLayout _blockLayout; //Field offset: 0x28
	private I_BE2_BlockSectionHeaderItem[] _itemsArray; //Field offset: 0x30
	private I_BE2_BlockSectionHeaderInput[] _inputsArray; //Field offset: 0x38
	[CompilerGenerated]
	private readonly Shadow <Shadow>k__BackingField; //Field offset: 0x40

	public override I_BE2_BlockSectionHeaderInput[] InputsArray
	{
		 get { } //Length: 8
	}

	public override I_BE2_BlockSectionHeaderItem[] ItemsArray
	{
		 get { } //Length: 8
	}

	public override RectTransform RectTransform
	{
		 get { } //Length: 8
	}

	public override Shadow Shadow
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override Vector2 Size
	{
		 get { } //Length: 8
	}

	public BE2_NoViewBlockSectionHeader() { }

	private void Awake() { }

	public override I_BE2_BlockSectionHeaderInput[] get_InputsArray() { }

	public override I_BE2_BlockSectionHeaderItem[] get_ItemsArray() { }

	public override RectTransform get_RectTransform() { }

	[CompilerGenerated]
	public override Shadow get_Shadow() { }

	public override Vector2 get_Size() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnValidate() { }

	public override void UpdateInputsArray() { }

	public override void UpdateItemsArray() { }

	public override void UpdateLayout() { }

}

