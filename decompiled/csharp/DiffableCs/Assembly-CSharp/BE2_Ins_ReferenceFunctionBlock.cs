//Type is in global namespace

public class BE2_Ins_ReferenceFunctionBlock : BE2_InstructionBase, I_BE2_Instruction
{
	public BE2_Ins_FunctionBlock functionInstruction; //Field offset: 0x78
	private List<I_BE2_Instruction> _instructionsToReset; //Field offset: 0x80

	public BE2_Ins_ReferenceFunctionBlock(BE2_Ins_FunctionBlock functionInstruction) { }

	public override void Function() { }

	public void Initialize(BE2_Ins_FunctionBlock functionInstruction) { }

	public virtual void OnPrepareToPlay() { }

}

