namespace System.Net;

internal class ServicePointScheduler
{
	[CompilerGenerated]
	private struct <StartScheduler>d__32 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public ServicePointScheduler <>4__this; //Field offset: 0x28
		private List<Task> <taskList>5__1; //Field offset: 0x30
		private ValueTuple<ConnectionGroup, WebOperation>[] <operationArray>5__2; //Field offset: 0x38
		private ValueTuple<ConnectionGroup, WebConnection, Task>[] <idleArray>5__3; //Field offset: 0x40
		private ConfiguredTaskAwaiter<Task> <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private class AsyncManualResetEvent
	{
		[CompilerGenerated]
		private sealed class <>c
		{
			public static readonly <>c <>9; //Field offset: 0x0
			public static Func<Object, Boolean> <>9__4_0; //Field offset: 0x8

			private static <>c() { }

			public <>c() { }

			internal bool <Set>b__4_0(object s) { }

		}

		[CompilerGenerated]
		private struct <WaitAsync>d__3 : IAsyncStateMachine
		{
			public int <>1__state; //Field offset: 0x0
			public AsyncTaskMethodBuilder<Boolean> <>t__builder; //Field offset: 0x8
			public int millisecondTimeout; //Field offset: 0x20
			public AsyncManualResetEvent <>4__this; //Field offset: 0x28
			private Task <timeoutTask>5__1; //Field offset: 0x30
			private ConfiguredTaskAwaiter<Task> <>u__1; //Field offset: 0x38

			private override void MoveNext() { }

			[DebuggerHidden]
			private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

		}

		private TaskCompletionSource<Boolean> m_tcs; //Field offset: 0x10

		public AsyncManualResetEvent(bool state) { }

		public void Reset() { }

		public void Set() { }

		[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public Task<Boolean> WaitAsync(int millisecondTimeout) { }

	}

	private class ConnectionGroup
	{
		private static int nextId; //Field offset: 0x0
		[CompilerGenerated]
		private readonly ServicePointScheduler <Scheduler>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private readonly string <Name>k__BackingField; //Field offset: 0x18
		public readonly int ID; //Field offset: 0x20
		private LinkedList<WebConnection> connections; //Field offset: 0x28
		private LinkedList<WebOperation> queue; //Field offset: 0x30

		public ServicePointScheduler Scheduler
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public ConnectionGroup(ServicePointScheduler scheduler, string name) { }

		public void Cleanup() { }

		public ValueTuple<WebConnection, Boolean> CreateOrReuseConnection(WebOperation operation, bool force) { }

		public void EnqueueOperation(WebOperation operation) { }

		public WebConnection FindIdleConnection(WebOperation operation) { }

		[CompilerGenerated]
		public ServicePointScheduler get_Scheduler() { }

		public WebOperation GetNextOperation() { }

		public bool IsEmpty() { }

		public void RemoveConnection(WebConnection connection) { }

	}

	private static int nextId; //Field offset: 0x0
	[CompilerGenerated]
	private readonly ServicePoint <ServicePoint>k__BackingField; //Field offset: 0x10
	private int running; //Field offset: 0x18
	private int maxIdleTime; //Field offset: 0x1C
	private AsyncManualResetEvent schedulerEvent; //Field offset: 0x20
	private ConnectionGroup defaultGroup; //Field offset: 0x28
	private Dictionary<String, ConnectionGroup> groups; //Field offset: 0x30
	private LinkedList<ValueTuple`2<ConnectionGroup, WebOperation>> operations; //Field offset: 0x38
	private LinkedList<ValueTuple`3<ConnectionGroup, WebConnection, Task>> idleConnections; //Field offset: 0x40
	private int currentConnections; //Field offset: 0x48
	private int connectionLimit; //Field offset: 0x4C
	private DateTime idleSince; //Field offset: 0x50
	public readonly int ID; //Field offset: 0x58

	public int ConnectionLimit
	{
		 get { } //Length: 8
	}

	public int MaxIdleTime
	{
		 get { } //Length: 8
	}

	public ServicePoint ServicePoint
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public ServicePointScheduler(ServicePoint servicePoint, int connectionLimit, int maxIdleTime) { }

	private void Cleanup() { }

	private void CloseIdleConnection(ConnectionGroup group, WebConnection connection) { }

	public int get_ConnectionLimit() { }

	public int get_MaxIdleTime() { }

	[CompilerGenerated]
	public ServicePoint get_ServicePoint() { }

	private ConnectionGroup GetConnectionGroup(string name) { }

	private void OnConnectionClosed(WebConnection connection) { }

	private void OnConnectionCreated(WebConnection connection) { }

	private bool OperationCompleted(ConnectionGroup group, WebOperation operation, Task<ValueTuple`2<Boolean, WebOperation>> task) { }

	private void RemoveIdleConnection(WebConnection connection) { }

	private void RemoveOperation(WebOperation operation) { }

	public void Run() { }

	private void RunSchedulerIteration() { }

	private bool SchedulerIteration(ConnectionGroup group) { }

	public void SendRequest(WebOperation operation, string groupName) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void StartScheduler() { }

}

