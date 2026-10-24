namespace DG.Tweening.Core;

public class DOTweenSettings : ScriptableObject
{
	internal enum SettingsLocation
	{
		AssetsDirectory = 0,
		DOTweenDirectory = 1,
		DemigiantDirectory = 2,
	}

	public const string AssetName = "DOTweenSettings"; //Field offset: 0x0
	public bool useSafeMode; //Field offset: 0x18
	public float timeScale; //Field offset: 0x1C
	public bool useSmoothDeltaTime; //Field offset: 0x20
	public float maxSmoothUnscaledTime; //Field offset: 0x24
	public RewindCallbackMode rewindCallbackMode; //Field offset: 0x28
	public bool showUnityEditorReport; //Field offset: 0x2C
	public LogBehaviour logBehaviour; //Field offset: 0x30
	public bool drawGizmos; //Field offset: 0x34
	public bool defaultRecyclable; //Field offset: 0x35
	public AutoPlay defaultAutoPlay; //Field offset: 0x38
	public UpdateType defaultUpdateType; //Field offset: 0x3C
	public bool defaultTimeScaleIndependent; //Field offset: 0x40
	public Ease defaultEaseType; //Field offset: 0x44
	public float defaultEaseOvershootOrAmplitude; //Field offset: 0x48
	public float defaultEasePeriod; //Field offset: 0x4C
	public bool defaultAutoKill; //Field offset: 0x50
	public LoopType defaultLoopType; //Field offset: 0x54
	public SettingsLocation storeSettingsLocation; //Field offset: 0x58
	public bool showPlayingTweens; //Field offset: 0x5C
	public bool showPausedTweens; //Field offset: 0x5D

	public DOTweenSettings() { }

}

