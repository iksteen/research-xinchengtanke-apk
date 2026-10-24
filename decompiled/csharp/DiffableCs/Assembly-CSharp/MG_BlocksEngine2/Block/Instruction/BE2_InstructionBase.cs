namespace MG_BlocksEngine2.Block.Instruction;

public class BE2_InstructionBase : MonoBehaviour, I_BE2_InstructionBase
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<I_BE2_BlockSection> <>9__34_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <Initialize>b__34_0(I_BE2_BlockSection x) { }

	}

	private I_BE2_BlockLayout _blockLayout; //Field offset: 0x18
	private I_BE2_BlockSection[] _sectionsList; //Field offset: 0x20
	private I_BE2_BlockSectionHeader _section0header; //Field offset: 0x28
	private int _lastLocation; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_Instruction <Instruction>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private I_BE2_Block <Block>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private I_BE2_BlocksStack <BlocksStack>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private I_BE2_TargetObject <TargetObject>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private Int32[] <LocationsArray>k__BackingField; //Field offset: 0x58
	private int _overflowLimit; //Field offset: 0x60
	[CompilerGenerated]
	private I_BE2_InstructionBase <InstructionBase>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private readonly bool <ExecuteInUpdate>k__BackingField; //Field offset: 0x70

	public override I_BE2_Block Block
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_BlocksStack BlocksStack
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override bool ExecuteInUpdate
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override I_BE2_Instruction Instruction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_InstructionBase InstructionBase
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Int32[] LocationsArray
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_BlockSectionHeaderInput[] Section0Inputs
	{
		 get { } //Length: 188
	}

	public override I_BE2_TargetObject TargetObject
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BE2_InstructionBase() { }

	private void Awake() { }

	private void ExecuteInstruction(I_BE2_Instruction instruction) { }

	public override void ExecuteNextInstruction() { }

	public override void ExecuteSection(int sectionIndex) { }

	public override void Function() { }

	[CompilerGenerated]
	public override I_BE2_Block get_Block() { }

	[CompilerGenerated]
	public override I_BE2_BlocksStack get_BlocksStack() { }

	[CompilerGenerated]
	public override bool get_ExecuteInUpdate() { }

	[CompilerGenerated]
	public override I_BE2_Instruction get_Instruction() { }

	[CompilerGenerated]
	public override I_BE2_InstructionBase get_InstructionBase() { }

	[CompilerGenerated]
	public override Int32[] get_LocationsArray() { }

	public override I_BE2_BlockSectionHeaderInput[] get_Section0Inputs() { }

	[CompilerGenerated]
	public override I_BE2_TargetObject get_TargetObject() { }

	private void GetBlockStack() { }

	public override I_BE2_BlockSectionHeaderInput[] GetSectionInputs(int sectionIndex) { }

	public void Initialize() { }

	protected override void OnAwake() { }

	protected override void OnButtonPlay() { }

	protected override void OnButtonStop() { }

	private void OnDisable() { }

	protected override void OnDisableInstruction() { }

	private void OnEnable() { }

	protected override void OnEnableInstruction() { }

	public override void OnPrepareToPlay() { }

	public override void OnStackActive() { }

	protected override void OnStart() { }

	public override string Operation() { }

	public override void PrepareToPlay() { }

	public override void Reset() { }

	[CompilerGenerated]
	public void set_Block(I_BE2_Block value) { }

	[CompilerGenerated]
	public override void set_BlocksStack(I_BE2_BlocksStack value) { }

	[CompilerGenerated]
	public void set_Instruction(I_BE2_Instruction value) { }

	[CompilerGenerated]
	public void set_InstructionBase(I_BE2_InstructionBase value) { }

	[CompilerGenerated]
	public override void set_LocationsArray(Int32[] value) { }

	[CompilerGenerated]
	public override void set_TargetObject(I_BE2_TargetObject value) { }

	private void Start() { }

	public override void UpdateTargetObject() { }

}

