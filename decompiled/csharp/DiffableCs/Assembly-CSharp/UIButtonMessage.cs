//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIButtonMessage : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
		OnDoubleClick = 5,
	}

	public GameObject target; //Field offset: 0x18
	public string functionName; //Field offset: 0x20
	public Trigger trigger; //Field offset: 0x28
	public bool includeChildren; //Field offset: 0x2C
	private bool mStarted; //Field offset: 0x2D

	public UIButtonMessage() { }

	private void OnClick() { }

	private void OnDoubleClick() { }

	private void OnEnable() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool isPressed) { }

	private void OnSelect(bool isSelected) { }

	private void Send() { }

	private void Start() { }

}

