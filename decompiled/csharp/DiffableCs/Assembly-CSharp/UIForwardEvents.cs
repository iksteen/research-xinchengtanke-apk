//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIForwardEvents : MonoBehaviour
{
	public GameObject target; //Field offset: 0x18
	public bool onHover; //Field offset: 0x20
	public bool onPress; //Field offset: 0x21
	public bool onClick; //Field offset: 0x22
	public bool onDoubleClick; //Field offset: 0x23
	public bool onSelect; //Field offset: 0x24
	public bool onDrag; //Field offset: 0x25
	public bool onDrop; //Field offset: 0x26
	public bool onSubmit; //Field offset: 0x27
	public bool onScroll; //Field offset: 0x28
	public bool onTooltip; //Field offset: 0x29

	public UIForwardEvents() { }

	private void OnClick() { }

	private void OnDoubleClick() { }

	private void OnDrag(Vector2 delta) { }

	private void OnDrop(GameObject go) { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool pressed) { }

	private void OnScroll(float delta) { }

	private void OnSelect(bool selected) { }

	private void OnSubmit() { }

	private void OnTooltip(bool show) { }

}

