namespace MG_BlocksEngine2.UI;

public interface I_BE2_UI_ContextMenu
{

	public BE2_Text Title
	{
		 get { } //Length: 0
	}

	public void Close() { }

	public BE2_Text get_Title() { }

	public void Open(T target, String[] options) { }

}

