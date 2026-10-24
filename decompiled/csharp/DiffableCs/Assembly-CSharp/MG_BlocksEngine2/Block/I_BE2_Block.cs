namespace MG_BlocksEngine2.Block;

public interface I_BE2_Block
{

	public I_BE2_Drag Drag
	{
		 get { } //Length: 0
	}

	public I_BE2_Instruction Instruction
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_BlockLayout Layout
	{
		 get { } //Length: 0
	}

	public I_BE2_BlockSection ParentSection
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Transform Transform
	{
		 get { } //Length: 0
	}

	public BlockTypeEnum Type
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public I_BE2_Drag get_Drag() { }

	public I_BE2_Instruction get_Instruction() { }

	public I_BE2_BlockLayout get_Layout() { }

	public I_BE2_BlockSection get_ParentSection() { }

	public Transform get_Transform() { }

	public BlockTypeEnum get_Type() { }

	public void set_Instruction(I_BE2_Instruction value) { }

	public void set_ParentSection(I_BE2_BlockSection value) { }

	public void set_Type(BlockTypeEnum value) { }

	public void SetShadowActive(bool value) { }

}

