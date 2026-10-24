namespace Mono.Net.Security;

internal abstract class AsyncProtocolRequest
{
	[CompilerGenerated]
	private struct <InnerRead>d__25 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Nullable`1<Int32>> <>t__builder; //Field offset: 0x8
		public AsyncProtocolRequest <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private int <requestedSize>5__1; //Field offset: 0x30
		private Nullable<Int32> <totalRead>5__2; //Field offset: 0x34
		private ConfiguredTaskAwaiter<Int32> <>u__1; //Field offset: 0x40

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessOperation>d__24 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public CancellationToken cancellationToken; //Field offset: 0x20
		public AsyncProtocolRequest <>4__this; //Field offset: 0x28
		private AsyncOperationStatus <status>5__1; //Field offset: 0x30
		private AsyncOperationStatus <newStatus>5__2; //Field offset: 0x34
		private ConfiguredTaskAwaiter<Nullable<Int32>> <>u__1; //Field offset: 0x38
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <StartOperation>d__23 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<AsyncProtocolResult> <>t__builder; //Field offset: 0x8
		public AsyncProtocolRequest <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private readonly MobileAuthenticatedStream <Parent>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private readonly bool <RunSynchronously>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <UserResult>k__BackingField; //Field offset: 0x1C
	private int Started; //Field offset: 0x20
	private int RequestedSize; //Field offset: 0x24
	private int WriteRequested; //Field offset: 0x28
	private readonly object locker; //Field offset: 0x30

	public string Name
	{
		 get { } //Length: 40
	}

	public MobileAuthenticatedStream Parent
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public bool RunSynchronously
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public int UserResult
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public AsyncProtocolRequest(MobileAuthenticatedStream parent, bool sync) { }

	public string get_Name() { }

	[CompilerGenerated]
	public MobileAuthenticatedStream get_Parent() { }

	[CompilerGenerated]
	public bool get_RunSynchronously() { }

	[CompilerGenerated]
	public int get_UserResult() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<Nullable`1<Int32>> InnerRead(CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task ProcessOperation(CancellationToken cancellationToken) { }

	internal void RequestRead(int size) { }

	internal void RequestWrite() { }

	protected abstract AsyncOperationStatus Run(AsyncOperationStatus status) { }

	[CompilerGenerated]
	protected void set_UserResult(int value) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task<AsyncProtocolResult> StartOperation(CancellationToken cancellationToken) { }

	public virtual string ToString() { }

}

