//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TypewriterEffect : MonoBehaviour
{
	private struct FadeEntry
	{
		public int index; //Field offset: 0x0
		public string text; //Field offset: 0x8
		public float alpha; //Field offset: 0x10

	}

	public static TypewriterEffect current; //Field offset: 0x0
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int charsPerSecond; //Field offset: 0x18
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float fadeInTime; //Field offset: 0x1C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float delayOnPeriod; //Field offset: 0x20
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float delayOnNewLine; //Field offset: 0x24
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public UIScrollView scrollView; //Field offset: 0x28
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool keepFullDimensions; //Field offset: 0x30
	public List<EventDelegate> onFinished; //Field offset: 0x38
	private UILabel mLabel; //Field offset: 0x40
	private string mFullText; //Field offset: 0x48
	private string mMyText; //Field offset: 0x50
	private int mCurrentOffset; //Field offset: 0x58
	private float mNextChar; //Field offset: 0x5C
	private bool mReset; //Field offset: 0x60
	private bool mActive; //Field offset: 0x61
	private BetterList<FadeEntry> mFade; //Field offset: 0x68

	public bool isActive
	{
		 get { } //Length: 8
	}

	public TypewriterEffect() { }

	public void Finish() { }

	public bool get_isActive() { }

	private void OnApplicationQuit() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void ResetToBeginning() { }

	private void Update() { }

}

