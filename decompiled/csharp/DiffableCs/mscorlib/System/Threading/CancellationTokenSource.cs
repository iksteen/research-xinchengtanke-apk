namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CancellationTokenSource : IDisposable
{
	private static readonly CancellationTokenSource _staticSource_Set; //Field offset: 0x0
	private static readonly CancellationTokenSource _staticSource_NotCancelable; //Field offset: 0x8
	private static readonly int s_nLists; //Field offset: 0x10
	private static readonly Action<Object> s_LinkedTokenCancelDelegate; //Field offset: 0x18
	private static readonly TimerCallback s_timerCallback; //Field offset: 0x20
	private ManualResetEvent m_kernelEvent; //Field offset: 0x10
	private SparselyPopulatedArray<CancellationCallbackInfo>[] m_registeredCallbacksLists; //Field offset: 0x18
	private int m_state; //Field offset: 0x20
	private int m_threadIDExecutingCallbacks; //Field offset: 0x24
	private bool m_disposed; //Field offset: 0x28
	private CancellationTokenRegistration[] m_linkingRegistrations; //Field offset: 0x30
	private CancellationCallbackInfo m_executingCallback; //Field offset: 0x38
	private Timer m_timer; //Field offset: 0x40

	internal bool CanBeCanceled
	{
		internal get { } //Length: 40
	}

	internal CancellationCallbackInfo ExecutingCallback
	{
		internal get { } //Length: 36
	}

	internal bool IsCancellationCompleted
	{
		internal get { } //Length: 40
	}

	public bool IsCancellationRequested
	{
		 get { } //Length: 40
	}

	internal bool IsDisposed
	{
		internal get { } //Length: 8
	}

	internal int ThreadIDExecutingCallbacks
	{
		internal get { } //Length: 36
		internal set { } //Length: 40
	}

	public CancellationToken Token
	{
		 get { } //Length: 52
	}

	private static CancellationTokenSource() { }

	public CancellationTokenSource() { }

	private CancellationTokenSource(bool set) { }

	public void Cancel(bool throwOnFirstException) { }

	public void Cancel() { }

	public void CancelAfter(int millisecondsDelay) { }

	private void CancellationCallbackCoreWork(CancellationCallbackCoreWorkArguments args) { }

	private void CancellationCallbackCoreWork_OnSyncContext(object obj) { }

	public static CancellationTokenSource CreateLinkedTokenSource(CancellationToken[] tokens) { }

	public static CancellationTokenSource CreateLinkedTokenSource(CancellationToken token1, CancellationToken token2) { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	private void ExecuteCallbackHandlers(bool throwOnFirstException) { }

	internal bool get_CanBeCanceled() { }

	internal CancellationCallbackInfo get_ExecutingCallback() { }

	internal bool get_IsCancellationCompleted() { }

	public bool get_IsCancellationRequested() { }

	internal bool get_IsDisposed() { }

	internal int get_ThreadIDExecutingCallbacks() { }

	public CancellationToken get_Token() { }

	internal static CancellationTokenSource InternalGetStaticSource(bool set) { }

	internal CancellationTokenRegistration InternalRegister(Action<Object> callback, object stateForCallback, SynchronizationContext targetSyncContext, ExecutionContext executionContext) { }

	private static void LinkedTokenCancelDelegate(object source) { }

	private void NotifyCancellation(bool throwOnFirstException) { }

	internal void set_ThreadIDExecutingCallbacks(int value) { }

	internal void ThrowIfDisposed() { }

	private static void ThrowObjectDisposedException() { }

	private static void TimerCallbackLogic(object obj) { }

	internal void WaitForCallbackToComplete(CancellationCallbackInfo callbackInfo) { }

}

