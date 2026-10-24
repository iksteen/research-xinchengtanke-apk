//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UISpriteAnimation : MonoBehaviour
{
	public int frameIndex; //Field offset: 0x18
	[HideInInspector]
	[SerializeField]
	protected int mFPS; //Field offset: 0x1C
	[HideInInspector]
	[SerializeField]
	protected string mPrefix; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	protected bool mLoop; //Field offset: 0x28
	[HideInInspector]
	[SerializeField]
	protected bool mSnap; //Field offset: 0x29
	protected UISprite mSprite; //Field offset: 0x30
	protected float mDelta; //Field offset: 0x38
	protected bool mActive; //Field offset: 0x3C
	protected List<String> mSpriteNames; //Field offset: 0x40

	public int frames
	{
		 get { } //Length: 76
	}

	public int framesPerSecond
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public bool isPlaying
	{
		 get { } //Length: 8
	}

	public bool loop
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public string namePrefix
	{
		 get { } //Length: 8
		 set { } //Length: 96
	}

	public UISpriteAnimation() { }

	public int get_frames() { }

	public int get_framesPerSecond() { }

	public bool get_isPlaying() { }

	public bool get_loop() { }

	public string get_namePrefix() { }

	public void Pause() { }

	public void Play() { }

	public void RebuildSpriteList() { }

	public void ResetToBeginning() { }

	public void set_framesPerSecond(int value) { }

	public void set_loop(bool value) { }

	public void set_namePrefix(string value) { }

	protected override void Start() { }

	protected override void Update() { }

}

