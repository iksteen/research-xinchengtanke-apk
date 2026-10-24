//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIWrapContent : MonoBehaviour
{
	internal sealed class OnInitializeItem : MulticastDelegate
	{

		public OnInitializeItem(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, int wrapIndex, int realIndex, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, int wrapIndex, int realIndex) { }

	}

	public int itemSize; //Field offset: 0x18
	public bool cullContent; //Field offset: 0x1C
	public int minIndex; //Field offset: 0x20
	public int maxIndex; //Field offset: 0x24
	public bool hideInactive; //Field offset: 0x28
	public OnInitializeItem onInitializeItem; //Field offset: 0x30
	protected Transform mTrans; //Field offset: 0x38
	protected UIPanel mPanel; //Field offset: 0x40
	protected UIScrollView mScroll; //Field offset: 0x48
	protected bool mHorizontal; //Field offset: 0x50
	protected bool mFirstTime; //Field offset: 0x51
	protected List<Transform> mChildren; //Field offset: 0x58

	public UIWrapContent() { }

	protected bool CacheScrollView() { }

	protected override void OnMove(UIPanel panel) { }

	private void OnValidate() { }

	protected override void ResetChildPositions() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void SortAlphabetically() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void SortBasedOnScrollMovement() { }

	protected override void Start() { }

	protected override void UpdateItem(Transform item, int index) { }

	public override void WrapContent() { }

}

