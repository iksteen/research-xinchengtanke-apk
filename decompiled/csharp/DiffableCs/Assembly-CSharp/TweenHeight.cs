//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenHeight : UITweener
{
	public int from; //Field offset: 0x80
	public int to; //Field offset: 0x84
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public UIWidget fromTarget; //Field offset: 0x88
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public UIWidget toTarget; //Field offset: 0x90
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool updateTable; //Field offset: 0x98
	private UIWidget mWidget; //Field offset: 0xA0
	private UITable mTable; //Field offset: 0xA8

	public UIWidget cachedWidget
	{
		 get { } //Length: 180
	}

	[Obsolete]
	public int height
	{
		 get { } //Length: 32
		 set { } //Length: 4
	}

	public int value
	{
		 get { } //Length: 32
		 set { } //Length: 48
	}

	public TweenHeight() { }

	public static TweenHeight Begin(UIWidget widget, float duration, int height) { }

	public UIWidget get_cachedWidget() { }

	public int get_height() { }

	public int get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_height(int value) { }

	public void set_value(int value) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToEnd() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToStart() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetEndToCurrentValue() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetStartToCurrentValue() { }

}

