namespace DG.Tweening;

public class DOTween
{
	public static readonly string Version; //Field offset: 0x0
	public static bool useSafeMode; //Field offset: 0x8
	public static bool showUnityEditorReport; //Field offset: 0x9
	public static float timeScale; //Field offset: 0xC
	public static bool useSmoothDeltaTime; //Field offset: 0x10
	public static float maxSmoothUnscaledTime; //Field offset: 0x14
	internal static RewindCallbackMode rewindCallbackMode; //Field offset: 0x18
	private static LogBehaviour _logBehaviour; //Field offset: 0x1C
	public static bool drawGizmos; //Field offset: 0x20
	public static UpdateType defaultUpdateType; //Field offset: 0x24
	public static bool defaultTimeScaleIndependent; //Field offset: 0x28
	public static AutoPlay defaultAutoPlay; //Field offset: 0x2C
	public static bool defaultAutoKill; //Field offset: 0x30
	public static LoopType defaultLoopType; //Field offset: 0x34
	public static bool defaultRecyclable; //Field offset: 0x38
	public static Ease defaultEaseType; //Field offset: 0x3C
	public static float defaultEaseOvershootOrAmplitude; //Field offset: 0x40
	public static float defaultEasePeriod; //Field offset: 0x44
	internal static DOTweenComponent instance; //Field offset: 0x48
	internal static bool isUnityEditor; //Field offset: 0x50
	internal static int maxActiveTweenersReached; //Field offset: 0x54
	internal static int maxActiveSequencesReached; //Field offset: 0x58
	internal static readonly List<TweenCallback> GizmosDelegates; //Field offset: 0x60
	internal static bool initialized; //Field offset: 0x68
	internal static bool isQuitting; //Field offset: 0x69

	public static LogBehaviour logBehaviour
	{
		 get { } //Length: 100
		 set { } //Length: 112
	}

	private static DOTween() { }

	private static TweenerCore<T1, T2, TPlugOptions> ApplyTo(DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, ABSTweenPlugin<T1, T2, TPlugOptions> plugin = null) { }

	private static void AutoInit() { }

	public static LogBehaviour get_logBehaviour() { }

	private static IDOTweenInit Init(DOTweenSettings settings, Nullable<Boolean> recycleAllByDefault, Nullable<Boolean> useSafeMode, Nullable<LogBehaviour> logBehaviour) { }

	private static void InitCheck() { }

	public static void set_logBehaviour(LogBehaviour value) { }

	public static TweenerCore<Vector3, Vector3, VectorOptions> To(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 endValue, float duration) { }

}

