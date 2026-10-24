namespace MG_BlocksEngine2.UI;

public class BE2_UI_SaveLoadContextMenu : MonoBehaviour, I_BE2_UI_ContextMenu
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass18_0
	{
		public Toggle toggle; //Field offset: 0x10
		public BE2_UI_SaveLoadContextMenu <>4__this; //Field offset: 0x18

		public <>c__DisplayClass18_0() { }

		internal void <RefreshScrollValues>b__0(bool <p0>) { }

	}

	private string _codesPath; //Field offset: 0x18
	private BE2_UI_ContextMenuManager _contextMenuManager; //Field offset: 0x20
	private I_BE2_ProgrammingEnv _targetProgrammingEnv; //Field offset: 0x28
	private BE2_DragDropManager _dragDropManager; //Field offset: 0x30
	public ToggleGroup scrollContentTG; //Field offset: 0x38
	public Toggle itemToggleTemplate; //Field offset: 0x40
	public TMP_InputField fileInputField; //Field offset: 0x48
	public GameObject panelDefaultButtonsGO; //Field offset: 0x50
	public GameObject panelConfirmDeleteGO; //Field offset: 0x58
	public GameObject panelConfirmReplaceGO; //Field offset: 0x60
	[CompilerGenerated]
	private BE2_Text <Title>k__BackingField; //Field offset: 0x68

	public override BE2_Text Title
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BE2_UI_SaveLoadContextMenu() { }

	private void Awake() { }

	public void Cancel() { }

	public void CancelConfirm() { }

	public override void Close() { }

	public void ConfirmDelete() { }

	public void ConfirmSave() { }

	public void Delete() { }

	[CompilerGenerated]
	public override BE2_Text get_Title() { }

	private string GetFileName() { }

	private string GetFullPath() { }

	public void Load() { }

	public override void Open(T target, String[] options) { }

	private void RefreshScrollValues() { }

	public void Save() { }

	[CompilerGenerated]
	public void set_Title(BE2_Text value) { }

	private void Start() { }

}

