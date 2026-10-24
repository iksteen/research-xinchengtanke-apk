namespace MG_BlocksEngine2.Block;

public class BE2_SpotBlockInput : MonoBehaviour, I_BE2_Spot
{
	private BE2_DragDropManager _dragDropManager; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x20
	private Transform _transform; //Field offset: 0x28
	public Outline outline; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_Block <Block>k__BackingField; //Field offset: 0x38

	public override I_BE2_Block Block
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Vector2 DropPosition
	{
		 get { } //Length: 28
	}

	public override Transform Transform
	{
		 get { } //Length: 136
	}

	public BE2_SpotBlockInput() { }

	private void Awake() { }

	[CompilerGenerated]
	public override I_BE2_Block get_Block() { }

	public override Vector2 get_DropPosition() { }

	public override Transform get_Transform() { }

	private void OnDisable() { }

	private void OnEnable() { }

	[CompilerGenerated]
	public void set_Block(I_BE2_Block value) { }

}

