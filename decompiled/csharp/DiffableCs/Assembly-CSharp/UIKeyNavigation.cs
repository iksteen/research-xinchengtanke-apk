//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIKeyNavigation : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Constraint
	{
		None = 0,
		Vertical = 1,
		Horizontal = 2,
		Explicit = 3,
	}

	public static BetterList<UIKeyNavigation> list; //Field offset: 0x0
	public static int mLastFrame; //Field offset: 0x8
	public Constraint constraint; //Field offset: 0x18
	public GameObject onUp; //Field offset: 0x20
	public GameObject onDown; //Field offset: 0x28
	public GameObject onLeft; //Field offset: 0x30
	public GameObject onRight; //Field offset: 0x38
	public GameObject onClick; //Field offset: 0x40
	public GameObject onTab; //Field offset: 0x48
	public bool startsSelected; //Field offset: 0x50
	private bool mStarted; //Field offset: 0x51

	public static UIKeyNavigation current
	{
		 get { } //Length: 216
	}

	public bool isColliderEnabled
	{
		 get { } //Length: 352
	}

	private static UIKeyNavigation() { }

	public UIKeyNavigation() { }

	public GameObject Get(Vector3 myDir, float x = 1, float y = 1) { }

	public static UIKeyNavigation get_current() { }

	public bool get_isColliderEnabled() { }

	protected static Vector3 GetCenter(GameObject go) { }

	public GameObject GetDown() { }

	public GameObject GetLeft() { }

	public GameObject GetRight() { }

	public GameObject GetUp() { }

	private static bool IsActive(GameObject go) { }

	protected override void OnClick() { }

	protected override void OnDisable() { }

	protected override void OnEnable() { }

	public override void OnKey(KeyCode key) { }

	public override void OnNavigate(KeyCode key) { }

	private void Start() { }

}

