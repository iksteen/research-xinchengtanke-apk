//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenPosition : UITweener
{
	public Vector3 from; //Field offset: 0x80
	public Vector3 to; //Field offset: 0x8C
	[HideInInspector]
	public bool worldSpace; //Field offset: 0x98
	private Transform mTrans; //Field offset: 0xA0
	private UIRect mRect; //Field offset: 0xA8

	public Transform cachedTransform
	{
		 get { } //Length: 160
	}

	[Obsolete]
	public Vector3 position
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public Vector3 value
	{
		 get { } //Length: 60
		 set { } //Length: 344
	}

	public TweenPosition() { }

	private void Awake() { }

	public static TweenPosition Begin(GameObject go, float duration, Vector3 pos) { }

	public static TweenPosition Begin(GameObject go, float duration, Vector3 pos, bool worldSpace) { }

	public Transform get_cachedTransform() { }

	public Vector3 get_position() { }

	public Vector3 get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_position(Vector3 value) { }

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

