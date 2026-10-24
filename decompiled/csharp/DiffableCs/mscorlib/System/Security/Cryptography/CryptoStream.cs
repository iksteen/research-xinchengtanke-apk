namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CryptoStream : Stream, IDisposable
{
	[CompilerGenerated]
	private struct <ReadAsyncInternal>d__34 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Int32> <>t__builder; //Field offset: 0x8
		public CryptoStream <>4__this; //Field offset: 0x20
		public int count; //Field offset: 0x28
		public int offset; //Field offset: 0x2C
		public Byte[] buffer; //Field offset: 0x30
		public CancellationToken cancellationToken; //Field offset: 0x38
		private Byte[] <tempInputBuffer>5__1; //Field offset: 0x40
		private int <currentOutputIndex>5__2; //Field offset: 0x48
		private int <bytesToDeliver>5__3; //Field offset: 0x4C
		private SemaphoreSlim <sem>5__4; //Field offset: 0x50
		private HopToThreadPoolAwaitable <>u__1; //Field offset: 0x58
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x60
		private int <>7__wrap1; //Field offset: 0x70
		private ConfiguredTaskAwaiter<Int32> <>u__3; //Field offset: 0x78

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WriteAsyncInternal>d__37 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public CryptoStream <>4__this; //Field offset: 0x20
		public int count; //Field offset: 0x28
		public int offset; //Field offset: 0x2C
		public Byte[] buffer; //Field offset: 0x30
		public CancellationToken cancellationToken; //Field offset: 0x38
		private int <bytesToWrite>5__1; //Field offset: 0x40
		private int <currentInputIndex>5__2; //Field offset: 0x44
		private int <numWholeBlocksInBytes>5__3; //Field offset: 0x48
		private SemaphoreSlim <sem>5__4; //Field offset: 0x50
		private HopToThreadPoolAwaitable <>u__1; //Field offset: 0x58
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x60

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private struct HopToThreadPoolAwaitable : INotifyCompletion
	{

		public bool IsCompleted
		{
			 get { } //Length: 8
		}

		public bool get_IsCompleted() { }

		public HopToThreadPoolAwaitable GetAwaiter() { }

		public void GetResult() { }

		public override void OnCompleted(Action continuation) { }

	}

	private Stream _stream; //Field offset: 0x28
	private ICryptoTransform _Transform; //Field offset: 0x30
	private Byte[] _InputBuffer; //Field offset: 0x38
	private int _InputBufferIndex; //Field offset: 0x40
	private int _InputBlockSize; //Field offset: 0x44
	private Byte[] _OutputBuffer; //Field offset: 0x48
	private int _OutputBufferIndex; //Field offset: 0x50
	private int _OutputBlockSize; //Field offset: 0x54
	private CryptoStreamMode _transformMode; //Field offset: 0x58
	private bool _canRead; //Field offset: 0x5C
	private bool _canWrite; //Field offset: 0x5D
	private bool _finalBlockTransformed; //Field offset: 0x5E

	public virtual bool CanRead
	{
		 get { } //Length: 8
	}

	public virtual bool CanSeek
	{
		 get { } //Length: 8
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 8
	}

	public bool HasFlushedFinalBlock
	{
		 get { } //Length: 8
	}

	public virtual long Length
	{
		 get { } //Length: 92
	}

	public virtual long Position
	{
		 get { } //Length: 92
		 set { } //Length: 92
	}

	public CryptoStream(Stream stream, ICryptoTransform transform, CryptoStreamMode mode) { }

	public void Clear() { }

	protected virtual void Dispose(bool disposing) { }

	public virtual void Flush() { }

	public void FlushFinalBlock() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanSeek() { }

	public virtual bool get_CanWrite() { }

	public bool get_HasFlushedFinalBlock() { }

	public virtual long get_Length() { }

	public virtual long get_Position() { }

	private void InitializeBuffer() { }

	public virtual int Read(out Byte[] buffer, int offset, int count) { }

	public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<Int32> ReadAsyncInternal(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public virtual long Seek(long offset, SeekOrigin origin) { }

	public virtual void set_Position(long value) { }

	public virtual void Write(Byte[] buffer, int offset, int count) { }

	public virtual Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task WriteAsyncInternal(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

}

