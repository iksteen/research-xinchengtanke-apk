//Type is in global namespace

public class BE2_Op_FunctionLocalVariable : BE2_InstructionBase, I_BE2_Instruction
{
	public BE2_Ins_DefineFunction defineInstruction; //Field offset: 0x78
	public BE2_Block blockToObserve; //Field offset: 0x80
	private TMP_Text _text; //Field offset: 0x88
	public string varName; //Field offset: 0x90

	public BE2_Op_FunctionLocalVariable() { }

	protected virtual void OnAwake() { }

	public override string Operation() { }

}

