//Type is in global namespace

public class DynamicJoystick : Joystick
{
	[SerializeField]
	private float moveThreshold; //Field offset: 0x58

	public float MoveThreshold
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public DynamicJoystick() { }

	public float get_MoveThreshold() { }

	protected virtual void HandleInput(float magnitude, Vector2 normalised, Vector2 radius, Camera cam) { }

	public virtual void OnPointerDown(PointerEventData eventData) { }

	public virtual void OnPointerUp(PointerEventData eventData) { }

	public void set_MoveThreshold(float value) { }

	protected virtual void Start() { }

}

