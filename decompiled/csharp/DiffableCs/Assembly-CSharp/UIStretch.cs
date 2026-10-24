//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIStretch : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Style
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		Both = 3,
		BasedOnHeight = 4,
		FillKeepingRatio = 5,
		FitInternalKeepingRatio = 6,
	}

	public Camera uiCamera; //Field offset: 0x18
	public GameObject container; //Field offset: 0x20
	public Style style; //Field offset: 0x28
	public bool runOnlyOnce; //Field offset: 0x2C
	public Vector2 relativeSize; //Field offset: 0x30
	public Vector2 initialSize; //Field offset: 0x38
	public Vector2 borderPadding; //Field offset: 0x40
	[HideInInspector]
	[SerializeField]
	private UIWidget widgetContainer; //Field offset: 0x48
	private Transform mTrans; //Field offset: 0x50
	private UIWidget mWidget; //Field offset: 0x58
	private UISprite mSprite; //Field offset: 0x60
	private UIPanel mPanel; //Field offset: 0x68
	private UIRoot mRoot; //Field offset: 0x70
	private Animation mAnim; //Field offset: 0x78
	private Rect mRect; //Field offset: 0x80
	private bool mStarted; //Field offset: 0x90

	public UIStretch() { }

	private void Awake() { }

	private void OnDestroy() { }

	private void ScreenSizeChanged() { }

	private void Start() { }

	private void Update() { }

}

