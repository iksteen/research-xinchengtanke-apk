namespace MG_BlocksEngine2.UI;

public class BE2_UI_BlockContextMenu : MonoBehaviour, I_BE2_UI_ContextMenu
{
	private BE2_UI_ContextMenuManager _contextMenuManager; //Field offset: 0x18
	private I_BE2_Block _targetBlock; //Field offset: 0x20
	private BE2_DragDropManager _dragDropManager; //Field offset: 0x28
	[CompilerGenerated]
	private BE2_Text <Title>k__BackingField; //Field offset: 0x30

	public override BE2_Text Title
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BE2_UI_BlockContextMenu() { }

	private void Awake() { }

	public void Cancel() { }

	public override void Close() { }

	public void Delete() { }

	public void Duplicate() { }

	[CompilerGenerated]
	public override BE2_Text get_Title() { }

	public override void Open(T target, String[] options) { }

	[CompilerGenerated]
	public void set_Title(BE2_Text value) { }

	private void Start() { }

}

