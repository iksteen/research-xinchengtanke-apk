//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenOrthoSize : UITweener
{
	public float from; //Field offset: 0x80
	public float to; //Field offset: 0x84
	private Camera mCam; //Field offset: 0x88

	public Camera cachedCamera
	{
		 get { } //Length: 180
	}

	[Obsolete]
	public float orthoSize
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public float value
	{
		 get { } //Length: 32
		 set { } //Length: 48
	}

	public TweenOrthoSize() { }

	public static TweenOrthoSize Begin(GameObject go, float duration, float to) { }

	public Camera get_cachedCamera() { }

	public float get_orthoSize() { }

	public float get_value() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_orthoSize(float value) { }

	public void set_value(float value) { }

	public virtual void SetEndToCurrentValue() { }

	public virtual void SetStartToCurrentValue() { }

}

