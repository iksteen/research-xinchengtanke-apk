namespace DG.Tweening.Core;

public class TweenerCore : Tweener
{
	public T2 startValue; //Field offset: 0x0
	public T2 endValue; //Field offset: 0x0
	public T2 changeValue; //Field offset: 0x0
	public TPlugOptions plugOptions; //Field offset: 0x0
	public DOGetter<T1> getter; //Field offset: 0x0
	public DOSetter<T1> setter; //Field offset: 0x0
	internal ABSTweenPlugin<T1, T2, TPlugOptions> tweenPlugin; //Field offset: 0x0

	internal TweenerCore`3() { }

	internal virtual bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice) { }

	internal virtual void Reset() { }

	internal virtual bool Startup() { }

	internal virtual float UpdateDelay(float elapsed) { }

}

