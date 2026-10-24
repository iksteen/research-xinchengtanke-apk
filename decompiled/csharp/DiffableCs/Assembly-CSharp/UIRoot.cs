//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIRoot : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Constraint
	{
		Fit = 0,
		Fill = 1,
		FitWidth = 2,
		FitHeight = 3,
	}

	[DoNotObfuscateNGUI]
	internal enum Scaling
	{
		Flexible = 0,
		Constrained = 1,
		ConstrainedOnMobiles = 2,
	}

	public static List<UIRoot> list; //Field offset: 0x0
	public Scaling scalingStyle; //Field offset: 0x18
	public int manualWidth; //Field offset: 0x1C
	public int manualHeight; //Field offset: 0x20
	public int minimumHeight; //Field offset: 0x24
	public int maximumHeight; //Field offset: 0x28
	public bool fitWidth; //Field offset: 0x2C
	public bool fitHeight; //Field offset: 0x2D
	public bool adjustByDPI; //Field offset: 0x2E
	public bool shrinkPortraitUI; //Field offset: 0x2F
	private Transform mTrans; //Field offset: 0x30

	public int activeHeight
	{
		 get { } //Length: 436
	}

	public Scaling activeScaling
	{
		 get { } //Length: 16
	}

	public Constraint constraint
	{
		 get { } //Length: 40
	}

	public float pixelSizeAdjustment
	{
		 get { } //Length: 144
	}

	private static UIRoot() { }

	public UIRoot() { }

	protected override void Awake() { }

	public static void Broadcast(string funcName) { }

	public static void Broadcast(string funcName, object param) { }

	public int get_activeHeight() { }

	public Scaling get_activeScaling() { }

	public Constraint get_constraint() { }

	public float get_pixelSizeAdjustment() { }

	public static float GetPixelSizeAdjustment(GameObject go) { }

	public float GetPixelSizeAdjustment(int height) { }

	protected override void OnDisable() { }

	protected override void OnEnable() { }

	protected override void Start() { }

	private void Update() { }

	public void UpdateScale(bool updateAnchors = true) { }

}

