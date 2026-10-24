//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIButtonRotation : MonoBehaviour
{
	public Transform tweenTarget; //Field offset: 0x18
	public Vector3 hover; //Field offset: 0x20
	public Vector3 pressed; //Field offset: 0x2C
	public float duration; //Field offset: 0x38
	private Quaternion mRot; //Field offset: 0x3C
	private bool mStarted; //Field offset: 0x4C

	public UIButtonRotation() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool isPressed) { }

	private void OnSelect(bool isSelected) { }

	private void Start() { }

}

