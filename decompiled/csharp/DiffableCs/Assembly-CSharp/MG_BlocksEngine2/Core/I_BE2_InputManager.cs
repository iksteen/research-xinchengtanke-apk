namespace MG_BlocksEngine2.Core;

public interface I_BE2_InputManager
{

	public Vector3 CanvasPointerPosition
	{
		 get { } //Length: 0
	}

	public Vector3 ScreenPointerPosition
	{
		 get { } //Length: 0
	}

	public Vector3 get_CanvasPointerPosition() { }

	public Vector3 get_ScreenPointerPosition() { }

	public void OnUpdate() { }

}

