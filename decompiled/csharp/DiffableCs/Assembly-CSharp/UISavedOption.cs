//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UISavedOption : MonoBehaviour
{
	public string keyName; //Field offset: 0x18
	private UIPopupList mList; //Field offset: 0x20
	private UIToggle mCheck; //Field offset: 0x28
	private UIProgressBar mSlider; //Field offset: 0x30

	private string key
	{
		private get { } //Length: 128
	}

	public UISavedOption() { }

	private void Awake() { }

	private string get_key() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void SaveProgress() { }

	public void SaveSelection() { }

	public void SaveState() { }

}

