//Type is in global namespace

public abstract class UITweener : MonoBehaviour
{
	internal enum DelayAffects
	{
		Forward = 0,
		Reverse = 1,
		Both = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum Method
	{
		Linear = 0,
		EaseIn = 1,
		EaseOut = 2,
		EaseInOut = 3,
		BounceIn = 4,
		BounceOut = 5,
	}

	[DoNotObfuscateNGUI]
	internal enum Style
	{
		Once = 0,
		Loop = 1,
		PingPong = 2,
	}

	public static UITweener current; //Field offset: 0x0
	[HideInInspector]
	public Method method; //Field offset: 0x18
	[HideInInspector]
	public Style style; //Field offset: 0x1C
	[HideInInspector]
	public AnimationCurve animationCurve; //Field offset: 0x20
	[HideInInspector]
	public bool ignoreTimeScale; //Field offset: 0x28
	[HideInInspector]
	public float delay; //Field offset: 0x2C
	[HideInInspector]
	public DelayAffects delayAffects; //Field offset: 0x30
	[HideInInspector]
	public float duration; //Field offset: 0x34
	[HideInInspector]
	public bool steeperCurves; //Field offset: 0x38
	[HideInInspector]
	public int tweenGroup; //Field offset: 0x3C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useFixedUpdate; //Field offset: 0x40
	[HideInInspector]
	public List<EventDelegate> onFinished; //Field offset: 0x48
	[HideInInspector]
	public GameObject eventReceiver; //Field offset: 0x50
	[HideInInspector]
	public string callWhenFinished; //Field offset: 0x58
	public float timeScale; //Field offset: 0x60
	private bool mStarted; //Field offset: 0x64
	private float mStartTime; //Field offset: 0x68
	private float mDuration; //Field offset: 0x6C
	private float mAmountPerDelta; //Field offset: 0x70
	private float mFactor; //Field offset: 0x74
	private List<EventDelegate> mTemp; //Field offset: 0x78

	public float amountPerDelta
	{
		 get { } //Length: 116
	}

	public Direction direction
	{
		 get { } //Length: 32
	}

	public float tweenFactor
	{
		 get { } //Length: 8
		 set { } //Length: 40
	}

	protected UITweener() { }

	public void AddOnFinished(EventDelegate del) { }

	public void AddOnFinished(Callback del) { }

	public static T Begin(GameObject go, float duration, float delay = 0) { }

	private float BounceLogic(float val) { }

	protected void DoUpdate() { }

	public void Finish() { }

	protected void FixedUpdate() { }

	public float get_amountPerDelta() { }

	public Direction get_direction() { }

	public float get_tweenFactor() { }

	protected override void OnDisable() { }

	protected abstract void OnUpdate(float factor, bool isFinished) { }

	public override void Play(bool forward) { }

	[Obsolete]
	public void Play() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void PlayForward() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void PlayReverse() { }

	public void RemoveOnFinished(EventDelegate del) { }

	private void Reset() { }

	public void ResetToBeginning() { }

	public void Sample(float factor, bool isFinished) { }

	public void set_tweenFactor(float value) { }

	public override void SetEndToCurrentValue() { }

	public void SetOnFinished(EventDelegate del) { }

	public void SetOnFinished(Callback del) { }

	public override void SetStartToCurrentValue() { }

	protected override void Start() { }

	public void Toggle() { }

	protected void Update() { }

}

