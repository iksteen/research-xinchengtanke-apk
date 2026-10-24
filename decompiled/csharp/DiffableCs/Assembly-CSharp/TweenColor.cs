//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenColor : UITweener
{
	public Color from; //Field offset: 0x80
	public Color to; //Field offset: 0x90
	private bool mCached; //Field offset: 0xA0
	private UIWidget mWidget; //Field offset: 0xA8
	private Material mMat; //Field offset: 0xB0
	private Light mLight; //Field offset: 0xB8
	private SpriteRenderer mSr; //Field offset: 0xC0

	[Obsolete]
	public Color color
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public Color value
	{
		 get { } //Length: 376
		 set { } //Length: 568
	}

	public TweenColor() { }

	public static TweenColor Begin(GameObject go, float duration, Color color) { }

	private void Cache() { }

	public Color get_color() { }

	public Color get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_color(Color value) { }

	public void set_value(Color value) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToEnd() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToStart() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetEndToCurrentValue() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetStartToCurrentValue() { }

}

