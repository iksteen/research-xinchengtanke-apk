namespace DG.Tweening;

public abstract class Tweener : Tween
{
	internal bool hasManuallySetStartValue; //Field offset: 0x118
	internal bool isFromAllowed; //Field offset: 0x119

	internal Tweener() { }

	internal static bool DoStartup(TweenerCore<T1, T2, TPlugOptions> t) { }

	private static void DOStartupDurationBased(TweenerCore<T1, T2, TPlugOptions> t) { }

	private static bool DOStartupSpecials(TweenerCore<T1, T2, TPlugOptions> t) { }

	internal static float DoUpdateDelay(TweenerCore<T1, T2, TPlugOptions> t, float elapsed) { }

	internal static bool Setup(TweenerCore<T1, T2, TPlugOptions> t, DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, ABSTweenPlugin<T1, T2, TPlugOptions> plugin = null) { }

}

