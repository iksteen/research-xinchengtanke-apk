namespace MG_BlocksEngine2.Block.Instruction;

public interface I_BE2_Instruction
{

	public bool ExecuteInUpdate
	{
		 get { } //Length: 0
	}

	public I_BE2_InstructionBase InstructionBase
	{
		 get { } //Length: 0
	}

	public void Function() { }

	public bool get_ExecuteInUpdate() { }

	public I_BE2_InstructionBase get_InstructionBase() { }

	public string Operation() { }

	public void Reset() { }

}

