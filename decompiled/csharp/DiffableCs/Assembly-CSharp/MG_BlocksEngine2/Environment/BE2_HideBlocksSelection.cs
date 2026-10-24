namespace MG_BlocksEngine2.Environment;

public class BE2_HideBlocksSelection : MonoBehaviour
{
	private BE2_Canvas _blocksSelectionCanvas; //Field offset: 0x18
	private Vector3 _hidePosition; //Field offset: 0x20
	private Dictionary<RectTransform, Vector3> _envs; //Field offset: 0x30

	public BE2_HideBlocksSelection() { }

	public void HideBlocksSelection() { }

	public void ShowBlocksSelection() { }

	private void Start() { }

}

