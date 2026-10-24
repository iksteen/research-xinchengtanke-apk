namespace MG_BlocksEngine2.Environment;

public interface I_BE2_ProgrammingEnv
{

	public List<I_BE2_Block> BlocksList
	{
		 get { } //Length: 0
	}

	public I_BE2_TargetObject TargetObject
	{
		 get { } //Length: 0
	}

	public Transform Transform
	{
		 get { } //Length: 0
	}

	public bool Visible
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public void ClearBlocks() { }

	public List<I_BE2_Block> get_BlocksList() { }

	public I_BE2_TargetObject get_TargetObject() { }

	public Transform get_Transform() { }

	public bool get_Visible() { }

	public void set_Visible(bool value) { }

	public void UpdateBlocksList() { }

}

