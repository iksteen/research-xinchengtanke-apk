//Type is in global namespace

public class BE2_Cst_LookAtAndMove : BE2_InstructionBase, I_BE2_Instruction
{
	private bool _firstPlay; //Field offset: 0x71
	private float _timer; //Field offset: 0x74
	private int _counter; //Field offset: 0x78
	private Vector3 _initialPosition; //Field offset: 0x7C
	private Quaternion _initialRotation; //Field offset: 0x88
	private Vector3 _direction; //Field offset: 0x98

	public override bool ExecuteInUpdate
	{
		 get { } //Length: 8
	}

	public BE2_Cst_LookAtAndMove() { }

	public override void Function() { }

	public override bool get_ExecuteInUpdate() { }

	private Vector3 GetDirection(string option) { }

	public virtual void OnStackActive() { }

}

