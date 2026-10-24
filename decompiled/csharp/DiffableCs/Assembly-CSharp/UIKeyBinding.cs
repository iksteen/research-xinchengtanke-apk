//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIKeyBinding : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Action
	{
		PressAndClick = 0,
		Select = 1,
		All = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum Modifier
	{
		Any = 0,
		Shift = 1,
		Ctrl = 2,
		Alt = 3,
		None = 4,
	}

	public static List<UIKeyBinding> list; //Field offset: 0x0
	public KeyCode keyCode; //Field offset: 0x18
	public Modifier modifier; //Field offset: 0x1C
	public Action action; //Field offset: 0x20
	private bool mIgnoreUp; //Field offset: 0x24
	private bool mIsInput; //Field offset: 0x25
	private bool mPress; //Field offset: 0x26

	public string captionText
	{
		 get { } //Length: 268
	}

	private static UIKeyBinding() { }

	public UIKeyBinding() { }

	public static UIKeyBinding Find(string name) { }

	public string get_captionText() { }

	public static Modifier GetActiveModifier() { }

	public static bool GetKeyCode(string text, out KeyCode key, out Modifier modifier) { }

	public static string GetString(KeyCode keyCode, Modifier modifier) { }

	public static bool IsBound(KeyCode key) { }

	protected override bool IsModifierActive() { }

	public static bool IsModifierActive(Modifier modifier) { }

	protected override void OnBindingClick() { }

	protected override void OnBindingPress(bool pressed) { }

	protected override void OnDisable() { }

	protected override void OnEnable() { }

	protected override void OnSubmit() { }

	protected override void Start() { }

	public virtual string ToString() { }

	protected override void Update() { }

}

