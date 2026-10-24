namespace System.Threading.Tasks;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Task : Task
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c<TResult> <>9; //Field offset: 0x0

		private static <>c() { }

		public <>c() { }

		internal Task<TResult> <.cctor>b__64_0(Task<Task> completed) { }

	}

	private static readonly TaskFactory<TResult> s_Factory; //Field offset: 0x0
	internal static readonly Func<Task`1<Task>, Task`1<TResult>> TaskWhenAnyCast; //Field offset: 0x0
	internal TResult m_result; //Field offset: 0x0

	public static TaskFactory<TResult> Factory
	{
		 get { } //Length: 236
	}

	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public TResult Result
	{
		 get { } //Length: 120
	}

	internal TResult ResultOnSuccess
	{
		internal get { } //Length: 8
	}

	private static Task`1() { }

	internal Task`1(Delegate valueSelector, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler) { }

	internal Task`1(Func<Object, TResult> valueSelector, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler, ref StackCrawlMark stackMark) { }

	internal Task`1(Func<TResult> valueSelector, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler) { }

	internal Task`1(Func<TResult> valueSelector, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler, ref StackCrawlMark stackMark) { }

	internal Task`1() { }

	internal Task`1(bool canceled, TResult result, TaskCreationOptions creationOptions, CancellationToken ct) { }

	internal Task`1(TResult result) { }

	internal Task`1(object state, TaskCreationOptions options) { }

	public Task`1(Func<Object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions) { }

	public ConfiguredTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext) { }

	public Task<TNewResult> ContinueWith(Func<Task`1<TResult>, TNewResult> continuationFunction, TaskContinuationOptions continuationOptions) { }

	internal Task<TNewResult> ContinueWith(Func<Task`1<TResult>, TNewResult> continuationFunction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, ref StackCrawlMark stackMark) { }

	internal void DangerousSetResult(TResult result) { }

	public static TaskFactory<TResult> get_Factory() { }

	public TResult get_Result() { }

	internal TResult get_ResultOnSuccess() { }

	public TaskAwaiter<TResult> GetAwaiter() { }

	internal TResult GetResultCore(bool waitCompletionNotification) { }

	internal virtual void InnerInvoke() { }

	internal static Task<TResult> StartNew(Task parent, Func<Object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler, ref StackCrawlMark stackMark) { }

	internal static Task<TResult> StartNew(Task parent, Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler, ref StackCrawlMark stackMark) { }

	internal bool TrySetCanceled(CancellationToken tokenToRecord) { }

	internal bool TrySetCanceled(CancellationToken tokenToRecord, object cancellationException) { }

	internal bool TrySetException(object exceptionObject) { }

	internal bool TrySetResult(TResult result) { }

}

