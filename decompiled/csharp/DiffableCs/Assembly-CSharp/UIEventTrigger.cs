//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIEventTrigger : MonoBehaviour
{
	public static UIEventTrigger current; //Field offset: 0x0
	public List<EventDelegate> onHoverOver; //Field offset: 0x18
	public List<EventDelegate> onHoverOut; //Field offset: 0x20
	public List<EventDelegate> onPress; //Field offset: 0x28
	public List<EventDelegate> onRelease; //Field offset: 0x30
	public List<EventDelegate> onSelect; //Field offset: 0x38
	public List<EventDelegate> onDeselect; //Field offset: 0x40
	public List<EventDelegate> onClick; //Field offset: 0x48
	public List<EventDelegate> onDoubleClick; //Field offset: 0x50
	public List<EventDelegate> onDragStart; //Field offset: 0x58
	public List<EventDelegate> onDragEnd; //Field offset: 0x60
	public List<EventDelegate> onDragOver; //Field offset: 0x68
	public List<EventDelegate> onDragOut; //Field offset: 0x70
	public List<EventDelegate> onDrag; //Field offset: 0x78

	public bool isColliderEnabled
	{
		 get { } //Length: 308
	}

	public UIEventTrigger() { }

	public bool get_isColliderEnabled() { }

	private void OnClick() { }

	private void OnDoubleClick() { }

	private void OnDrag(Vector2 delta) { }

	private void OnDragEnd() { }

	private void OnDragOut(GameObject go) { }

	private void OnDragOver(GameObject go) { }

	private void OnDragStart() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool pressed) { }

	private void OnSelect(bool selected) { }

}

