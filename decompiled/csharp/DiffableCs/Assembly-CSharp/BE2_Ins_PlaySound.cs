//Type is in global namespace

public class BE2_Ins_PlaySound : BE2_InstructionBase, I_BE2_Instruction
{
	private BE2_Dropdown _dropdown; //Field offset: 0x78
	private string _value; //Field offset: 0x80

	public BE2_Ins_PlaySound() { }

	public override void Function() { }

	protected virtual void OnStart() { }

	private void PopulateDropdown() { }

}

