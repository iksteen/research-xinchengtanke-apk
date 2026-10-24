//Type is in global namespace

public class JoystickSetterExample : MonoBehaviour
{
	public VariableJoystick variableJoystick; //Field offset: 0x18
	public Text valueText; //Field offset: 0x20
	public Image background; //Field offset: 0x28
	public Sprite[] axisSprites; //Field offset: 0x30

	public JoystickSetterExample() { }

	public void AxisChanged(int index) { }

	public void ModeChanged(int index) { }

	public void SnapX(bool value) { }

	public void SnapY(bool value) { }

	private void Start() { }

	private void Update() { }

}

