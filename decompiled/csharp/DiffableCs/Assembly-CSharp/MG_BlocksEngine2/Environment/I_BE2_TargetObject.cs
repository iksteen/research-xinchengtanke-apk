namespace MG_BlocksEngine2.Environment;

public interface I_BE2_TargetObject
{

	public I_BE2_ProgrammingEnv ProgrammingEnv
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Transform Transform
	{
		 get { } //Length: 0
	}

	public I_BE2_ProgrammingEnv get_ProgrammingEnv() { }

	public Transform get_Transform() { }

	public void set_ProgrammingEnv(I_BE2_ProgrammingEnv value) { }

}

