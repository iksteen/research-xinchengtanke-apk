//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenFOV : UITweener
{
	public float from; //Field offset: 0x80
	public float to; //Field offset: 0x84
	private Camera mCam; //Field offset: 0x88

	public Camera cachedCamera
	{
		 get { } //Length: 180
	}

	[Obsolete]
	public float fov
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public float value
	{
		 get { } //Length: 32
		 set { } //Length: 48
	}

	public TweenFOV() { }

	public static TweenFOV Begin(GameObject go, float duration, float to) { }

	public Camera get_cachedCamera() { }

	public float get_fov() { }

	public float get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_fov(float value) { }

	public void set_value(float value) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToEnd() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetCurrentValueToStart() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetEndToCurrentValue() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual void SetStartToCurrentValue() { }

}

