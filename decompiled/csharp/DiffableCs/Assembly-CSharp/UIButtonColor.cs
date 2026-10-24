//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIButtonColor : UIWidgetContainer
{
	[DoNotObfuscateNGUI]
	internal enum State
	{
		Normal = 0,
		Hover = 1,
		Pressed = 2,
		Disabled = 3,
	}

	public GameObject tweenTarget; //Field offset: 0x18
	public Color hover; //Field offset: 0x20
	public Color pressed; //Field offset: 0x30
	public Color disabledColor; //Field offset: 0x40
	public float duration; //Field offset: 0x50
	protected Color mStartingColor; //Field offset: 0x54
	protected Color mDefaultColor; //Field offset: 0x64
	protected bool mInitDone; //Field offset: 0x74
	protected UIWidget mWidget; //Field offset: 0x78
	protected State mState; //Field offset: 0x80

	public Color defaultColor
	{
		 get { } //Length: 60
		 set { } //Length: 124
	}

	public override bool isEnabled
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public State state
	{
		 get { } //Length: 8
		 set { } //Length: 20
	}

	public UIButtonColor() { }

	public void CacheDefaultColor() { }

	public Color get_defaultColor() { }

	public override bool get_isEnabled() { }

	public State get_state() { }

	protected override void OnDisable() { }

	protected override void OnDragOut() { }

	protected override void OnDragOver() { }

	protected override void OnEnable() { }

	protected override void OnHover(bool isOver) { }

	protected override void OnInit() { }

	protected override void OnPress(bool isPressed) { }

	public void ResetDefaultColor() { }

	public void set_defaultColor(Color value) { }

	public override void set_isEnabled(bool value) { }

	public void set_state(State value) { }

	public override void SetState(State state, bool instant) { }

	private void Start() { }

	public void UpdateColor(bool instant) { }

}

