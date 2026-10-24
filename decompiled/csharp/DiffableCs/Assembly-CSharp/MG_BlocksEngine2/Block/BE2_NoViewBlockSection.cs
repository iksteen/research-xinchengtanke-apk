namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_NoViewBlockSection : MonoBehaviour, I_BE2_BlockSection
{
	private RectTransform _rectTransform; //Field offset: 0x18
	public I_BE2_BlockLayout blockLayout; //Field offset: 0x20
	private I_BE2_BlockSectionHeader _header; //Field offset: 0x28
	private I_BE2_BlockSectionBody _body; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_Block <Block>k__BackingField; //Field offset: 0x38
	public int index; //Field offset: 0x40

	public override I_BE2_Block Block
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_BlockSectionBody Body
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override I_BE2_BlockSectionHeader Header
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override RectTransform RectTransform
	{
		 get { } //Length: 8
	}

	public override Vector2 Size
	{
		 get { } //Length: 8
	}

	public BE2_NoViewBlockSection() { }

	private void Awake() { }

	[CompilerGenerated]
	public override I_BE2_Block get_Block() { }

	public override I_BE2_BlockSectionBody get_Body() { }

	public override I_BE2_BlockSectionHeader get_Header() { }

	public override RectTransform get_RectTransform() { }

	public override Vector2 get_Size() { }

	private void OnValidate() { }

	[CompilerGenerated]
	public override void set_Block(I_BE2_Block value) { }

	public void set_Body(I_BE2_BlockSectionBody value) { }

	public void set_Header(I_BE2_BlockSectionHeader value) { }

	public override void UpdateLayout() { }

}

