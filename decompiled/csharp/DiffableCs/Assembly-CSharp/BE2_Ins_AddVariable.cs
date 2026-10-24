//Type is in global namespace

public class BE2_Ins_AddVariable : BE2_InstructionBase, I_BE2_Instruction
{
	private string _vs0; //Field offset: 0x78
	private BE2_InputValues _v1; //Field offset: 0x80
	private BE2_InputValues _varValues; //Field offset: 0x88
	private string _lastValue; //Field offset: 0x90
	private BE2_Dropdown _dropdown; //Field offset: 0x98
	private BE2_VariablesManager _variablesManager; //Field offset: 0xA0

	public BE2_Ins_AddVariable() { }

	[CompilerGenerated]
	private void <OnStart>b__0_0(int <p0>) { }

	public override void Function() { }

	private void OnDisable() { }

	protected virtual void OnStart() { }

	private void PopulateDropdown() { }

}

