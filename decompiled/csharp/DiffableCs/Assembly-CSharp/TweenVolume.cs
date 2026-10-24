//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenVolume : UITweener
{
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float from; //Field offset: 0x80
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float to; //Field offset: 0x84
	private AudioSource mSource; //Field offset: 0x88

	public AudioSource audioSource
	{
		 get { } //Length: 408
	}

	public float value
	{
		 get { } //Length: 160
		 set { } //Length: 176
	}

	[Obsolete]
	public float volume
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public TweenVolume() { }

	public static TweenVolume Begin(GameObject go, float duration, float targetVolume) { }

	public AudioSource get_audioSource() { }

	public float get_value() { }

	public float get_volume() { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	public void set_value(float value) { }

	public void set_volume(float value) { }

	public virtual void SetEndToCurrentValue() { }

	public virtual void SetStartToCurrentValue() { }

}

