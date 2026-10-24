//Type is in global namespace

public class VariableJoystick : Joystick
{
	[SerializeField]
	private float moveThreshold; //Field offset: 0x58
	[SerializeField]
	private JoystickType joystickType; //Field offset: 0x5C
	private Vector2 fixedPosition; //Field offset: 0x60

	public float MoveThreshold
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public VariableJoystick() { }

	public float get_MoveThreshold() { }

	protected virtual void HandleInput(float magnitude, Vector2 normalised, Vector2 radius, Camera cam) { }

	public virtual void OnPointerDown(PointerEventData eventData) { }

	public virtual void OnPointerUp(PointerEventData eventData) { }

	public void set_MoveThreshold(float value) { }

	public void SetMode(JoystickType joystickType) { }

	protected virtual void Start() { }

}

