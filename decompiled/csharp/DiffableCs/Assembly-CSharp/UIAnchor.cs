//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIAnchor : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Side
	{
		BottomLeft = 0,
		Left = 1,
		TopLeft = 2,
		Top = 3,
		TopRight = 4,
		Right = 5,
		BottomRight = 6,
		Bottom = 7,
		Center = 8,
	}

	public Camera uiCamera; //Field offset: 0x18
	public GameObject container; //Field offset: 0x20
	public Side side; //Field offset: 0x28
	public bool runOnlyOnce; //Field offset: 0x2C
	public Vector2 relativeOffset; //Field offset: 0x30
	public Vector2 pixelOffset; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	private UIWidget widgetContainer; //Field offset: 0x40
	private Transform mTrans; //Field offset: 0x48
	private Animation mAnim; //Field offset: 0x50
	private Rect mRect; //Field offset: 0x58
	private UIRoot mRoot; //Field offset: 0x68
	private bool mStarted; //Field offset: 0x70

	public UIAnchor() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void ScreenSizeChanged() { }

	private void Start() { }

	private void Update() { }

}

