namespace MG_BlocksEngine2.Environment;

public class BE2_VariablesManager : MonoBehaviour, I_BE2_VariablesManager
{
	public static BE2_VariablesManager instance; //Field offset: 0x0
	public BE2_UI_NewVariablePanel newVariablePanel; //Field offset: 0x18
	public Dictionary<String, String> variablesList; //Field offset: 0x20

	public BE2_VariablesManager() { }

	public void AddOrUpdateVariable(string variable, string value) { }

	private void Awake() { }

	public bool ContainsVariable(string variable) { }

	public override void CreateAndAddVarToPanel(string varName) { }

	public float GetVariableFloatValue(string variable) { }

	public string GetVariableStringValue(string variable) { }

	public BE2_InputValues GetVariableValues(string variable) { }

	public void RemoveVariable(string variable) { }

}

