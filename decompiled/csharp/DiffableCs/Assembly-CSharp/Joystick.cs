//Type is in global namespace

public class Joystick : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler, IPointerUpHandler
{
	[SerializeField]
	private float handleRange; //Field offset: 0x18
	[SerializeField]
	private float deadZone; //Field offset: 0x1C
	[SerializeField]
	private AxisOptions axisOptions; //Field offset: 0x20
	[SerializeField]
	private bool snapX; //Field offset: 0x24
	[SerializeField]
	private bool snapY; //Field offset: 0x25
	[SerializeField]
	protected RectTransform background; //Field offset: 0x28
	[SerializeField]
	private RectTransform handle; //Field offset: 0x30
	private RectTransform baseRect; //Field offset: 0x38
	private Canvas canvas; //Field offset: 0x40
	private Camera cam; //Field offset: 0x48
	private Vector2 input; //Field offset: 0x50

	public AxisOptions AxisOptions
	{
		 get { } //Length: 4
		 set { } //Length: 8
	}

	public float DeadZone
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public Vector2 Direction
	{
		 get { } //Length: 104
	}

	public float HandleRange
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public float Horizontal
	{
		 get { } //Length: 24
	}

	public bool SnapX
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public bool SnapY
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public float Vertical
	{
		 get { } //Length: 24
	}

	public Joystick() { }

	private void FormatInput() { }

	public AxisOptions get_AxisOptions() { }

	public float get_DeadZone() { }

	public Vector2 get_Direction() { }

	public float get_HandleRange() { }

	public float get_Horizontal() { }

	public bool get_SnapX() { }

	public bool get_SnapY() { }

	public float get_Vertical() { }

	protected override void HandleInput(float magnitude, Vector2 normalised, Vector2 radius, Camera cam) { }

	public override void OnDrag(PointerEventData eventData) { }

	public override void OnPointerDown(PointerEventData eventData) { }

	public override void OnPointerUp(PointerEventData eventData) { }

	protected Vector2 ScreenPointToAnchoredPosition(Vector2 screenPosition) { }

	public void set_AxisOptions(AxisOptions value) { }

	public void set_DeadZone(float value) { }

	public void set_HandleRange(float value) { }

	public void set_SnapX(bool value) { }

	public void set_SnapY(bool value) { }

	private float SnapFloat(float value, AxisOptions snapAxis) { }

	protected override void Start() { }

}

