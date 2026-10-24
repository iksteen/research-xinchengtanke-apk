namespace MG_BlocksEngine2.DragDrop;

public interface I_BE2_Drag
{

	public I_BE2_Block Block
	{
		 get { } //Length: 0
	}

	public Vector2 RayPoint
	{
		 get { } //Length: 0
	}

	public Transform Transform
	{
		 get { } //Length: 0
	}

	public I_BE2_Block get_Block() { }

	public Vector2 get_RayPoint() { }

	public Transform get_Transform() { }

	public void OnDrag() { }

	public void OnPointerDown() { }

	public void OnPointerUp() { }

	public void OnRightPointerDownOrHold() { }

}

