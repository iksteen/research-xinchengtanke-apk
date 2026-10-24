//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIViewport : MonoBehaviour
{
	public Camera sourceCamera; //Field offset: 0x18
	public Transform topLeft; //Field offset: 0x20
	public Transform bottomRight; //Field offset: 0x28
	public float fullSize; //Field offset: 0x30
	private Camera mCam; //Field offset: 0x38

	public UIViewport() { }

	private void LateUpdate() { }

	private void Start() { }

}

