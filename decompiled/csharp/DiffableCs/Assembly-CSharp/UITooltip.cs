//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UITooltip : MonoBehaviour
{
	protected static UITooltip mInstance; //Field offset: 0x0
	public Camera uiCamera; //Field offset: 0x18
	public UILabel text; //Field offset: 0x20
	public GameObject tooltipRoot; //Field offset: 0x28
	public UISprite background; //Field offset: 0x30
	public float appearSpeed; //Field offset: 0x38
	public bool scalingTransitions; //Field offset: 0x3C
	protected GameObject mTooltip; //Field offset: 0x40
	protected Transform mTrans; //Field offset: 0x48
	protected float mTarget; //Field offset: 0x50
	protected float mCurrent; //Field offset: 0x54
	protected Vector3 mPos; //Field offset: 0x58
	protected Vector3 mSize; //Field offset: 0x64
	protected List<UIWidget> mWidgets; //Field offset: 0x70

	public static bool isVisible
	{
		 get { } //Length: 184
	}

	public UITooltip() { }

	private void Awake() { }

	public static bool get_isVisible() { }

	public static void Hide() { }

	private void OnDestroy() { }

	protected override void SetAlpha(float val) { }

	protected override void SetText(string tooltipText) { }

	public static void Show(string text) { }

	[Obsolete]
	public static void ShowText(string text) { }

	protected override void Start() { }

	protected override void Update() { }

}

