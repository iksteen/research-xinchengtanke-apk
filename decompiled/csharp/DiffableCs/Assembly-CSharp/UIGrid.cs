//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIGrid : UIWidgetContainer
{
	[DoNotObfuscateNGUI]
	internal enum Arrangement
	{
		Horizontal = 0,
		Vertical = 1,
		CellSnap = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum Expansion
	{
		Legacy = 0,
		BasedOnPivot = 1,
	}

	internal sealed class OnReposition : MulticastDelegate
	{

		public OnReposition(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[DoNotObfuscateNGUI]
	internal enum Sorting
	{
		None = 0,
		Alphabetic = 1,
		Horizontal = 2,
		Vertical = 3,
		Custom = 4,
	}

	public Arrangement arrangement; //Field offset: 0x18
	public Sorting sorting; //Field offset: 0x1C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool inverted; //Field offset: 0x20
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Pivot pivot; //Field offset: 0x24
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Expansion expansionStyle; //Field offset: 0x28
	public int maxPerLine; //Field offset: 0x2C
	public float cellWidth; //Field offset: 0x30
	public float cellHeight; //Field offset: 0x34
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool animateSmoothly; //Field offset: 0x38
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool animateFadeIn; //Field offset: 0x39
	public bool hideInactive; //Field offset: 0x3A
	public bool keepWithinPanel; //Field offset: 0x3B
	public OnReposition onReposition; //Field offset: 0x40
	public Comparison<Transform> onCustomSort; //Field offset: 0x48
	[HideInInspector]
	[SerializeField]
	private bool sorted; //Field offset: 0x50
	protected UIPanel mPanel; //Field offset: 0x58
	protected bool mInitDone; //Field offset: 0x60
	private List<SpringPosition> mSprings; //Field offset: 0x68

	public bool repositionNow
	{
		 set { } //Length: 60
	}

	public UIGrid() { }

	[Obsolete]
	public void AddChild(Transform trans) { }

	[Obsolete]
	public void AddChild(Transform trans, bool sort) { }

	public void ConstrainWithinPanel() { }

	public Transform GetChild(int index) { }

	public List<Transform> GetChildList() { }

	public int GetIndex(Transform trans) { }

	protected override void Init() { }

	private void OnValidate() { }

	public bool RemoveChild(Transform t) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Reposition() { }

	protected override void ResetPosition(List<Transform> list) { }

	public void set_repositionNow(bool value) { }

	protected override void Sort(List<Transform> list) { }

	public static int SortByName(Transform a, Transform b) { }

	public static int SortByNameInv(Transform a, Transform b) { }

	public static int SortHorizontal(Transform a, Transform b) { }

	public static int SortHorizontalInv(Transform a, Transform b) { }

	public static int SortVertical(Transform a, Transform b) { }

	public static int SortVerticalInv(Transform a, Transform b) { }

	protected override void Start() { }

	protected override void Update() { }

}

