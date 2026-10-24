//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIToggle : UIWidgetContainer
{
	internal sealed class Validate : MulticastDelegate
	{

		public Validate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(bool choice, AsyncCallback callback, object object) { }

		public override bool EndInvoke(IAsyncResult result) { }

		public override bool Invoke(bool choice) { }

	}

	public static BetterList<UIToggle> list; //Field offset: 0x0
	public static UIToggle current; //Field offset: 0x8
	public int group; //Field offset: 0x18
	public UIWidget activeSprite; //Field offset: 0x20
	public bool invertSpriteState; //Field offset: 0x28
	public Animation activeAnimation; //Field offset: 0x30
	public Animator animator; //Field offset: 0x38
	public UITweener tween; //Field offset: 0x40
	public bool startsActive; //Field offset: 0x48
	public bool instantTween; //Field offset: 0x49
	public bool optionCanBeNone; //Field offset: 0x4A
	public List<EventDelegate> onChange; //Field offset: 0x50
	public Validate validator; //Field offset: 0x58
	[HideInInspector]
	[SerializeField]
	private UISprite checkSprite; //Field offset: 0x60
	[HideInInspector]
	[SerializeField]
	private Animation checkAnimation; //Field offset: 0x68
	[HideInInspector]
	[SerializeField]
	private GameObject eventReceiver; //Field offset: 0x70
	[HideInInspector]
	[SerializeField]
	private string functionName; //Field offset: 0x78
	[HideInInspector]
	[SerializeField]
	private bool startsChecked; //Field offset: 0x80
	private int mIgnoreFrame; //Field offset: 0x84
	private bool mIsActive; //Field offset: 0x88
	private bool mStarted; //Field offset: 0x89

	[Obsolete]
	public bool isChecked
	{
		 get { } //Length: 28
		 set { } //Length: 8
	}

	public bool isColliderEnabled
	{
		 get { } //Length: 308
	}

	public bool value
	{
		 get { } //Length: 28
		 set { } //Length: 56
	}

	private static UIToggle() { }

	public UIToggle() { }

	public bool get_isChecked() { }

	public bool get_isColliderEnabled() { }

	public bool get_value() { }

	public static UIToggle GetActiveToggle(int group) { }

	public void OnClick() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void Set(bool state, bool notify = true) { }

	public void set_isChecked(bool value) { }

	public void set_value(bool value) { }

	public void Start() { }

}

