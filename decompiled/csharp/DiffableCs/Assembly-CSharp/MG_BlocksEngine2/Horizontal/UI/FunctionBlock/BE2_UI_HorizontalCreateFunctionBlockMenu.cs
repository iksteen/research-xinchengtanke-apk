namespace MG_BlocksEngine2.Horizontal.UI.FunctionBlock;

public class BE2_UI_HorizontalCreateFunctionBlockMenu : MonoBehaviour
{
	public Transform editorBlockTransform; //Field offset: 0x18
	private I_BE2_Block _editorBlock; //Field offset: 0x20
	public GameObject templateInput; //Field offset: 0x28
	public GameObject templateLabel; //Field offset: 0x30
	private int currentIconIndex; //Field offset: 0x38

	private BE2_HorizontalFunctionBlocksManager functionBlocksManager
	{
		private get { } //Length: 128
	}

	public BE2_UI_HorizontalCreateFunctionBlockMenu() { }

	private void Awake() { }

	private BE2_HorizontalFunctionBlocksManager get_functionBlocksManager() { }

	public string GetCustomString() { }

	public void OnButtonCreateFunctionBlock() { }

	public void RemoveItem(GameObject item) { }

	public void SetIcon(Image image) { }

}

