namespace System.Threading.Tasks;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Task : IThreadPoolWorkItem, IAsyncResult, IDisposable
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Action<Object> <>9__276_0; //Field offset: 0x8
		public static TimerCallback <>9__276_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal ContingentProperties <.cctor>b__295_0() { }

		internal bool <.cctor>b__295_1(Task t) { }

		internal bool <.cctor>b__295_2(object tc) { }

		internal void <Delay>b__276_0(object state) { }

		internal void <Delay>b__276_1(object state) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass178_0
	{
		public Task root; //Field offset: 0x10
		public bool replicasAreQuitting; //Field offset: 0x18
		public Action<Object> taskReplicaDelegate; //Field offset: 0x20
		public TaskCreationOptions creationOptionsForReplicas; //Field offset: 0x28
		public InternalTaskOptions internalOptionsForReplicas; //Field offset: 0x2C

		public <>c__DisplayClass178_0() { }

		internal void <ExecuteSelfReplicating>b__0(object <p0>) { }

	}

	public class ContingentProperties
	{
		internal ExecutionContext m_capturedContext; //Field offset: 0x10
		internal ManualResetEventSlim m_completionEvent; //Field offset: 0x18
		internal TaskExceptionHolder m_exceptionsHolder; //Field offset: 0x20
		internal CancellationToken m_cancellationToken; //Field offset: 0x28
		internal Shared<CancellationTokenRegistration> m_cancellationRegistration; //Field offset: 0x30
		internal int m_internalCancellationRequested; //Field offset: 0x38
		internal int m_completionCountdown; //Field offset: 0x3C
		internal List<Task> m_exceptionalChildren; //Field offset: 0x40

		public ContingentProperties() { }

		internal void DeregisterCancellationCallback() { }

		internal void SetCompleted() { }

	}

	private sealed class DelayPromise : Task<VoidTaskResult>
	{
		internal readonly CancellationToken Token; //Field offset: 0x58
		internal CancellationTokenRegistration Registration; //Field offset: 0x60
		internal Timer Timer; //Field offset: 0x78

		internal DelayPromise(CancellationToken token) { }

		internal void Complete() { }

	}

	private sealed class SetOnInvokeMres : ManualResetEventSlim, ITaskCompletionAction
	{

		internal SetOnInvokeMres() { }

		public override void Invoke(Task completingTask) { }

	}

	[ThreadStatic]
	internal static Task t_currentTask; //Field offset: 0x80000000
	[ThreadStatic]
	private static StackGuard t_stackGuard; //Field offset: 0x80000008
	internal static int s_taskIdCounter; //Field offset: 0x0
	private static readonly TaskFactory s_factory; //Field offset: 0x8
	private static readonly object s_taskCompletionSentinel; //Field offset: 0x10
	[FriendAccessAllowed]
	internal static bool s_asyncDebuggingEnabled; //Field offset: 0x18
	private static readonly Dictionary<Int32, Task> s_currentActiveTasks; //Field offset: 0x20
	private static readonly object s_activeTasksLock; //Field offset: 0x28
	private static readonly Action<Object> s_taskCancelCallback; //Field offset: 0x30
	private static readonly Func<ContingentProperties> s_createContingentProperties; //Field offset: 0x38
	private static Task s_completedTask; //Field offset: 0x40
	private static readonly Predicate<Task> s_IsExceptionObservedByParentPredicate; //Field offset: 0x48
	private static ContextCallback s_ecCallback; //Field offset: 0x50
	private static readonly Predicate<Object> s_IsTaskContinuationNullPredicate; //Field offset: 0x58
	private int m_taskId; //Field offset: 0x10
	internal object m_action; //Field offset: 0x18
	internal object m_stateObject; //Field offset: 0x20
	internal TaskScheduler m_taskScheduler; //Field offset: 0x28
	internal readonly Task m_parent; //Field offset: 0x30
	internal int m_stateFlags; //Field offset: 0x38
	private object m_continuationObject; //Field offset: 0x40
	internal ContingentProperties m_contingentProperties; //Field offset: 0x48

	public override object AsyncState
	{
		 get { } //Length: 8
	}

	internal CancellationToken CancellationToken
	{
		internal get { } //Length: 48
	}

	internal ExecutionContext CapturedContext
	{
		internal get { } //Length: 200
		internal set { } //Length: 144
	}

	internal ManualResetEventSlim CompletedEvent
	{
		internal get { } //Length: 252
	}

	public static Task CompletedTask
	{
		 get { } //Length: 176
	}

	public TaskCreationOptions CreationOptions
	{
		 get { } //Length: 24
	}

	internal static StackGuard CurrentStackGuard
	{
		internal get { } //Length: 192
	}

	public AggregateException Exception
	{
		 get { } //Length: 64
	}

	internal bool ExceptionRecorded
	{
		internal get { } //Length: 88
	}

	internal TaskScheduler ExecutingTaskScheduler
	{
		internal get { } //Length: 8
	}

	public static TaskFactory Factory
	{
		 get { } //Length: 100
	}

	internal override Task HandedOverChildReplica
	{
		internal get { } //Length: 8
		internal set { } //Length: 4
	}

	public int Id
	{
		 get { } //Length: 148
	}

	internal static Task InternalCurrent
	{
		internal get { } //Length: 100
	}

	public bool IsCanceled
	{
		 get { } //Length: 44
	}

	internal bool IsCancellationAcknowledged
	{
		internal get { } //Length: 36
	}

	internal bool IsCancellationRequested
	{
		internal get { } //Length: 84
	}

	internal bool IsChildReplica
	{
		internal get { } //Length: 24
	}

	public override bool IsCompleted
	{
		 get { } //Length: 112
	}

	internal bool IsDelegateInvoked
	{
		internal get { } //Length: 36
	}

	internal bool IsExceptionObservedByParent
	{
		internal get { } //Length: 36
	}

	public bool IsFaulted
	{
		 get { } //Length: 36
	}

	internal bool IsRanToCompletion
	{
		internal get { } //Length: 52
	}

	internal bool IsSelfReplicatingRoot
	{
		internal get { } //Length: 36
	}

	internal bool IsWaitNotificationEnabled
	{
		internal get { } //Length: 36
	}

	internal bool IsWaitNotificationEnabledOrNotRanToCompletion
	{
		internal get { } //Length: 52
	}

	internal TaskCreationOptions Options
	{
		internal get { } //Length: 104
	}

	internal override object SavedStateForNextReplica
	{
		internal get { } //Length: 8
	}

	internal override object SavedStateFromPreviousReplica
	{
		internal set { } //Length: 4
	}

	internal override bool ShouldNotifyDebuggerOfWaitCompletion
	{
		internal get { } //Length: 36
	}

	public TaskStatus Status
	{
		 get { } //Length: 108
	}

	private override WaitHandle System.IAsyncResult.AsyncWaitHandle
	{
		private get { } //Length: 144
	}

	private override bool System.IAsyncResult.CompletedSynchronously
	{
		private get { } //Length: 8
	}

	private static Task() { }

	internal Task(bool canceled, TaskCreationOptions creationOptions, CancellationToken ct) { }

	internal Task() { }

	internal Task(object state, TaskCreationOptions creationOptions, bool promiseStyle) { }

	internal Task(Delegate action, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler) { }

	private void AddCompletionAction(ITaskCompletionAction action, bool addBeforeOthers) { }

	internal void AddCompletionAction(ITaskCompletionAction action) { }

	internal void AddException(object exceptionObject, bool representsCancellation) { }

	internal void AddException(object exceptionObject) { }

	internal void AddExceptionsFromChildren() { }

	internal void AddNewChild() { }

	private bool AddTaskContinuation(object tc, bool addBeforeOthers) { }

	private bool AddTaskContinuationComplex(object tc, bool addBeforeOthers) { }

	[FriendAccessAllowed]
	internal static bool AddToActiveTasks(Task task) { }

	private void AssignCancellationToken(CancellationToken cancellationToken, Task antecedent, TaskContinuation continuation) { }

	internal bool AtomicStateUpdate(int newBits, int illegalBits, ref int oldFlags) { }

	internal bool AtomicStateUpdate(int newBits, int illegalBits) { }

	internal void CancellationCleanupLogic() { }

	public ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext) { }

	private Task ContinueWith(Action<Task> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, ref StackCrawlMark stackMark) { }

	public Task ContinueWith(Action<Task> continuationAction) { }

	public Task ContinueWith(Action<Task, Object> continuationAction, object state, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler) { }

	private Task ContinueWith(Action<Task, Object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, ref StackCrawlMark stackMark) { }

	internal void ContinueWithCore(Task continuationTask, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions options) { }

	private static ExecutionContext CopyExecutionContext(ExecutionContext capturedContext) { }

	internal override Task CreateReplicaTask(Action<Object> taskReplicaDelegate, object stateObject, Task parentTask, TaskScheduler taskScheduler, TaskCreationOptions creationOptionsForReplica, InternalTaskOptions internalOptionsForReplica) { }

	internal static void CreationOptionsFromContinuationOptions(TaskContinuationOptions continuationOptions, out TaskCreationOptions creationOptions, out InternalTaskOptions internalOptions) { }

	public static Task Delay(int millisecondsDelay) { }

	public static Task Delay(int millisecondsDelay, CancellationToken cancellationToken) { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	internal void DisregardChild() { }

	internal ContingentProperties EnsureContingentPropertiesInitialized(bool needsProtection) { }

	private ContingentProperties EnsureContingentPropertiesInitializedCore(bool needsProtection) { }

	private void Execute() { }

	internal bool ExecuteEntry(bool bPreventDoubleExecution) { }

	private static void ExecuteSelfReplicating(Task root) { }

	private void ExecuteWithThreadLocal(ref Task currentTaskSlot) { }

	private static void ExecutionContextCallback(object obj) { }

	internal void Finish(bool bUserDelegateExecuted) { }

	internal void FinishContinuations() { }

	internal void FinishStageThree() { }

	internal void FinishStageTwo() { }

	internal void FinishThreadAbortedTask(bool bTAEAddedToExceptionHolder, bool delegateRan) { }

	internal bool FireTaskScheduledIfNeeded(TaskScheduler ts) { }

	internal static Task<TResult> FromCancellation(OperationCanceledException exception) { }

	[FriendAccessAllowed]
	internal static Task<TResult> FromCancellation(CancellationToken cancellationToken) { }

	[FriendAccessAllowed]
	internal static Task FromCancellation(CancellationToken cancellationToken) { }

	public static Task<TResult> FromException(Exception exception) { }

	public static Task FromException(Exception exception) { }

	public static Task<TResult> FromResult(TResult result) { }

	public override object get_AsyncState() { }

	internal CancellationToken get_CancellationToken() { }

	internal ExecutionContext get_CapturedContext() { }

	internal ManualResetEventSlim get_CompletedEvent() { }

	public static Task get_CompletedTask() { }

	public TaskCreationOptions get_CreationOptions() { }

	internal static StackGuard get_CurrentStackGuard() { }

	public AggregateException get_Exception() { }

	internal bool get_ExceptionRecorded() { }

	internal TaskScheduler get_ExecutingTaskScheduler() { }

	public static TaskFactory get_Factory() { }

	internal override Task get_HandedOverChildReplica() { }

	public int get_Id() { }

	internal static Task get_InternalCurrent() { }

	public bool get_IsCanceled() { }

	internal bool get_IsCancellationAcknowledged() { }

	internal bool get_IsCancellationRequested() { }

	internal bool get_IsChildReplica() { }

	public override bool get_IsCompleted() { }

	internal bool get_IsDelegateInvoked() { }

	internal bool get_IsExceptionObservedByParent() { }

	public bool get_IsFaulted() { }

	internal bool get_IsRanToCompletion() { }

	internal bool get_IsSelfReplicatingRoot() { }

	internal bool get_IsWaitNotificationEnabled() { }

	internal bool get_IsWaitNotificationEnabledOrNotRanToCompletion() { }

	internal TaskCreationOptions get_Options() { }

	internal override object get_SavedStateForNextReplica() { }

	internal override bool get_ShouldNotifyDebuggerOfWaitCompletion() { }

	public TaskStatus get_Status() { }

	public TaskAwaiter GetAwaiter() { }

	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo() { }

	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos() { }

	private AggregateException GetExceptions(bool includeTaskCanceledExceptions) { }

	private void HandleException(Exception unhandledException) { }

	internal override void InnerInvoke() { }

	internal void InnerInvokeWithArg(Task childTask) { }

	internal bool InternalCancel(bool bCancelNonExecutingOnly) { }

	internal static Task InternalCurrentIfAttached(TaskCreationOptions creationOptions) { }

	internal static Task InternalStartNew(Task creatingTask, Delegate action, object state, CancellationToken cancellationToken, TaskScheduler scheduler, TaskCreationOptions options, InternalTaskOptions internalOptions, ref StackCrawlMark stackMark) { }

	internal bool InternalWait(int millisecondsTimeout, CancellationToken cancellationToken) { }

	private static bool IsCompletedMethod(int flags) { }

	private void LogFinishCompletionNotification() { }

	internal bool MarkStarted() { }

	internal static int NewId() { }

	private void NotifyDebuggerOfWaitCompletion() { }

	internal bool NotifyDebuggerOfWaitCompletionIfNecessary() { }

	internal static TaskCreationOptions OptionsMethod(int flags) { }

	internal void PossiblyCaptureContext(ref StackCrawlMark stackMark) { }

	internal void ProcessChildCompletion(Task childTask) { }

	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord, object cancellationException) { }

	internal void RecordInternalCancellationRequest() { }

	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord) { }

	internal void RemoveContinuation(object continuationObject) { }

	[FriendAccessAllowed]
	internal static void RemoveFromActiveTasks(int taskId) { }

	public static Task<TResult> Run(Func<Task`1<TResult>> function, CancellationToken cancellationToken) { }

	public static Task<TResult> Run(Func<Task`1<TResult>> function) { }

	public static Task<TResult> Run(Func<TResult> function) { }

	public static Task Run(Action action) { }

	internal void ScheduleAndStart(bool needsProtection) { }

	internal void set_CapturedContext(ExecutionContext value) { }

	internal override void set_HandedOverChildReplica(Task value) { }

	internal override void set_SavedStateFromPreviousReplica(object value) { }

	private void SetCancellationAcknowledged() { }

	internal void SetContinuationForAwait(Action continuationAction, bool continueOnCapturedContext, bool flowExecutionContext, ref StackCrawlMark stackMark) { }

	internal void SetNotificationForWaitCompletion(bool enabled) { }

	internal override bool ShouldReplicate() { }

	private bool SpinThenBlockingWait(int millisecondsTimeout, CancellationToken cancellationToken) { }

	private bool SpinWait(int millisecondsTimeout) { }

	private override WaitHandle System.IAsyncResult.get_AsyncWaitHandle() { }

	private override bool System.IAsyncResult.get_CompletedSynchronously() { }

	private override void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem() { }

	private override void System.Threading.IThreadPoolWorkItem.MarkAborted(ThreadAbortException tae) { }

	private static void TaskCancelCallback(object o) { }

	internal void TaskConstructorCore(object action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, InternalTaskOptions internalOptions, TaskScheduler scheduler) { }

	internal void ThrowIfExceptional(bool includeTaskCanceledExceptions) { }

	internal void UpdateExceptionObservedStatus() { }

	public void Wait() { }

	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken) { }

	public static Task<Task> WhenAny(IEnumerable<Task> tasks) { }

	public static Task<Task> WhenAny(Task[] tasks) { }

	private bool WrappedTryRunInline() { }

}

