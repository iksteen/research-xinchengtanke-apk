namespace DG.Tweening.Plugins;

public class UlongPlugin : ABSTweenPlugin<UInt64, UInt64, NoOptions>
{

	public UlongPlugin() { }

	public virtual ulong ConvertToStartValue(TweenerCore<UInt64, UInt64, NoOptions> t, ulong value) { }

	public virtual void EvaluateAndApply(NoOptions options, Tween t, bool isRelative, DOGetter<UInt64> getter, DOSetter<UInt64> setter, float elapsed, ulong startValue, ulong changeValue, float duration, bool usingInversePosition, UpdateNotice updateNotice) { }

	public virtual float GetSpeedBasedDuration(NoOptions options, float unitsXSecond, ulong changeValue) { }

	public virtual void Reset(TweenerCore<UInt64, UInt64, NoOptions> t) { }

	public virtual void SetChangeValue(TweenerCore<UInt64, UInt64, NoOptions> t) { }

	public virtual void SetRelativeEndValue(TweenerCore<UInt64, UInt64, NoOptions> t) { }

}

