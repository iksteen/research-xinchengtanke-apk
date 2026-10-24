//Type is in global namespace

public class BE2_Ins_BreakLoop : BE2_InstructionBase, I_BE2_Instruction
{
	private I_BE2_Instruction _parentLoopInstruction; //Field offset: 0x78
	private I_BE2_Instruction[] _parentConditionInstructions; //Field offset: 0x80

	public BE2_Ins_BreakLoop() { }

	public override void Function() { }

	protected virtual void OnButtonStop() { }

	public virtual void OnStackActive() { }

}

