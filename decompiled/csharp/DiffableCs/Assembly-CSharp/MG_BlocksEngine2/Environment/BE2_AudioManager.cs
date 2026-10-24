namespace MG_BlocksEngine2.Environment;

public class BE2_AudioManager : MonoBehaviour
{
	public static BE2_AudioManager instance; //Field offset: 0x0
	public AudioClip[] audiosArray; //Field offset: 0x18
	public AudioSource source; //Field offset: 0x20

	public BE2_AudioManager() { }

	private void Awake() { }

	public void PlaySound(int audioIndex) { }

}

