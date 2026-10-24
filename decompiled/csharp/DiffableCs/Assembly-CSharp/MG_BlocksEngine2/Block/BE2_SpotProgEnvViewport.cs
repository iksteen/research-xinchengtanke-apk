namespace MG_BlocksEngine2.Block;

public class BE2_SpotProgEnvViewport : MonoBehaviour, I_BE2_Spot
{
	private BE2_DragDropManager _dragDropManager; //Field offset: 0x18
	private Transform _transform; //Field offset: 0x20

	public override I_BE2_Block Block
	{
		 get { } //Length: 8
	}

	public override Vector2 DropPosition
	{
		 get { } //Length: 8
	}

	public override Transform Transform
	{
		 get { } //Length: 136
	}

	public string Type
	{
		 get { } //Length: 68
	}

	public BE2_SpotProgEnvViewport() { }

	private void Awake() { }

	public override I_BE2_Block get_Block() { }

	public override Vector2 get_DropPosition() { }

	public override Transform get_Transform() { }

	public string get_Type() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void OnPointerUp() { }

}

