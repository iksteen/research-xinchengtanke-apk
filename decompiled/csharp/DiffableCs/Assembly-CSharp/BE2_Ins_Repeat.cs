//Type is in global namespace

public class BE2_Ins_Repeat : BE2_InstructionBase, I_BE2_Instruction
{
	private I_BE2_BlockSectionHeaderInput _input0; //Field offset: 0x78
	private int _counter; //Field offset: 0x80
	private float _value; //Field offset: 0x84

	public BE2_Ins_Repeat() { }

	public override void Function() { }

	protected virtual void OnButtonStop() { }

	public virtual void OnStackActive() { }

	public override void Reset() { }

}

