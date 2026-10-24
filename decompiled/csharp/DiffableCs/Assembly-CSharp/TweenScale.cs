//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenScale : UITweener
{
	public Vector3 from; //Field offset: 0x80
	public Vector3 to; //Field offset: 0x8C
	public bool updateTable; //Field offset: 0x98
	private Transform mTrans; //Field offset: 0xA0
	private UITable mTable; //Field offset: 0xA8

	public Transform cachedTransform
	{
		 get { } //Length: 160
	}

	[Obsolete]
	public Vector3 scale
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public Vector3 value
	{
		 get { } //Length: 32
		 set { } //Length: 72
	}

	public TweenScale() { }

	public static TweenScale Begin(GameObject go, float duration, Vector3 scale) { }

	public Transform get_cachedTransform() { }

	public Vector3 get_scale() { }

	public Vector3 get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_scale(Vector3 value) { }

	public void set_value(Vector3 value) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToEnd() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToStart() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetEndToCurrentValue() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetStartToCurrentValue() { }

}

