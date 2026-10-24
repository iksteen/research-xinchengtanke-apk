//Type is in global namespace

public class BE2_Ins_SlideForward : BE2_InstructionBase, I_BE2_Instruction
{
	private I_BE2_BlockSectionHeaderInput _input0; //Field offset: 0x78
	private float _value; //Field offset: 0x80
	private float _absValue; //Field offset: 0x84
	private bool _firstPlay; //Field offset: 0x88
	private float _timer; //Field offset: 0x8C
	private int _counter; //Field offset: 0x90
	private Vector3 _initialPosition; //Field offset: 0x94

	public override bool ExecuteInUpdate
	{
		 get { } //Length: 8
	}

	public BE2_Ins_SlideForward() { }

	public override void Function() { }

	public override bool get_ExecuteInUpdate() { }

	protected virtual void OnButtonStop() { }

	public virtual void OnStackActive() { }

}

