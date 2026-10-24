//Type is in global namespace

public class JoystickPlayerExample : MonoBehaviour
{
	public float speed; //Field offset: 0x18
	public VariableJoystick variableJoystick; //Field offset: 0x20
	public Rigidbody rb; //Field offset: 0x28

	public JoystickPlayerExample() { }

	public void FixedUpdate() { }

}

