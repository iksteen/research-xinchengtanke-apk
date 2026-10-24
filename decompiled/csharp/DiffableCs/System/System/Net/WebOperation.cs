namespace System.Net;

internal class WebOperation
{
	[CompilerGenerated]
	private struct <FinishReading>d__55 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public WebOperation <>4__this; //Field offset: 0x28
		private Exception <error>5__1; //Field offset: 0x30
		private bool <ok>5__2; //Field offset: 0x38
		private ConfiguredTaskAwaiter<Boolean> <>u__1; //Field offset: 0x40

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <Run>d__54 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public WebOperation <>4__this; //Field offset: 0x28
		private WebRequestStream <requestStream>5__1; //Field offset: 0x30
		private WebResponseStream <stream>5__2; //Field offset: 0x38
		private ConfiguredTaskAwaiter<WebRequestStream> <>u__1; //Field offset: 0x40
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WaitForCompletion>d__53 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<ValueTuple`2<Boolean, WebOperation>> <>t__builder; //Field offset: 0x8
		public WebOperation <>4__this; //Field offset: 0x20
		public bool ignoreErrors; //Field offset: 0x28
		private ConfiguredTaskAwaiter<ValueTuple<Boolean, WebOperation>> <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private readonly HttpWebRequest <Request>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private WebConnection <Connection>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ServicePoint <ServicePoint>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private readonly BufferOffsetSize <WriteBuffer>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private readonly bool <IsNtlmChallenge>k__BackingField; //Field offset: 0x30
	private CancellationTokenSource cts; //Field offset: 0x38
	private TaskCompletionSource<WebRequestStream> requestTask; //Field offset: 0x40
	private TaskCompletionSource<WebRequestStream> requestWrittenTask; //Field offset: 0x48
	private TaskCompletionSource<WebResponseStream> responseTask; //Field offset: 0x50
	private TaskCompletionSource<Boolean> completeResponseReadTask; //Field offset: 0x58
	private TaskCompletionSource<ValueTuple`2<Boolean, WebOperation>> finishedTask; //Field offset: 0x60
	private WebRequestStream writeStream; //Field offset: 0x68
	private WebResponseStream responseStream; //Field offset: 0x70
	private ExceptionDispatchInfo disposedInfo; //Field offset: 0x78
	private ExceptionDispatchInfo closedInfo; //Field offset: 0x80
	private WebOperation priorityRequest; //Field offset: 0x88
	private bool finishedReading; //Field offset: 0x90
	private int requestSent; //Field offset: 0x94

	public bool Aborted
	{
		 get { } //Length: 92
	}

	public bool Closed
	{
		 get { } //Length: 56
	}

	public private WebConnection Connection
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public bool IsNtlmChallenge
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public HttpWebRequest Request
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public private ServicePoint ServicePoint
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BufferOffsetSize WriteBuffer
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public WebRequestStream WriteStream
	{
		 get { } //Length: 36
	}

	public WebOperation(HttpWebRequest request, BufferOffsetSize writeBuffer, bool isNtlmChallenge, CancellationToken cancellationToken) { }

	[CompilerGenerated]
	private void <RegisterRequest>b__46_0() { }

	public void Abort() { }

	public void Close() { }

	internal void CompleteRequestWritten(WebRequestStream stream, Exception error = null) { }

	internal void CompleteResponseRead(bool ok, Exception error = null) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void FinishReading() { }

	public bool get_Aborted() { }

	public bool get_Closed() { }

	[CompilerGenerated]
	public WebConnection get_Connection() { }

	[CompilerGenerated]
	public bool get_IsNtlmChallenge() { }

	[CompilerGenerated]
	public HttpWebRequest get_Request() { }

	[CompilerGenerated]
	public ServicePoint get_ServicePoint() { }

	[CompilerGenerated]
	public BufferOffsetSize get_WriteBuffer() { }

	public WebRequestStream get_WriteStream() { }

	public Task<WebRequestStream> GetRequestStream() { }

	public Task<WebResponseStream> GetResponseStream() { }

	internal void RegisterRequest(ServicePoint servicePoint, WebConnection connection) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal void Run() { }

	[CompilerGenerated]
	private void set_Connection(WebConnection value) { }

	[CompilerGenerated]
	private void set_ServicePoint(ServicePoint value) { }

	private void SetCanceled() { }

	private ValueTuple<ExceptionDispatchInfo, Boolean> SetDisposed(ref ExceptionDispatchInfo field) { }

	private void SetError(Exception error) { }

	public void SetPriorityRequest(WebOperation operation) { }

	private void ThrowDisposed(ref ExceptionDispatchInfo field) { }

	internal void ThrowIfClosedOrDisposed(CancellationToken cancellationToken) { }

	internal void ThrowIfClosedOrDisposed() { }

	internal void ThrowIfDisposed(CancellationToken cancellationToken) { }

	internal void ThrowIfDisposed() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task<ValueTuple`2<Boolean, WebOperation>> WaitForCompletion(bool ignoreErrors) { }

}

