namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_NoViewBlockSectionBody : MonoBehaviour, I_BE2_BlockSectionBody
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private I_BE2_BlockSection _section; //Field offset: 0x20
	private I_BE2_BlockLayout _blockLayout; //Field offset: 0x28
	[CompilerGenerated]
	private I_BE2_Block[] <ChildBlocksArray>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_BlockSection <BlockSection>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private I_BE2_Spot <Spot>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private int <ChildBlocksCount>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private readonly Shadow <Shadow>k__BackingField; //Field offset: 0x50

	public override I_BE2_BlockSection BlockSection
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_Block[] ChildBlocksArray
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ChildBlocksCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
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

	public override I_BE2_Spot Spot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BE2_NoViewBlockSectionBody() { }

	private void Awake() { }

	[CompilerGenerated]
	public override I_BE2_BlockSection get_BlockSection() { }

	[CompilerGenerated]
	public override I_BE2_Block[] get_ChildBlocksArray() { }

	[CompilerGenerated]
	public override int get_ChildBlocksCount() { }

	public override RectTransform get_RectTransform() { }

	[CompilerGenerated]
	public override Shadow get_Shadow() { }

	public override Vector2 get_Size() { }

	[CompilerGenerated]
	public override I_BE2_Spot get_Spot() { }

	private void OnValidate() { }

	[CompilerGenerated]
	public void set_BlockSection(I_BE2_BlockSection value) { }

	[CompilerGenerated]
	public void set_ChildBlocksArray(I_BE2_Block[] value) { }

	[CompilerGenerated]
	public void set_ChildBlocksCount(int value) { }

	[CompilerGenerated]
	public override void set_Spot(I_BE2_Spot value) { }

	public override void UpdateChildBlocksList() { }

	public override void UpdateLayout() { }

}

