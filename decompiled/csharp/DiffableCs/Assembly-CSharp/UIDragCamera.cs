//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIDragCamera : MonoBehaviour
{
	public UIDraggableCamera draggableCamera; //Field offset: 0x18

	public UIDragCamera() { }

	private void Awake() { }

	private void OnDrag(Vector2 delta) { }

	private void OnPress(bool isPressed) { }

	private void OnScroll(float delta) { }

}

