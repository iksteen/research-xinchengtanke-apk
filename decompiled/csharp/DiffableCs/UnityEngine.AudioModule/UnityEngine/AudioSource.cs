namespace UnityEngine;

[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AudioSource : AudioBehaviour
{

	[NativeProperty]
	public AudioClip clip
	{
		 set { } //Length: 80
	}

	public float pitch
	{
		 set { } //Length: 80
	}

	public int priority
	{
		 set { } //Length: 80
	}

	public float volume
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public float get_volume() { }

	[ExcludeFromDocs]
	public void Play() { }

	private static void PlayHelper(AudioSource source, ulong delay) { }

	public void PlayOneShot(AudioClip clip, float volumeScale) { }

	private static void PlayOneShotHelper(AudioSource source, AudioClip clip, float volumeScale) { }

	public void set_clip(AudioClip value) { }

	public void set_pitch(float value) { }

	public void set_priority(int value) { }

	public void set_volume(float value) { }

	private static void SetPitch(AudioSource source, float pitch) { }

}

