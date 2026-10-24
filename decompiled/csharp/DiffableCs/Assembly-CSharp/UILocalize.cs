//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UILocalize : MonoBehaviour
{
	public string key; //Field offset: 0x18
	private bool mStarted; //Field offset: 0x20

	public string value
	{
		 set { } //Length: 932
	}

	public UILocalize() { }

	private void OnEnable() { }

	private void OnLocalize() { }

	public void set_value(string value) { }

	private void Start() { }

}

