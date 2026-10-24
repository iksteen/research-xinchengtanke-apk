namespace System.Threading.Tasks;

internal class AwaitTaskContinuation : TaskContinuation, IThreadPoolWorkItem
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static WaitCallback <>9__17_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal void <ThrowAsyncIfNecessary>b__17_0(object s) { }

	}

	private static ContextCallback s_invokeActionCallback; //Field offset: 0x0
	private readonly ExecutionContext m_capturedContext; //Field offset: 0x10
	protected readonly Action m_action; //Field offset: 0x18

	internal static bool IsValidLocationForInlining
	{
		internal get { } //Length: 356
	}

	internal AwaitTaskContinuation(Action action, bool flowExecutionContext, ref StackCrawlMark stackMark) { }

	internal AwaitTaskContinuation(Action action, bool flowExecutionContext) { }

	protected Task CreateTask(Action<Object> action, object state, TaskScheduler scheduler) { }

	private void ExecuteWorkItemHelper() { }

	internal static bool get_IsValidLocationForInlining() { }

	protected static ContextCallback GetInvokeActionCallback() { }

	private static void InvokeAction(object state) { }

	internal virtual void Run(Task task, bool canInlineContinuationTask) { }

	protected void RunCallback(ContextCallback callback, object state, ref Task currentTask) { }

	internal static void RunOrScheduleAction(Action action, bool allowInlining, ref Task currentTask) { }

	private override void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem() { }

	private override void System.Threading.IThreadPoolWorkItem.MarkAborted(ThreadAbortException tae) { }

	protected static void ThrowAsyncIfNecessary(Exception exc) { }

	internal static void UnsafeScheduleAction(Action action, Task task) { }

}

