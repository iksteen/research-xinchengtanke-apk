namespace MG_BlocksEngine2.UI;

[ExecuteInEditMode]
public class BE2_UI_SelectionButton : MonoBehaviour
{
	private Button _button; //Field offset: 0x18
	private BE2_UI_BlocksSelectionViewer _blocksSelectionViewer; //Field offset: 0x20
	public BE2_UI_SelectionPanel selectionPanel; //Field offset: 0x28

	public BE2_UI_SelectionButton() { }

	private void Awake() { }

	private void OnValidate() { }

	private void Start() { }

	public void ToggleSection() { }

}

