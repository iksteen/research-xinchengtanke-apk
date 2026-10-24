//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIScrollBar : UISlider
{
	private enum Direction
	{
		Horizontal = 0,
		Vertical = 1,
		Upgraded = 2,
	}

	[HideInInspector]
	[SerializeField]
	protected float mSize; //Field offset: 0x84
	[HideInInspector]
	[SerializeField]
	private float mScroll; //Field offset: 0x88
	[HideInInspector]
	[SerializeField]
	private Direction mDir; //Field offset: 0x8C

	public float barSize
	{
		 get { } //Length: 8
		 set { } //Length: 400
	}

	[Obsolete]
	public float scrollValue
	{
		 get { } //Length: 4
		 set { } //Length: 8
	}

	public UIScrollBar() { }

	public virtual void ForceUpdate() { }

	public float get_barSize() { }

	public float get_scrollValue() { }

	protected virtual float LocalToValue(Vector2 localPos) { }

	protected virtual void OnStart() { }

	public void set_barSize(float value) { }

	public void set_scrollValue(float value) { }

	protected virtual void Upgrade() { }

}

