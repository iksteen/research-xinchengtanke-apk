//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ActiveAnimation : MonoBehaviour
{
	public static ActiveAnimation current; //Field offset: 0x0
	public List<EventDelegate> onFinished; //Field offset: 0x18
	[HideInInspector]
	public GameObject eventReceiver; //Field offset: 0x20
	[HideInInspector]
	public string callWhenFinished; //Field offset: 0x28
	private Animation mAnim; //Field offset: 0x30
	private Direction mLastDirection; //Field offset: 0x38
	private Direction mDisableDirection; //Field offset: 0x3C
	private bool mNotify; //Field offset: 0x40
	private Animator mAnimator; //Field offset: 0x48
	private string mClip; //Field offset: 0x50

	public bool isPlaying
	{
		 get { } //Length: 1020
	}

	private float playbackTime
	{
		private get { } //Length: 104
	}

	public ActiveAnimation() { }

	public void Finish() { }

	public bool get_isPlaying() { }

	private float get_playbackTime() { }

	private void Play(string clipName, Direction playDirection) { }

	public static ActiveAnimation Play(Animation anim, string clipName, Direction playDirection, EnableCondition enableBeforePlay, DisableCondition disableCondition) { }

	public static ActiveAnimation Play(Animation anim, string clipName, Direction playDirection) { }

	public static ActiveAnimation Play(Animation anim, Direction playDirection) { }

	public static ActiveAnimation Play(Animator anim, string clipName, Direction playDirection, EnableCondition enableBeforePlay, DisableCondition disableCondition) { }

	public void Reset() { }

	private void Start() { }

	private void Update() { }

}

