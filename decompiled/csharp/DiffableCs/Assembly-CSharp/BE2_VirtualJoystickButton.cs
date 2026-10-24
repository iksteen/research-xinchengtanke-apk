//Type is in global namespace

public class BE2_VirtualJoystickButton : Button
{
	public bool isPressed; //Field offset: 0x100

	protected BE2_VirtualJoystickButton() { }

	public virtual void OnPointerDown(PointerEventData eventData) { }

	public virtual void OnPointerUp(PointerEventData eventData) { }

}

