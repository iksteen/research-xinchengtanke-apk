namespace MG_BlocksEngine2.Environment;

public class BE2_VariablesListManager : MonoBehaviour, I_BE2_VariablesManager
{
	public static BE2_VariablesListManager instance; //Field offset: 0x0
	public BE2_UI_NewVariableListPanel newListPanel; //Field offset: 0x18
	public Dictionary<String, List`1<String>> lists; //Field offset: 0x20

	public BE2_VariablesListManager() { }

	public void AddOrUpdateList(string listName, List<String> value) { }

	public void AddValueInList(string listName, string value) { }

	private void Awake() { }

	public void ClearList(string listName) { }

	public bool ContainsList(string listName) { }

	public override void CreateAndAddVarToPanel(string listName) { }

	public float GetListFloatValue(string listName, int index) { }

	public List<Single> GetListFloatValues(string listName) { }

	public string GetListStringValue(string listName, int index) { }

	public List<String> GetListStringValues(string listName) { }

	public BE2_InputValues GetListValue(string listName, int index) { }

	public List<BE2_InputValues> GetListValues(string listName) { }

	public int GetValueIndexAtList(string listName, string value) { }

	public void InsertValueInList(string listName, string value, int index) { }

	public bool ListContainsValue(string listName, string value) { }

	public void RemoveList(string listName) { }

	public void RemoveListItem(string listName, string value) { }

	public void RemoveListItem(string listName, int index) { }

	public void ReplaceValueInList(string listName, string value, int index) { }

}

