namespace MG_BlocksEngine2.Core;

public class BE2_BlocksStack : MonoBehaviour, I_BE2_BlocksStack
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<I_BE2_BlockSection> <>9__49_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <PopulateStackRecursive>b__49_0(I_BE2_BlockSection x) { }

	}

	private int _arrayLength; //Field offset: 0x18
	private bool _isActive; //Field offset: 0x1C
	[CompilerGenerated]
	private int <Pointer>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private I_BE2_Instruction[] <InstructionsArray>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private I_BE2_TargetObject <TargetObject>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_Instruction <TriggerInstruction>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private UnityEvent <OnStackStart>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private UnityEvent <OnStackLastBlockExecuted>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private UnityEvent<I_BE2_Instruction> <OnFunctionStart>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private int <OverflowGuard>k__BackingField; //Field offset: 0x58
	private bool _isStepPlay; //Field offset: 0x5C

	public override I_BE2_Instruction[] InstructionsArray
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override bool IsActive
	{
		 get { } //Length: 8
		 set { } //Length: 1264
	}

	public override bool IsStepPlay
	{
		 get { } //Length: 8
	}

	public override UnityEvent<I_BE2_Instruction> OnFunctionStart
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override UnityEvent OnStackLastBlockExecuted
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override UnityEvent OnStackStart
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int OverflowGuard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int Pointer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_TargetObject TargetObject
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_Instruction TriggerInstruction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BE2_BlocksStack() { }

	private void Awake() { }

	public override void Execute() { }

	[CompilerGenerated]
	public override I_BE2_Instruction[] get_InstructionsArray() { }

	public override bool get_IsActive() { }

	public override bool get_IsStepPlay() { }

	[CompilerGenerated]
	public override UnityEvent<I_BE2_Instruction> get_OnFunctionStart() { }

	[CompilerGenerated]
	public override UnityEvent get_OnStackLastBlockExecuted() { }

	[CompilerGenerated]
	public override UnityEvent get_OnStackStart() { }

	[CompilerGenerated]
	public override int get_OverflowGuard() { }

	[CompilerGenerated]
	public override int get_Pointer() { }

	[CompilerGenerated]
	public override I_BE2_TargetObject get_TargetObject() { }

	[CompilerGenerated]
	public override I_BE2_Instruction get_TriggerInstruction() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public override void Pause() { }

	public override void PopulateStack() { }

	private void PopulateStackRecursive(I_BE2_Block parentBlock) { }

	[CompilerGenerated]
	public override void set_InstructionsArray(I_BE2_Instruction[] value) { }

	public override void set_IsActive(bool value) { }

	[CompilerGenerated]
	public override void set_OnFunctionStart(UnityEvent<I_BE2_Instruction> value) { }

	[CompilerGenerated]
	public override void set_OnStackLastBlockExecuted(UnityEvent value) { }

	[CompilerGenerated]
	public override void set_OnStackStart(UnityEvent value) { }

	[CompilerGenerated]
	public override void set_OverflowGuard(int value) { }

	[CompilerGenerated]
	public override void set_Pointer(int value) { }

	[CompilerGenerated]
	public override void set_TargetObject(I_BE2_TargetObject value) { }

	[CompilerGenerated]
	public void set_TriggerInstruction(I_BE2_Instruction value) { }

	private void Start() { }

	public override void StepPlay() { }

	private void StopStack() { }

}

