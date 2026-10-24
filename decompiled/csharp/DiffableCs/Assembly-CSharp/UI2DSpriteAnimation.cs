//Type is in global namespace

public class UI2DSpriteAnimation : MonoBehaviour
{
	public int frameIndex; //Field offset: 0x18
	[SerializeField]
	protected int framerate; //Field offset: 0x1C
	public bool ignoreTimeScale; //Field offset: 0x20
	public bool loop; //Field offset: 0x21
	public Sprite[] frames; //Field offset: 0x28
	private SpriteRenderer mUnitySprite; //Field offset: 0x30
	private UI2DSprite mNguiSprite; //Field offset: 0x38
	private float mUpdate; //Field offset: 0x40

	public int framesPerSecond
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public bool isPlaying
	{
		 get { } //Length: 8
	}

	public UI2DSpriteAnimation() { }

	public int get_framesPerSecond() { }

	public bool get_isPlaying() { }

	public void Pause() { }

	public void Play() { }

	public void ResetToBeginning() { }

	public void set_framesPerSecond(int value) { }

	private void Start() { }

	private void Update() { }

	private void UpdateSprite() { }

}

