//Type is in global namespace

public class BE2_VirtualJoystick : MonoBehaviour
{
	public static BE2_VirtualJoystick instance; //Field offset: 0x0
	public BE2_VirtualJoystickButton[] keys; //Field offset: 0x18

	public BE2_VirtualJoystick() { }

	private void Awake() { }

}

