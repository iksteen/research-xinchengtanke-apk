//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenRotation : UITweener
{
	public Vector3 from; //Field offset: 0x80
	public Vector3 to; //Field offset: 0x8C
	public bool quaternionLerp; //Field offset: 0x98
	private Transform mTrans; //Field offset: 0xA0

	public Transform cachedTransform
	{
		 get { } //Length: 160
	}

	[Obsolete]
	public Quaternion rotation
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public Quaternion value
	{
		 get { } //Length: 32
		 set { } //Length: 80
	}

	public TweenRotation() { }

	public static TweenRotation Begin(GameObject go, float duration, Quaternion rot) { }

	public Transform get_cachedTransform() { }

	public Quaternion get_rotation() { }

	public Quaternion get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_rotation(Quaternion value) { }

	public void set_value(Quaternion value) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToEnd() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToStart() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetEndToCurrentValue() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetStartToCurrentValue() { }

}

