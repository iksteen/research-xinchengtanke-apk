namespace System.Net;

internal class WebResponseStream : WebConnectionStream
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass48_0
	{
		public WebResponseStream <>4__this; //Field offset: 0x10
		public Byte[] buffer; //Field offset: 0x18
		public int offset; //Field offset: 0x20
		public int size; //Field offset: 0x24

		public <>c__DisplayClass48_0() { }

		internal Task<ValueTuple`2<Int32, Int32>> <ReadAsync>b__0(CancellationToken ct) { }

		internal void <ReadAsync>b__1() { }

	}

	[CompilerGenerated]
	private struct <EnsureReadAsync>d__51 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Int32> <>t__builder; //Field offset: 0x8
		public WebResponseStream <>4__this; //Field offset: 0x20
		private Byte[] <morebytes>5__1; //Field offset: 0x28
		public CancellationToken cancellationToken; //Field offset: 0x30
		private int <nbytes>5__2; //Field offset: 0x38
		public Byte[] buffer; //Field offset: 0x40
		public int offset; //Field offset: 0x48
		public int size; //Field offset: 0x4C
		private ConfiguredTaskAwaiter<Int32> <>u__1; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <Initialize>d__56 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebResponseStream <>4__this; //Field offset: 0x20
		public BufferOffsetSize buffer; //Field offset: 0x28
		public CancellationToken cancellationToken; //Field offset: 0x30
		private string <me>5__1; //Field offset: 0x38
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x40

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <InitReadAsync>d__61 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebResponseStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private BufferOffsetSize <buffer>5__1; //Field offset: 0x30
		private ReadState <state>5__2; //Field offset: 0x38
		private int <position>5__3; //Field offset: 0x3C
		private ConfiguredTaskAwaiter<Int32> <>u__1; //Field offset: 0x40
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x50

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <InnerReadAsync>d__50 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Int32> <>t__builder; //Field offset: 0x8
		public WebResponseStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		public Byte[] buffer; //Field offset: 0x30
		public int offset; //Field offset: 0x38
		public int size; //Field offset: 0x3C
		private bool <done>5__1; //Field offset: 0x40
		private int <nbytes>5__2; //Field offset: 0x44
		private ConfiguredTaskAwaiter<Int32> <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessRead>d__49 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<ValueTuple`2<Int32, Int32>> <>t__builder; //Field offset: 0x8
		public CancellationToken cancellationToken; //Field offset: 0x20
		public WebResponseStream <>4__this; //Field offset: 0x28
		public int size; //Field offset: 0x30
		public Byte[] buffer; //Field offset: 0x38
		public int offset; //Field offset: 0x40
		private int <oldBytes>5__1; //Field offset: 0x44
		private ConfiguredTaskAwaiter<Int32> <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ReadAllAsync>d__57 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebResponseStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private WebCompletionSource <completion>5__1; //Field offset: 0x30
		private Task <timeoutTask>5__2; //Field offset: 0x38
		public bool resending; //Field offset: 0x40
		private MemoryStream <ms>5__3; //Field offset: 0x48
		private BufferOffsetSize <buffer>5__4; //Field offset: 0x50
		private int <read>5__5; //Field offset: 0x58
		private Byte[] <b>5__6; //Field offset: 0x60
		private int <remaining>5__7; //Field offset: 0x68
		private int <readSize>5__8; //Field offset: 0x6C
		private int <new_size>5__9; //Field offset: 0x70
		private ConfiguredTaskAwaiter<Task> <>u__1; //Field offset: 0x78
		private TaskAwaiter<Int32> <>u__2; //Field offset: 0x88

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ReadAsync>d__48 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Int32> <>t__builder; //Field offset: 0x8
		public WebResponseStream <>4__this; //Field offset: 0x20
		public Byte[] buffer; //Field offset: 0x28
		public int offset; //Field offset: 0x30
		public int size; //Field offset: 0x34
		public CancellationToken cancellationToken; //Field offset: 0x38
		private WebCompletionSource <completion>5__1; //Field offset: 0x40
		private <>c__DisplayClass48_0 <>8__2; //Field offset: 0x48
		private Exception <throwMe>5__3; //Field offset: 0x50
		private int <oldBytes>5__4; //Field offset: 0x58
		private int <nbytes>5__5; //Field offset: 0x5C
		private ConfiguredTaskAwaiter<Boolean> <>u__1; //Field offset: 0x60
		private ConfiguredTaskAwaiter<ValueTuple<Int32, Int32>> <>u__2; //Field offset: 0x70

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private BufferOffsetSize readBuffer; //Field offset: 0x68
	private long contentLength; //Field offset: 0x70
	private long totalRead; //Field offset: 0x78
	private bool nextReadCalled; //Field offset: 0x80
	private int stream_length; //Field offset: 0x84
	private WebCompletionSource pendingRead; //Field offset: 0x88
	private object locker; //Field offset: 0x90
	private int nestedRead; //Field offset: 0x98
	private bool read_eof; //Field offset: 0x9C
	[CompilerGenerated]
	private readonly WebRequestStream <RequestStream>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private WebHeaderCollection <Headers>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private HttpStatusCode <StatusCode>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private string <StatusDescription>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private Version <Version>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private bool <KeepAlive>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private bool <ChunkedRead>k__BackingField; //Field offset: 0xC9
	[CompilerGenerated]
	private MonoChunkStream <ChunkStream>k__BackingField; //Field offset: 0xD0

	public virtual bool CanRead
	{
		 get { } //Length: 8
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 8
	}

	protected private bool ChunkedRead
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 12
	}

	protected private MonoChunkStream ChunkStream
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool ExpectContent
	{
		private get { } //Length: 148
	}

	public private WebHeaderCollection Headers
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private bool KeepAlive
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 12
	}

	public virtual long Length
	{
		 get { } //Length: 8
	}

	public WebRequestStream RequestStream
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public private HttpStatusCode StatusCode
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private string StatusDescription
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private Version Version
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public WebResponseStream(WebRequestStream request) { }

	private bool CheckAuthHeader(string headerName) { }

	protected virtual void Close_internal(ref bool disposed) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<Int32> EnsureReadAsync(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanWrite() { }

	[CompilerGenerated]
	protected bool get_ChunkedRead() { }

	[CompilerGenerated]
	protected MonoChunkStream get_ChunkStream() { }

	private bool get_ExpectContent() { }

	[CompilerGenerated]
	public WebHeaderCollection get_Headers() { }

	[CompilerGenerated]
	public bool get_KeepAlive() { }

	public virtual long get_Length() { }

	[CompilerGenerated]
	public WebRequestStream get_RequestStream() { }

	[CompilerGenerated]
	public HttpStatusCode get_StatusCode() { }

	[CompilerGenerated]
	public string get_StatusDescription() { }

	[CompilerGenerated]
	public Version get_Version() { }

	private WebException GetReadException(WebExceptionStatus status, Exception error, string where) { }

	private bool GetResponse(BufferOffsetSize buffer, ref int pos, ref ReadState state) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task Initialize(BufferOffsetSize buffer, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task InitReadAsync(CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task<Int32> InnerReadAsync(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	private bool IsNtlmAuth() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<ValueTuple`2<Int32, Int32>> ProcessRead(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task ReadAllAsync(bool resending, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	[CompilerGenerated]
	private void set_ChunkedRead(bool value) { }

	[CompilerGenerated]
	private void set_ChunkStream(MonoChunkStream value) { }

	[CompilerGenerated]
	private void set_Headers(WebHeaderCollection value) { }

	[CompilerGenerated]
	private void set_KeepAlive(bool value) { }

	[CompilerGenerated]
	private void set_StatusCode(HttpStatusCode value) { }

	[CompilerGenerated]
	private void set_StatusDescription(string value) { }

	[CompilerGenerated]
	private void set_Version(Version value) { }

	public virtual Task WriteAsync(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

}

