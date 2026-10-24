//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UISlider : UIProgressBar
{
	private enum Direction
	{
		Horizontal = 0,
		Vertical = 1,
		Upgraded = 2,
	}

	[HideInInspector]
	[SerializeField]
	private Transform foreground; //Field offset: 0x70
	[HideInInspector]
	[SerializeField]
	private float rawValue; //Field offset: 0x78
	[HideInInspector]
	[SerializeField]
	private Direction direction; //Field offset: 0x7C
	[HideInInspector]
	[SerializeField]
	protected bool mInverted; //Field offset: 0x80

	[Obsolete]
	public bool inverted
	{
		 get { } //Length: 20
		 set { } //Length: 4
	}

	public bool isColliderEnabled
	{
		 get { } //Length: 308
	}

	[Obsolete]
	public float sliderValue
	{
		 get { } //Length: 4
		 set { } //Length: 8
	}

	public UISlider() { }

	public bool get_inverted() { }

	public bool get_isColliderEnabled() { }

	public float get_sliderValue() { }

	protected void OnDragBackground(GameObject go, Vector2 delta) { }

	protected void OnDragForeground(GameObject go, Vector2 delta) { }

	public virtual void OnPan(Vector2 delta) { }

	protected void OnPressBackground(GameObject go, bool isPressed) { }

	protected void OnPressForeground(GameObject go, bool isPressed) { }

	protected virtual void OnStart() { }

	public void set_inverted(bool value) { }

	public void set_sliderValue(float value) { }

	protected virtual void Upgrade() { }

}

