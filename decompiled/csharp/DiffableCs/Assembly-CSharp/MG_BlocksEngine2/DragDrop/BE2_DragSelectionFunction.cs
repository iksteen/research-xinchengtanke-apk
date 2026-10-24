namespace MG_BlocksEngine2.DragDrop;

public class BE2_DragSelectionFunction : MonoBehaviour, I_BE2_Drag
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<I_BE2_ProgrammingEnv> <>9__20_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <OnPointerDown>b__20_0(I_BE2_ProgrammingEnv x) { }

	}

	private RectTransform _rectTransform; //Field offset: 0x18
	private BE2_UI_SelectionBlock _uiSelectionBlock; //Field offset: 0x20
	private ScrollRect _scrollRect; //Field offset: 0x28
	private I_BE2_BlockLayout _blockLayout; //Field offset: 0x30
	private Transform _transform; //Field offset: 0x38
	[HideInInspector]
	public BE2_Ins_FunctionBlock functionBlockInstruction; //Field offset: 0x40
	public BE2_Ins_DefineFunction defineFunctionInstruction; //Field offset: 0x48
	private Vector3 _envScale; //Field offset: 0x50

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

	public BE2_DragSelectionFunction() { }

	private void Awake() { }

	private BE2_DragDropManager get__dragDropManager() { }

	public override I_BE2_Block get_Block() { }

	public override Vector2 get_RayPoint() { }

	public override Transform get_Transform() { }

	private void OnDisable() { }

	public override void OnDrag() { }

	private void OnEnable() { }

	public override void OnPointerDown() { }

	public override void OnPointerUp() { }

	public override void OnRightPointerDownOrHold() { }

	private void Remove(I_BE2_Block block) { }

}

