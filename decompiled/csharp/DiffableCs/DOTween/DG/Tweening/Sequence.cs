namespace DG.Tweening;

public sealed class Sequence : Tween
{
	internal readonly List<Tween> sequencedTweens; //Field offset: 0x118
	private readonly List<ABSSequentiable> _sequencedObjs; //Field offset: 0x120

	private static bool ApplyInternalCycle(Sequence s, float fromPos, float toPos, UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep = false) { }

	internal virtual bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice) { }

	internal static bool DoApplyTween(Sequence s, float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode) { }

	internal static bool DoStartup(Sequence s) { }

	private static int SortSequencedObjs(ABSSequentiable a, ABSSequentiable b) { }

	internal virtual bool Startup() { }

}

