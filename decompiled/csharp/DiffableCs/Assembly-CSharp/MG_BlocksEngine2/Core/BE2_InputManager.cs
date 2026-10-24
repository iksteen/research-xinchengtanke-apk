namespace MG_BlocksEngine2.Core;

public class BE2_InputManager : MonoBehaviour, I_BE2_InputManager
{
	private static I_BE2_InputManager _instance; //Field offset: 0x0
	public static List<KeyCode> keyCodeList; //Field offset: 0x8
	public KeyCode primaryKey; //Field offset: 0x18
	public KeyCode secondaryKey; //Field offset: 0x1C
	public KeyCode deleteKey; //Field offset: 0x20
	public KeyCode auxKey0; //Field offset: 0x24
	private BE2_EventsManager _mainEventsManager; //Field offset: 0x28
	private BE2_DragDropManager _dragDropManager; //Field offset: 0x30
	private float _holdCounter; //Field offset: 0x38
	private Vector2 _lastPosition; //Field offset: 0x3C

	private BE2_Inspector _inspector
	{
		private get { } //Length: 4
	}

	public override Vector3 CanvasPointerPosition
	{
		 get { } //Length: 4
	}

	public static I_BE2_InputManager Instance
	{
		 get { } //Length: 316
		 set { } //Length: 84
	}

	public override Vector3 ScreenPointerPosition
	{
		 get { } //Length: 8
	}

	public BE2_InputManager() { }

	private BE2_Inspector get__inspector() { }

	public override Vector3 get_CanvasPointerPosition() { }

	public static I_BE2_InputManager get_Instance() { }

	public override Vector3 get_ScreenPointerPosition() { }

	private Vector3 GetCanvasPointerPosition() { }

	private Vector3 GetMouseInCanvas(Vector3 position) { }

	private void OnEnable() { }

	public override void OnUpdate() { }

	public static void set_Instance(I_BE2_InputManager value) { }

}

