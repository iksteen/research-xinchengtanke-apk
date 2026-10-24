//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIToggledObjects : MonoBehaviour
{
	public List<GameObject> activate; //Field offset: 0x18
	public List<GameObject> deactivate; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	private GameObject target; //Field offset: 0x28
	[HideInInspector]
	[SerializeField]
	private bool inverse; //Field offset: 0x30

	public UIToggledObjects() { }

	private void Awake() { }

	private void Set(GameObject go, bool state) { }

	public void Toggle() { }

}

