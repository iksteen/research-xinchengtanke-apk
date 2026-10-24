namespace MG_BlocksEngine2.UI;

public class BE2_UI_ContextMenuManager : MonoBehaviour
{
	private static BE2_UI_ContextMenuManager _instance; //Field offset: 0x0
	private I_BE2_UI_ContextMenu[] _contextMenuArray; //Field offset: 0x18
	private I_BE2_UI_ContextMenu currentContextMenu; //Field offset: 0x20
	public BE2_UI_PanelCancel panelCancel; //Field offset: 0x28
	public bool isActive; //Field offset: 0x30

	public static BE2_UI_ContextMenuManager instance
	{
		 get { } //Length: 236
		 set { } //Length: 84
	}

	public BE2_UI_ContextMenuManager() { }

	public void CloseContextMenu() { }

	public static BE2_UI_ContextMenuManager get_instance() { }

	public void OpenContextMenu(int menuIndex, T target, String[] options) { }

	public static void set_instance(BE2_UI_ContextMenuManager value) { }

	private void Start() { }

}

