//Type is in global namespace

[SerializeAsVariable(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class BE2_Op_Variable : BE2_InstructionBase, I_BE2_Instruction
{
	private BE2_VariablesManager _variablesManager; //Field offset: 0x78

	public BE2_Op_Variable() { }

	protected virtual void OnStart() { }

	public override string Operation() { }

}

