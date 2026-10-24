namespace MG_BlocksEngine2.Block.Instruction;

public interface I_BE2_InstructionBase
{

	public I_BE2_Block Block
	{
		 get { } //Length: 0
	}

	public I_BE2_BlocksStack BlocksStack
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_Instruction Instruction
	{
		 get { } //Length: 0
	}

	public Int32[] LocationsArray
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_BlockSectionHeaderInput[] Section0Inputs
	{
		 get { } //Length: 0
	}

	public I_BE2_TargetObject TargetObject
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public void ExecuteNextInstruction() { }

	public void ExecuteSection(int sectionIndex) { }

	public I_BE2_Block get_Block() { }

	public I_BE2_BlocksStack get_BlocksStack() { }

	public I_BE2_Instruction get_Instruction() { }

	public Int32[] get_LocationsArray() { }

	public I_BE2_BlockSectionHeaderInput[] get_Section0Inputs() { }

	public I_BE2_TargetObject get_TargetObject() { }

	public I_BE2_BlockSectionHeaderInput[] GetSectionInputs(int sectionIndex) { }

	public void OnStackActive() { }

	public void PrepareToPlay() { }

	public void set_BlocksStack(I_BE2_BlocksStack value) { }

	public void set_LocationsArray(Int32[] value) { }

	public void set_TargetObject(I_BE2_TargetObject value) { }

	public void UpdateTargetObject() { }

}

