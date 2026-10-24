//Type is in global namespace

public class BE2_Ins_DefineFunction : BE2_InstructionBase, I_BE2_Instruction
{
	public string defineID; //Field offset: 0x78
	public UnityEvent onDefineChange; //Field offset: 0x80

	public BE2_Ins_DefineFunction() { }

	public int GetLocalVariableIndex(string varName) { }

	public void HandleDefineChange(I_BE2_Block block) { }

	protected virtual void OnAwake() { }

	private void OnDestroy() { }

	protected virtual void OnDisableInstruction() { }

	protected virtual void OnEnableInstruction() { }

	protected virtual void OnStart() { }

}

