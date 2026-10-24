namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_BlockSectionHeader_Label : MonoBehaviour, I_BE2_BlockSectionHeaderItem
{
	private BE2_Text _text; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x20

	public override Vector2 Size
	{
		 get { } //Length: 164
	}

	public override Transform Transform
	{
		 get { } //Length: 8
	}

	public BE2_BlockSectionHeader_Label() { }

	private void Awake() { }

	public override Vector2 get_Size() { }

	public override Transform get_Transform() { }

	private void OnValidate() { }

}

