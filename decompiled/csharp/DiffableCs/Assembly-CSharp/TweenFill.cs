//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenFill : UITweener
{
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float from; //Field offset: 0x80
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float to; //Field offset: 0x84
	private bool mCached; //Field offset: 0x88
	private UIBasicSprite mSprite; //Field offset: 0x90

	public float value
	{
		 get { } //Length: 152
		 set { } //Length: 180
	}

	public TweenFill() { }

	public static TweenFill Begin(GameObject go, float duration, float fill) { }

	private void Cache() { }

	public float get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_value(float value) { }

	public virtual void SetEndToCurrentValue() { }

	public virtual void SetStartToCurrentValue() { }

}

