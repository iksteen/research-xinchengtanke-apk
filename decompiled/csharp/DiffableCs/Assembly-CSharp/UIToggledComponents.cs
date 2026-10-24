//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIToggledComponents : MonoBehaviour
{
	public List<MonoBehaviour> activate; //Field offset: 0x18
	public List<MonoBehaviour> deactivate; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	private MonoBehaviour target; //Field offset: 0x28
	[HideInInspector]
	[SerializeField]
	private bool inverse; //Field offset: 0x30

	public UIToggledComponents() { }

	private void Awake() { }

	public void Toggle() { }

}

