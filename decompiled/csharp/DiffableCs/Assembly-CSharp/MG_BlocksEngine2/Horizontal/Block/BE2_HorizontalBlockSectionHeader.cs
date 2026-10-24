namespace MG_BlocksEngine2.Horizontal.Block;

[ExecuteInEditMode]
public class BE2_HorizontalBlockSectionHeader : MonoBehaviour, I_BE2_BlockSectionHeader
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private I_BE2_BlockSection _section; //Field offset: 0x20
	private I_BE2_BlockLayout _blockLayout; //Field offset: 0x28
	private Image _image; //Field offset: 0x30
	public float minHeight; //Field offset: 0x38
	public float minWidth; //Field offset: 0x3C
	private I_BE2_BlockSectionHeaderItem[] _itemsArray; //Field offset: 0x40
	private I_BE2_BlockSectionHeaderInput[] _inputsArray; //Field offset: 0x48
	private Shadow _shadow; //Field offset: 0x50

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
		 get { } //Length: 356
	}

	public override Vector2 Size
	{
		 get { } //Length: 192
		 set { } //Length: 28
	}

	public BE2_HorizontalBlockSectionHeader() { }

	private void Awake() { }

	public override I_BE2_BlockSectionHeaderInput[] get_InputsArray() { }

	public override I_BE2_BlockSectionHeaderItem[] get_ItemsArray() { }

	public override RectTransform get_RectTransform() { }

	public override Shadow get_Shadow() { }

	public override Vector2 get_Size() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnValidate() { }

	public void set_Size(Vector2 value) { }

	public override void UpdateInputsArray() { }

	public override void UpdateItemsArray() { }

	public override void UpdateLayout() { }

}

