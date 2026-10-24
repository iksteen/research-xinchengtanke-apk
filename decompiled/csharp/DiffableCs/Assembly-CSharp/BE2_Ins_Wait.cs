//Type is in global namespace

public class BE2_Ins_Wait : BE2_InstructionBase, I_BE2_Instruction
{
	private I_BE2_BlockSectionHeaderInput _input0; //Field offset: 0x78
	private bool _firstPlay; //Field offset: 0x80
	private float _counter; //Field offset: 0x84

	public override bool ExecuteInUpdate
	{
		 get { } //Length: 8
	}

	public BE2_Ins_Wait() { }

	public override void Function() { }

	public override bool get_ExecuteInUpdate() { }

	protected virtual void OnButtonStop() { }

	public virtual void OnStackActive() { }

	public override void Reset() { }

}

