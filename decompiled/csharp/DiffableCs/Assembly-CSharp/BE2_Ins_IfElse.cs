//Type is in global namespace

public class BE2_Ins_IfElse : BE2_InstructionBase, I_BE2_Instruction
{
	private I_BE2_BlockSectionHeaderInput _input0; //Field offset: 0x78
	private string _value; //Field offset: 0x80
	private bool _isFirstPlay; //Field offset: 0x88

	public BE2_Ins_IfElse() { }

	public override void Function() { }

	protected virtual void OnButtonStop() { }

	public virtual void OnStackActive() { }

	public override void Reset() { }

}

