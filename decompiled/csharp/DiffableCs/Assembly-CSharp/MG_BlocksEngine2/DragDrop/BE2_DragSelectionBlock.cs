namespace MG_BlocksEngine2.DragDrop;

public class BE2_DragSelectionBlock : MonoBehaviour, I_BE2_Drag
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<I_BE2_ProgrammingEnv> <>9__14_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <OnPointerDown>b__14_0(I_BE2_ProgrammingEnv x) { }

	}

	private RectTransform _rectTransform; //Field offset: 0x18
	private BE2_UI_SelectionBlock _uiSelectionBlock; //Field offset: 0x20
	private ScrollRect _scrollRect; //Field offset: 0x28
	private Transform _transform; //Field offset: 0x30
	private Vector3 _envScale; //Field offset: 0x38

	private BE2_DragDropManager _dragDropManager
	{
		private get { } //Length: 4
	}

	public override I_BE2_Block Block
	{
		 get { } //Length: 8
	}

	public override Vector2 RayPoint
	{
		 get { } //Length: 28
	}

	public override Transform Transform
	{
		 get { } //Length: 136
	}

	public BE2_DragSelectionBlock() { }

	private void Awake() { }

	private BE2_DragDropManager get__dragDropManager() { }

	public override I_BE2_Block get_Block() { }

	public override Vector2 get_RayPoint() { }

	public override Transform get_Transform() { }

	public override void OnDrag() { }

	public override void OnPointerDown() { }

	public override void OnPointerUp() { }

	public override void OnRightPointerDownOrHold() { }

}

