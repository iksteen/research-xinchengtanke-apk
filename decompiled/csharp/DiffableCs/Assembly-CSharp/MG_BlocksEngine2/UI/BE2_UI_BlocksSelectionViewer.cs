namespace MG_BlocksEngine2.UI;

[ExecuteInEditMode]
public class BE2_UI_BlocksSelectionViewer : MonoBehaviour
{
	private static BE2_UI_BlocksSelectionViewer _instance; //Field offset: 0x0
	public List<BE2_UI_SelectionPanel> selectionPanelsList; //Field offset: 0x18
	[Header(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Transform blockToAddTransform; //Field offset: 0x20
	public int panelIndex; //Field offset: 0x28
	public bool addBlock; //Field offset: 0x2C
	private ScrollRect _scrollRect; //Field offset: 0x30

	public static BE2_UI_BlocksSelectionViewer Instance
	{
		 get { } //Length: 232
		 set { } //Length: 84
	}

	public BE2_UI_BlocksSelectionViewer() { }

	public void AddBlockToPanel(Transform blockTransform, BE2_UI_SelectionPanel selectionPanel) { }

	private void Awake() { }

	private void EnableScroll() { }

	public void ForceRebuildLayout() { }

	public static BE2_UI_BlocksSelectionViewer get_Instance() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public static void set_Instance(BE2_UI_BlocksSelectionViewer value) { }

	private void Start() { }

	public void UpdateSelectionPanels() { }

}

