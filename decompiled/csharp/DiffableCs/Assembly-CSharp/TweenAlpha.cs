//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenAlpha : UITweener
{
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float from; //Field offset: 0x80
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float to; //Field offset: 0x84
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool autoCleanup; //Field offset: 0x88
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string colorProperty; //Field offset: 0x90
	private bool mCached; //Field offset: 0x98
	private UIRect mRect; //Field offset: 0xA0
	private Material mShared; //Field offset: 0xA8
	private Material mMat; //Field offset: 0xB0
	private Light mLight; //Field offset: 0xB8
	private SpriteRenderer mSr; //Field offset: 0xC0
	private float mBaseIntensity; //Field offset: 0xC8

	[Obsolete]
	public float alpha
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public float value
	{
		 get { } //Length: 364
		 set { } //Length: 564
	}

	public TweenAlpha() { }

	public static TweenAlpha Begin(GameObject go, float duration, float alpha, float delay = 0) { }

	private void Cache() { }

	public float get_alpha() { }

	public float get_value() { }

	private void OnDestroy() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_alpha(float value) { }

	public void set_value(float value) { }

	public virtual void SetEndToCurrentValue() { }

	public virtual void SetStartToCurrentValue() { }

}

