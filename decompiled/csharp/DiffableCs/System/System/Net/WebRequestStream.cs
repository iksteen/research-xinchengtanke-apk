namespace System.Net;

internal class WebRequestStream : WebConnectionStream
{
	[CompilerGenerated]
	private struct <FinishWriting>d__30 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <Initialize>d__34 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x30
		private TaskAwaiter <>u__2; //Field offset: 0x40

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessWrite>d__32 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		public int size; //Field offset: 0x30
		public Byte[] buffer; //Field offset: 0x38
		public int offset; //Field offset: 0x40
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <SetHeadersAsync>d__35 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		public bool setInternalLength; //Field offset: 0x30
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WriteAsync>d__31 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		public Byte[] buffer; //Field offset: 0x30
		public int offset; //Field offset: 0x38
		public int size; //Field offset: 0x3C
		private WebCompletionSource <completion>5__1; //Field offset: 0x40
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x48
		private TaskAwaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WriteChunkTrailer_inner>d__37 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WriteChunkTrailer>d__38 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		private Task <timeoutTask>5__1; //Field offset: 0x28
		private CancellationTokenSource <cts>5__2; //Field offset: 0x30
		private ConfiguredTaskAwaiter<Task> <>u__1; //Field offset: 0x38
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WriteRequestAsync>d__36 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public WebRequestStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private BufferOffsetSize <buffer>5__1; //Field offset: 0x30
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x38
		private TaskAwaiter <>u__2; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private static Byte[] crlf; //Field offset: 0x0
	private MemoryStream writeBuffer; //Field offset: 0x68
	private bool requestWritten; //Field offset: 0x70
	private bool allowBuffering; //Field offset: 0x71
	private bool sendChunked; //Field offset: 0x72
	private WebCompletionSource pendingWrite; //Field offset: 0x78
	private long totalWritten; //Field offset: 0x80
	private Byte[] headers; //Field offset: 0x88
	private bool headersSent; //Field offset: 0x90
	private int completeRequestWritten; //Field offset: 0x94
	private int chunkTrailerWritten; //Field offset: 0x98
	[CompilerGenerated]
	private readonly bool <KeepAlive>k__BackingField; //Field offset: 0x9C

	public virtual bool CanRead
	{
		 get { } //Length: 8
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 8
	}

	internal bool HasWriteBuffer
	{
		internal get { } //Length: 52
	}

	public bool KeepAlive
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public virtual long Length
	{
		 get { } //Length: 64
	}

	internal int WriteBufferLength
	{
		internal get { } //Length: 72
	}

	private static WebRequestStream() { }

	public WebRequestStream(WebConnection connection, WebOperation operation, Stream stream, WebConnectionTunnel tunnel) { }

	private void CheckWriteOverflow(long contentLength, long totalWritten, long size) { }

	protected virtual void Close_internal(ref bool disposed) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task FinishWriting(CancellationToken cancellationToken) { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanWrite() { }

	internal bool get_HasWriteBuffer() { }

	[CompilerGenerated]
	public bool get_KeepAlive() { }

	public virtual long get_Length() { }

	internal int get_WriteBufferLength() { }

	internal BufferOffsetSize GetWriteBuffer() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task Initialize(CancellationToken cancellationToken) { }

	internal void KillBuffer() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task ProcessWrite(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task SetHeadersAsync(bool setInternalLength, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Task WriteAsync(Byte[] buffer, int offset, int size, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task WriteChunkTrailer() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task WriteChunkTrailer_inner(CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task WriteRequestAsync(CancellationToken cancellationToken) { }

}

