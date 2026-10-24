//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIPopupList : UIWidgetContainer
{
	[CompilerGenerated]
	private sealed class <CloseIfUnselected>d__112 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public UIPopupList <>4__this; //Field offset: 0x20

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <CloseIfUnselected>d__112(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private sealed class <UpdateTweenPosition>d__95 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public UIPopupList <>4__this; //Field offset: 0x20
		private TweenPosition <tp>5__2; //Field offset: 0x28

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <UpdateTweenPosition>d__95(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal sealed class LegacyEvent : MulticastDelegate
	{

		public LegacyEvent(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string val, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(string val) { }

	}

	[DoNotObfuscateNGUI]
	internal enum OpenOn
	{
		ClickOrTap = 0,
		RightClick = 1,
		DoubleClick = 2,
		Manual = 3,
	}

	[DoNotObfuscateNGUI]
	internal enum Position
	{
		Auto = 0,
		Above = 1,
		Below = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum Selection
	{
		OnPress = 0,
		OnClick = 1,
	}

	public static UIPopupList current; //Field offset: 0x0
	private const float animSpeed = 0.15; //Field offset: 0x0
	protected static GameObject mChild; //Field offset: 0x8
	protected static float mFadeOutComplete; //Field offset: 0x10
	public object atlas; //Field offset: 0x18
	public object bitmapFont; //Field offset: 0x20
	public Font trueTypeFont; //Field offset: 0x28
	public int fontSize; //Field offset: 0x30
	public FontStyle fontStyle; //Field offset: 0x34
	public string backgroundSprite; //Field offset: 0x38
	public string highlightSprite; //Field offset: 0x40
	public Sprite background2DSprite; //Field offset: 0x48
	public Sprite highlight2DSprite; //Field offset: 0x50
	public Position position; //Field offset: 0x58
	public Selection selection; //Field offset: 0x5C
	public Alignment alignment; //Field offset: 0x60
	public List<String> items; //Field offset: 0x68
	public List<Object> itemData; //Field offset: 0x70
	public List<Action> itemCallbacks; //Field offset: 0x78
	public Vector2 padding; //Field offset: 0x80
	public Color textColor; //Field offset: 0x88
	public Color backgroundColor; //Field offset: 0x98
	public Color highlightColor; //Field offset: 0xA8
	public bool isAnimated; //Field offset: 0xB8
	public bool isLocalized; //Field offset: 0xB9
	public Modifier textModifier; //Field offset: 0xBC
	public bool separatePanel; //Field offset: 0xC0
	public int overlap; //Field offset: 0xC4
	public OpenOn openOn; //Field offset: 0xC8
	public List<EventDelegate> onChange; //Field offset: 0xD0
	[HideInInspector]
	[SerializeField]
	protected string mSelectedItem; //Field offset: 0xD8
	[HideInInspector]
	[SerializeField]
	protected UIPanel mPanel; //Field offset: 0xE0
	[HideInInspector]
	[SerializeField]
	protected UIBasicSprite mBackground; //Field offset: 0xE8
	[HideInInspector]
	[SerializeField]
	protected UIBasicSprite mHighlight; //Field offset: 0xF0
	[HideInInspector]
	[SerializeField]
	protected UILabel mHighlightedLabel; //Field offset: 0xF8
	[HideInInspector]
	[SerializeField]
	protected List<UILabel> mLabelList; //Field offset: 0x100
	[HideInInspector]
	[SerializeField]
	protected float mBgBorder; //Field offset: 0x108
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool keepValue; //Field offset: 0x10C
	protected GameObject mSelection; //Field offset: 0x110
	protected int mOpenFrame; //Field offset: 0x118
	[HideInInspector]
	[SerializeField]
	private GameObject eventReceiver; //Field offset: 0x120
	[HideInInspector]
	[SerializeField]
	private string functionName; //Field offset: 0x128
	[HideInInspector]
	[SerializeField]
	private float textScale; //Field offset: 0x130
	[HideInInspector]
	[SerializeField]
	private UILabel textLabel; //Field offset: 0x138
	public Vector3 startingPosition; //Field offset: 0x140
	private LegacyEvent mLegacyEvent; //Field offset: 0x150
	protected bool mExecuting; //Field offset: 0x158
	protected bool mStarted; //Field offset: 0x159
	protected bool mTweening; //Field offset: 0x15A
	public GameObject source; //Field offset: 0x160

	protected float activeFontScale
	{
		 get { } //Length: 284
	}

	protected int activeFontSize
	{
		 get { } //Length: 280
	}

	public object ambigiousFont
	{
		 get { } //Length: 260
		 set { } //Length: 292
	}

	public Action callback
	{
		 get { } //Length: 180
	}

	public override object data
	{
		 get { } //Length: 180
	}

	protected float fitScale
	{
		 get { } //Length: 440
	}

	public INGUIFont font
	{
		 get { } //Length: 236
		 set { } //Length: 160
	}

	public bool isColliderEnabled
	{
		 get { } //Length: 308
		 set { } //Length: 316
	}

	public static bool isOpen
	{
		 get { } //Length: 336
	}

	protected bool isValid
	{
		 get { } //Length: 120
	}

	[Obsolete]
	public LegacyEvent onSelectionChange
	{
		 get { } //Length: 8
		 set { } //Length: 16
	}

	public override string value
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	private static UIPopupList() { }

	public UIPopupList() { }

	public override void AddItem(string text, Action del) { }

	public override void AddItem(string text, object data, Action del = null) { }

	public override void AddItem(string text) { }

	protected void Animate(UIWidget widget, bool placeAbove, float bottom) { }

	protected override void AnimateColor(UIWidget widget) { }

	protected override void AnimatePosition(UIWidget widget, bool placeAbove, float bottom) { }

	protected override void AnimateScale(UIWidget widget, bool placeAbove, float bottom) { }

	public override void Clear() { }

	public static void Close() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator CloseIfUnselected() { }

	public override void CloseSelf() { }

	protected float get_activeFontScale() { }

	protected int get_activeFontSize() { }

	public object get_ambigiousFont() { }

	public Action get_callback() { }

	public override object get_data() { }

	protected float get_fitScale() { }

	public INGUIFont get_font() { }

	public bool get_isColliderEnabled() { }

	public static bool get_isOpen() { }

	protected bool get_isValid() { }

	public LegacyEvent get_onSelectionChange() { }

	public override string get_value() { }

	protected override Vector3 GetHighlightPosition() { }

	protected override void Highlight(UILabel lbl, bool instant) { }

	protected override void OnClick() { }

	protected override void OnDisable() { }

	protected override void OnDoubleClick() { }

	protected override void OnEnable() { }

	protected override void OnItemClick(GameObject go) { }

	protected override void OnItemHover(GameObject go, bool isOver) { }

	protected override void OnItemPress(GameObject go, bool isPressed) { }

	protected override void OnKey(KeyCode key) { }

	protected override void OnLocalize() { }

	protected override void OnNavigate(KeyCode key) { }

	protected override void OnSelect(bool isSelected) { }

	public override void RemoveItem(string text) { }

	public override void RemoveItemByData(object data) { }

	private void Select(UILabel lbl, bool instant) { }

	public void Set(string value, bool notify = true) { }

	public void set_ambigiousFont(object value) { }

	public void set_font(INGUIFont value) { }

	public void set_isColliderEnabled(bool value) { }

	public void set_onSelectionChange(LegacyEvent value) { }

	public override void set_value(string value) { }

	public override void Show() { }

	public override void Start() { }

	protected void TriggerCallbacks() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected override IEnumerator UpdateTweenPosition() { }

}

