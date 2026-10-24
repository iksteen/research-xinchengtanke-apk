//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIButtonOffset : MonoBehaviour
{
	public Transform tweenTarget; //Field offset: 0x18
	public Vector3 hover; //Field offset: 0x20
	public Vector3 pressed; //Field offset: 0x2C
	public float duration; //Field offset: 0x38
	private Vector3 mPos; //Field offset: 0x3C
	private bool mStarted; //Field offset: 0x48
	private bool mPressed; //Field offset: 0x49

	public UIButtonOffset() { }

	private void OnDisable() { }

	private void OnDragOut() { }

	private void OnDragOver() { }

	private void OnEnable() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool isPressed) { }

	private void OnSelect(bool isSelected) { }

	private void Start() { }

}

