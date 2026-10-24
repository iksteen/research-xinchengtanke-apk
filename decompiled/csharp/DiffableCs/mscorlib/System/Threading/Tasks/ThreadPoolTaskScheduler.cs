namespace System.Threading.Tasks;

internal sealed class ThreadPoolTaskScheduler : TaskScheduler
{
	private static readonly ParameterizedThreadStart s_longRunningThreadWork; //Field offset: 0x0

	internal virtual bool RequiresAtomicStartTransition
	{
		internal get { } //Length: 8
	}

	private static ThreadPoolTaskScheduler() { }

	internal ThreadPoolTaskScheduler() { }

	internal virtual bool get_RequiresAtomicStartTransition() { }

	private static void LongRunningThreadWork(object obj) { }

	internal virtual void NotifyWorkItemProgress() { }

	protected private virtual void QueueTask(Task task) { }

	protected private virtual bool TryDequeue(Task task) { }

	protected virtual bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued) { }

}

