namespace MG_BlocksEngine2.DragDrop;

public class BE2_Pointer : MonoBehaviour
{
	private static BE2_Pointer _instance; //Field offset: 0x0
	private Transform _transform; //Field offset: 0x18
	private Vector3 _mousePos; //Field offset: 0x20

	public static BE2_Pointer Instance
	{
		 get { } //Length: 232
		 set { } //Length: 84
	}

	public BE2_Pointer() { }

	private void Awake() { }

	public static BE2_Pointer get_Instance() { }

	public void OnUpdate() { }

	public static void set_Instance(BE2_Pointer value) { }

	public void UpdatePointerPosition() { }

}

