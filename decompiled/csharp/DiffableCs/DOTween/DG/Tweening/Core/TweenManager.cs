namespace DG.Tweening.Core;

internal static class TweenManager
{
	public enum CapacityIncreaseMode
	{
		TweenersAndSequences = 0,
		TweenersOnly = 1,
		SequencesOnly = 2,
	}

	internal static int maxActive; //Field offset: 0x0
	internal static int maxTweeners; //Field offset: 0x4
	internal static int maxSequences; //Field offset: 0x8
	internal static bool hasActiveTweens; //Field offset: 0xC
	internal static bool hasActiveDefaultTweens; //Field offset: 0xD
	internal static bool hasActiveLateTweens; //Field offset: 0xE
	internal static bool hasActiveFixedTweens; //Field offset: 0xF
	internal static bool hasActiveManualTweens; //Field offset: 0x10
	internal static int totActiveTweens; //Field offset: 0x14
	internal static int totActiveDefaultTweens; //Field offset: 0x18
	internal static int totActiveLateTweens; //Field offset: 0x1C
	internal static int totActiveFixedTweens; //Field offset: 0x20
	internal static int totActiveManualTweens; //Field offset: 0x24
	internal static int totActiveTweeners; //Field offset: 0x28
	internal static int totActiveSequences; //Field offset: 0x2C
	internal static int totPooledTweeners; //Field offset: 0x30
	internal static int totPooledSequences; //Field offset: 0x34
	internal static int totTweeners; //Field offset: 0x38
	internal static int totSequences; //Field offset: 0x3C
	internal static bool isUpdateLoop; //Field offset: 0x40
	internal static Tween[] _activeTweens; //Field offset: 0x48
	private static Tween[] _pooledTweeners; //Field offset: 0x50
	private static readonly Stack<Tween> _PooledSequences; //Field offset: 0x58
	private static readonly List<Tween> _KillList; //Field offset: 0x60
	private static int _maxActiveLookupId; //Field offset: 0x68
	private static bool _requiresActiveReorganization; //Field offset: 0x6C
	private static int _reorganizeFromId; //Field offset: 0x70
	private static int _minPooledTweenerId; //Field offset: 0x74
	private static int _maxPooledTweenerId; //Field offset: 0x78
	private static bool _despawnAllCalledFromUpdateLoopCallback; //Field offset: 0x7C

	private static TweenManager() { }

	private static void AddActiveTween(Tween t) { }

	internal static void Despawn(Tween t, bool modifyActiveLists = true) { }

	private static void DespawnActiveTweens(List<Tween> tweens) { }

	internal static void ForceInit(Tween t, bool isSequenced = false) { }

	internal static TweenerCore<T1, T2, TPlugOptions> GetTweener() { }

	internal static bool Goto(Tween t, float to, bool andPlay = false, UpdateMode updateMode = 1) { }

	private static void IncreaseCapacities(CapacityIncreaseMode increaseMode) { }

	private static void MarkForKilling(Tween t) { }

	private static void RemoveActiveTween(Tween t) { }

	private static void ReorganizeActiveTweens() { }

	internal static void SetCapacities(int tweenersCapacity, int sequencesCapacity) { }

	internal static void Update(UpdateType updateType, float deltaTime, float independentTime) { }

}

