namespace MG_BlocksEngine2.DragDrop;

public class BE2_DragBlock : MonoBehaviour, I_BE2_Drag
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private Transform _transform; //Field offset: 0x20
	[CompilerGenerated]
	private I_BE2_Block <Block>k__BackingField; //Field offset: 0x28
	private bool _isDetectingSpot; //Field offset: 0x30

	private BE2_DragDropManager _dragDropManager
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

	public BE2_DragBlock() { }

	private void Awake() { }

	private void DetectSpotOnEndOfFrame() { }

	private void DropTo(Transform spot, int siblinIndex) { }

	private void DropTo(I_BE2_Spot spot, int siblinIndex) { }

	public void DropTo(I_BE2_Block parentBlock, int sectionIndex, int siblinIndex) { }

	private BE2_DragDropManager get__dragDropManager() { }

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

