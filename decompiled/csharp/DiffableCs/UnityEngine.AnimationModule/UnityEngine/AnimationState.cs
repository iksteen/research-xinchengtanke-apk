namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class AnimationState : TrackedReference
{

	public float length
	{
		 get { } //Length: 64
	}

	public string name
	{
		 get { } //Length: 64
	}

	public float speed
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public float time
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public AnimationState() { }

	public float get_length() { }

	public string get_name() { }

	public float get_speed() { }

	public float get_time() { }

	public void set_speed(float value) { }

	public void set_time(float value) { }

}

