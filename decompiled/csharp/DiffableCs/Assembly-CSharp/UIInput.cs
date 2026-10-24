//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIInput : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum InputType
	{
		Standard = 0,
		AutoCorrect = 1,
		Password = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum KeyboardType
	{
		Default = 0,
		ASCIICapable = 1,
		NumbersAndPunctuation = 2,
		URL = 3,
		NumberPad = 4,
		PhonePad = 5,
		NamePhonePad = 6,
		EmailAddress = 7,
	}

	[DoNotObfuscateNGUI]
	internal enum OnReturnKey
	{
		Default = 0,
		Submit = 1,
		NewLine = 2,
	}

	internal sealed class OnValidate : MulticastDelegate
	{

		public OnValidate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string text, int charIndex, char addedChar, AsyncCallback callback, object object) { }

		public override char EndInvoke(IAsyncResult result) { }

		public override char Invoke(string text, int charIndex, char addedChar) { }

	}

	[DoNotObfuscateNGUI]
	internal enum Validation
	{
		None = 0,
		Integer = 1,
		Float = 2,
		Alphanumeric = 3,
		Username = 4,
		Name = 5,
		Filename = 6,
	}

	public static UIInput current; //Field offset: 0x0
	public static UIInput selection; //Field offset: 0x8
	protected static int mDrawStart; //Field offset: 0x10
	protected static string mLastIME; //Field offset: 0x18
	protected static TouchScreenKeyboard mKeyboard; //Field offset: 0x20
	private static bool mWaitForKeyboard; //Field offset: 0x28
	private static int mIgnoreKey; //Field offset: 0x2C
	public UILabel label; //Field offset: 0x18
	public InputType inputType; //Field offset: 0x20
	public OnReturnKey onReturnKey; //Field offset: 0x24
	public KeyboardType keyboardType; //Field offset: 0x28
	public bool hideInput; //Field offset: 0x2C
	public bool selectAllTextOnFocus; //Field offset: 0x2D
	public bool submitOnUnselect; //Field offset: 0x2E
	public Validation validation; //Field offset: 0x30
	public int characterLimit; //Field offset: 0x34
	public string savedAs; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	private GameObject selectOnTab; //Field offset: 0x40
	public Color activeTextColor; //Field offset: 0x48
	public Color caretColor; //Field offset: 0x58
	public Color selectionColor; //Field offset: 0x68
	public List<EventDelegate> onSubmit; //Field offset: 0x78
	public List<EventDelegate> onChange; //Field offset: 0x80
	public OnValidate onValidate; //Field offset: 0x88
	[HideInInspector]
	[SerializeField]
	protected string mValue; //Field offset: 0x90
	protected string mDefaultText; //Field offset: 0x98
	protected Color mDefaultColor; //Field offset: 0xA0
	protected float mPosition; //Field offset: 0xB0
	protected bool mDoInit; //Field offset: 0xB4
	protected Alignment mAlignment; //Field offset: 0xB8
	protected bool mLoadSavedValue; //Field offset: 0xBC
	protected int mSelectionStart; //Field offset: 0xC0
	protected int mSelectionEnd; //Field offset: 0xC4
	protected UITexture mHighlight; //Field offset: 0xC8
	protected UITexture mCaret; //Field offset: 0xD0
	protected Texture2D mBlankTex; //Field offset: 0xD8
	protected float mNextBlink; //Field offset: 0xE0
	protected float mLastAlpha; //Field offset: 0xE4
	protected string mCached; //Field offset: 0xE8
	protected int mSelectMe; //Field offset: 0xF0
	protected int mSelectTime; //Field offset: 0xF4
	protected bool mStarted; //Field offset: 0xF8
	private UICamera mCam; //Field offset: 0x100
	private bool mEllipsis; //Field offset: 0x108
	public Action onUpArrow; //Field offset: 0x110
	public Action onDownArrow; //Field offset: 0x118

	public UITexture caret
	{
		 get { } //Length: 8
	}

	public int cursorPosition
	{
		 get { } //Length: 176
		 set { } //Length: 168
	}

	public Color defaultColor
	{
		 get { } //Length: 52
		 set { } //Length: 128
	}

	public string defaultText
	{
		 get { } //Length: 48
		 set { } //Length: 68
	}

	public bool inputShouldBeHidden
	{
		 get { } //Length: 168
	}

	public bool isSelected
	{
		 get { } //Length: 164
		 set { } //Length: 200
	}

	[Obsolete]
	public bool selected
	{
		 get { } //Length: 4
		 set { } //Length: 8
	}

	public int selectionEnd
	{
		 get { } //Length: 176
		 set { } //Length: 168
	}

	public int selectionStart
	{
		 get { } //Length: 184
		 set { } //Length: 168
	}

	[Obsolete]
	public string text
	{
		 get { } //Length: 48
		 set { } //Length: 8
	}

	public string value
	{
		 get { } //Length: 48
		 set { } //Length: 8
	}

	private static UIInput() { }

	public UIInput() { }

	protected override void Cleanup() { }

	protected void DoBackspace() { }

	protected void ExecuteOnChange() { }

	public UITexture get_caret() { }

	public int get_cursorPosition() { }

	public Color get_defaultColor() { }

	public string get_defaultText() { }

	public bool get_inputShouldBeHidden() { }

	public bool get_isSelected() { }

	public bool get_selected() { }

	public int get_selectionEnd() { }

	public int get_selectionStart() { }

	public string get_text() { }

	public string get_value() { }

	protected int GetCharUnderMouse() { }

	protected string GetLeftText() { }

	protected string GetRightText() { }

	protected string GetSelection() { }

	protected void Init() { }

	protected override void Insert(string text) { }

	public void LoadValue() { }

	protected void OnDeselectEvent() { }

	private void OnDisable() { }

	protected override void OnDrag(Vector2 delta) { }

	private void OnKey(KeyCode key) { }

	protected override void OnPress(bool isPressed) { }

	protected override void OnSelect(bool isSelected) { }

	protected void OnSelectEvent() { }

	public void RemoveFocus() { }

	protected void SaveToPlayerPrefs(string val) { }

	public void SaveValue() { }

	public void Set(string value, bool notify = true) { }

	public void set_cursorPosition(int value) { }

	public void set_defaultColor(Color value) { }

	public void set_defaultText(string value) { }

	public void set_isSelected(bool value) { }

	public void set_selected(bool value) { }

	public void set_selectionEnd(int value) { }

	public void set_selectionStart(int value) { }

	public void set_text(string value) { }

	public void set_value(string value) { }

	public void Start() { }

	public void Submit() { }

	protected override void Update() { }

	public void UpdateLabel() { }

	public string Validate(string val) { }

	protected char Validate(string text, int pos, char ch) { }

}

