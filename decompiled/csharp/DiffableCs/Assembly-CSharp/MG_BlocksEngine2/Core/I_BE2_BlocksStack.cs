namespace MG_BlocksEngine2.Core;

public interface I_BE2_BlocksStack
{

	public I_BE2_Instruction[] InstructionsArray
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool IsActive
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool IsStepPlay
	{
		 get { } //Length: 0
	}

	public UnityEvent<I_BE2_Instruction> OnFunctionStart
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public UnityEvent OnStackLastBlockExecuted
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public UnityEvent OnStackStart
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int OverflowGuard
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int Pointer
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_TargetObject TargetObject
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_Instruction TriggerInstruction
	{
		 get { } //Length: 0
	}

	public void Execute() { }

	public I_BE2_Instruction[] get_InstructionsArray() { }

	public bool get_IsActive() { }

	public bool get_IsStepPlay() { }

	public UnityEvent<I_BE2_Instruction> get_OnFunctionStart() { }

	public UnityEvent get_OnStackLastBlockExecuted() { }

	public UnityEvent get_OnStackStart() { }

	public int get_OverflowGuard() { }

	public int get_Pointer() { }

	public I_BE2_TargetObject get_TargetObject() { }

	public I_BE2_Instruction get_TriggerInstruction() { }

	public void Pause() { }

	public void PopulateStack() { }

	public void set_InstructionsArray(I_BE2_Instruction[] value) { }

	public void set_IsActive(bool value) { }

	public void set_OnFunctionStart(UnityEvent<I_BE2_Instruction> value) { }

	public void set_OnStackLastBlockExecuted(UnityEvent value) { }

	public void set_OnStackStart(UnityEvent value) { }

	public void set_OverflowGuard(int value) { }

	public void set_Pointer(int value) { }

	public void set_TargetObject(I_BE2_TargetObject value) { }

	public void StepPlay() { }

}

