namespace MG_BlocksEngine2.DragDrop;

public class BE2_DragDefineFunctionBlock : MonoBehaviour, I_BE2_Drag
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private Transform _transform; //Field offset: 0x20
	[CompilerGenerated]
	private I_BE2_Block <Block>k__BackingField; //Field offset: 0x28

	private BE2_DragDropManager _dragDropManager
	{
		private get { } //Length: 4
	}

	private BE2_ExecutionManager _executionManager
	{
		private get { } //Length: 4
	}

	public override I_BE2_Block Block
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Vector2 RayPoint
	{
		 get { } //Length: 28
	}

	public override Transform Transform
	{
		 get { } //Length: 136
	}

	public BE2_DragDefineFunctionBlock() { }

	private void Awake() { }

	private BE2_DragDropManager get__dragDropManager() { }

	private BE2_ExecutionManager get__executionManager() { }

	[CompilerGenerated]
	public override I_BE2_Block get_Block() { }

	public override Vector2 get_RayPoint() { }

	public override Transform get_Transform() { }

	public override void OnDrag() { }

	public override void OnPointerDown() { }

	public override void OnPointerUp() { }

	public override void OnRightPointerDownOrHold() { }

	[CompilerGenerated]
	public void set_Block(I_BE2_Block value) { }

}

