namespace MG_BlocksEngine2.UI;

public class CustomScrollRect : ScrollRect
{
	private int maximumTouchCount; //Field offset: 0x128

	public Vector2 MultiTouchPosition
	{
		 get { } //Length: 224
	}

	public CustomScrollRect() { }

	public Vector2 get_MultiTouchPosition() { }

	public virtual void OnBeginDrag(PointerEventData eventData) { }

	public virtual void OnDrag(PointerEventData eventData) { }

	protected virtual void OnEnable() { }

	public virtual void OnEndDrag(PointerEventData eventData) { }

}

