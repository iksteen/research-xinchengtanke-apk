namespace MG_BlocksEngine2.Block;

public class BE2_Block : MonoBehaviour, I_BE2_Block
{
	[SerializeField]
	private BlockTypeEnum _type; //Field offset: 0x18
	private Transform _transform; //Field offset: 0x20
	[CompilerGenerated]
	private I_BE2_BlockLayout <Layout>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private I_BE2_Instruction <Instruction>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_BlockSection <ParentSection>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private I_BE2_Drag <Drag>k__BackingField; //Field offset: 0x40

	public override I_BE2_Drag Drag
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_Instruction Instruction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_BlockLayout Layout
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_BlockSection ParentSection
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Transform Transform
	{
		 get { } //Length: 136
	}

	public override BlockTypeEnum Type
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public BE2_Block() { }

	private void Awake() { }

	[CompilerGenerated]
	public override I_BE2_Drag get_Drag() { }

	[CompilerGenerated]
	public override I_BE2_Instruction get_Instruction() { }

	[CompilerGenerated]
	public override I_BE2_BlockLayout get_Layout() { }

	[CompilerGenerated]
	public override I_BE2_BlockSection get_ParentSection() { }

	public override Transform get_Transform() { }

	public override BlockTypeEnum get_Type() { }

	private void GetParentSection() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnValidate() { }

	[CompilerGenerated]
	public void set_Drag(I_BE2_Drag value) { }

	[CompilerGenerated]
	public override void set_Instruction(I_BE2_Instruction value) { }

	[CompilerGenerated]
	public void set_Layout(I_BE2_BlockLayout value) { }

	[CompilerGenerated]
	public override void set_ParentSection(I_BE2_BlockSection value) { }

	public override void set_Type(BlockTypeEnum value) { }

	public override void SetShadowActive(bool value) { }

	private void Start() { }

}

