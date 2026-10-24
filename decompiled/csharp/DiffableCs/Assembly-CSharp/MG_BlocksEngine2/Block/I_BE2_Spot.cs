namespace MG_BlocksEngine2.Block;

public interface I_BE2_Spot
{

	public I_BE2_Block Block
	{
		 get { } //Length: 0
	}

	public Vector2 DropPosition
	{
		 get { } //Length: 0
	}

	public Transform Transform
	{
		 get { } //Length: 0
	}

	public I_BE2_Block get_Block() { }

	public Vector2 get_DropPosition() { }

	public Transform get_Transform() { }

}

