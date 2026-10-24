//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UITextList : MonoBehaviour
{
	internal class Paragraph
	{
		public string text; //Field offset: 0x10
		public String[] lines; //Field offset: 0x18

		public Paragraph() { }

	}

	[DoNotObfuscateNGUI]
	internal enum Style
	{
		Text = 0,
		Chat = 1,
	}

	private static Dictionary<String, BetterList`1<Paragraph>> mHistory; //Field offset: 0x0
	public UILabel textLabel; //Field offset: 0x18
	public UIProgressBar scrollBar; //Field offset: 0x20
	public Style style; //Field offset: 0x28
	public int paragraphHistory; //Field offset: 0x2C
	protected Char[] mSeparator; //Field offset: 0x30
	protected float mScroll; //Field offset: 0x38
	protected int mTotalLines; //Field offset: 0x3C
	protected int mLastWidth; //Field offset: 0x40
	protected int mLastHeight; //Field offset: 0x44
	private BetterList<Paragraph> mParagraphs; //Field offset: 0x48

	public bool isValid
	{
		 get { } //Length: 208
	}

	protected float lineHeight
	{
		 get { } //Length: 164
	}

	public int paragraphCount
	{
		 get { } //Length: 32
	}

	protected BetterList<Paragraph> paragraphs
	{
		 get { } //Length: 360
	}

	protected int scrollHeight
	{
		 get { } //Length: 120
	}

	public float scrollValue
	{
		 get { } //Length: 8
		 set { } //Length: 228
	}

	private static UITextList() { }

	public UITextList() { }

	protected void Add(string text, bool updateVisible) { }

	public void Add(string text) { }

	public void Clear() { }

	public bool get_isValid() { }

	protected float get_lineHeight() { }

	public int get_paragraphCount() { }

	protected BetterList<Paragraph> get_paragraphs() { }

	protected int get_scrollHeight() { }

	public float get_scrollValue() { }

	public void OnDrag(Vector2 delta) { }

	public void OnScroll(float val) { }

	private void OnScrollBar() { }

	protected void Rebuild() { }

	public void set_scrollValue(float value) { }

	private void Start() { }

	private void Update() { }

	protected void UpdateVisibleText() { }

}

