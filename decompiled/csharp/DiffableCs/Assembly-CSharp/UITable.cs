//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UITable : UIWidgetContainer
{
	[DoNotObfuscateNGUI]
	internal enum Direction
	{
		Down = 0,
		Up = 1,
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

	public int columns; //Field offset: 0x18
	public Direction direction; //Field offset: 0x1C
	public Sorting sorting; //Field offset: 0x20
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool inverted; //Field offset: 0x24
	public Pivot pivot; //Field offset: 0x28
	public Pivot cellAlignment; //Field offset: 0x2C
	public bool hideInactive; //Field offset: 0x30
	public bool keepWithinPanel; //Field offset: 0x31
	public Vector2 padding; //Field offset: 0x34
	public OnReposition onReposition; //Field offset: 0x40
	public Comparison<Transform> onCustomSort; //Field offset: 0x48
	protected UIPanel mPanel; //Field offset: 0x50
	protected bool mInitDone; //Field offset: 0x58
	protected bool mReposition; //Field offset: 0x59

	public bool repositionNow
	{
		 set { } //Length: 28
	}

	public UITable() { }

	public List<Transform> GetChildList() { }

	protected override void Init() { }

	protected override void LateUpdate() { }

	protected override void OnEnable() { }

	private void OnValidate() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Reposition() { }

	protected void RepositionVariableSize(List<Transform> children) { }

	public void set_repositionNow(bool value) { }

	protected override void Sort(List<Transform> list) { }

	protected override void Start() { }

}

