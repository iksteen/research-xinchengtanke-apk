namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Stream : MarshalByRefObject, IDisposable
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<SemaphoreSlim> <>9__4_0; //Field offset: 0x8
		public static Func<Object, Int32> <>9__39_0; //Field offset: 0x10
		public static Func<Stream, ReadWriteParameters, AsyncCallback, Object, IAsyncResult> <>9__43_0; //Field offset: 0x18
		public static Func<Stream, IAsyncResult, Int32> <>9__43_1; //Field offset: 0x20
		public static Func<Object, Int32> <>9__46_0; //Field offset: 0x28
		public static Action<Task, Object> <>9__47_0; //Field offset: 0x30
		public static Func<Stream, ReadWriteParameters, AsyncCallback, Object, IAsyncResult> <>9__53_0; //Field offset: 0x38
		public static Func<Stream, IAsyncResult, VoidTaskResult> <>9__53_1; //Field offset: 0x40

		private static <>c() { }

		public <>c() { }

		internal IAsyncResult <BeginEndReadAsync>b__43_0(Stream stream, ReadWriteParameters args, AsyncCallback callback, object state) { }

		internal int <BeginEndReadAsync>b__43_1(Stream stream, IAsyncResult asyncResult) { }

		internal IAsyncResult <BeginEndWriteAsync>b__53_0(Stream stream, ReadWriteParameters args, AsyncCallback callback, object state) { }

		internal VoidTaskResult <BeginEndWriteAsync>b__53_1(Stream stream, IAsyncResult asyncResult) { }

		internal int <BeginReadInternal>b__39_0(object <p0>) { }

		internal int <BeginWriteInternal>b__46_0(object <p0>) { }

		internal SemaphoreSlim <EnsureAsyncActiveSemaphoreInitialized>b__4_0() { }

		internal void <RunReadWriteTaskWhenReady>b__47_0(Task t, object state) { }

	}

	private sealed class NullStream : Stream
	{
		private static Task<Int32> s_nullReadTask; //Field offset: 0x0

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

		public virtual long Length
		{
			 get { } //Length: 8
		}

		public virtual long Position
		{
			 get { } //Length: 8
			 set { } //Length: 4
		}

		internal NullStream() { }

		public virtual IAsyncResult BeginRead(Byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

		public virtual IAsyncResult BeginWrite(Byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

		protected virtual void Dispose(bool disposing) { }

		public virtual int EndRead(IAsyncResult asyncResult) { }

		public virtual void EndWrite(IAsyncResult asyncResult) { }

		public virtual void Flush() { }

		public virtual bool get_CanRead() { }

		public virtual bool get_CanSeek() { }

		public virtual bool get_CanWrite() { }

		public virtual long get_Length() { }

		public virtual long get_Position() { }

		public virtual int Read(out Byte[] buffer, int offset, int count) { }

		[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

		public virtual int ReadByte() { }

		public virtual long Seek(long offset, SeekOrigin origin) { }

		public virtual void set_Position(long value) { }

		public virtual void Write(Byte[] buffer, int offset, int count) { }

		[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public virtual Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

		public virtual void WriteByte(byte value) { }

	}

	private struct ReadWriteParameters
	{
		internal Byte[] Buffer; //Field offset: 0x0
		internal int Offset; //Field offset: 0x8
		internal int Count; //Field offset: 0xC

	}

	private sealed class ReadWriteTask : Task<Int32>, ITaskCompletionAction
	{
		private static ContextCallback s_invokeAsyncCallback; //Field offset: 0x0
		internal readonly bool _isRead; //Field offset: 0x54
		internal Stream _stream; //Field offset: 0x58
		internal Byte[] _buffer; //Field offset: 0x60
		internal int _offset; //Field offset: 0x68
		internal int _count; //Field offset: 0x6C
		private AsyncCallback _callback; //Field offset: 0x70
		private ExecutionContext _context; //Field offset: 0x78

		public ReadWriteTask(bool isRead, Func<Object, Int32> function, object state, Stream stream, Byte[] buffer, int offset, int count, AsyncCallback callback) { }

		internal void ClearBeginState() { }

		private static void InvokeAsyncCallback(object completedTask) { }

		private override void System.Threading.Tasks.ITaskCompletionAction.Invoke(Task completingTask) { }

	}

	public sealed class SynchronousAsyncResult : IAsyncResult
	{
		[CompilerGenerated]
		private sealed class <>c
		{
			public static readonly <>c <>9; //Field offset: 0x0
			public static Func<ManualResetEvent> <>9__12_0; //Field offset: 0x8

			private static <>c() { }

			public <>c() { }

			internal ManualResetEvent <get_AsyncWaitHandle>b__12_0() { }

		}

		private readonly object _stateObject; //Field offset: 0x10
		private readonly bool _isWrite; //Field offset: 0x18
		private ManualResetEvent _waitHandle; //Field offset: 0x20
		private ExceptionDispatchInfo _exceptionInfo; //Field offset: 0x28
		private bool _endXxxCalled; //Field offset: 0x30
		private int _bytesRead; //Field offset: 0x34

		public override object AsyncState
		{
			 get { } //Length: 8
		}

		public override WaitHandle AsyncWaitHandle
		{
			 get { } //Length: 292
		}

		public override bool CompletedSynchronously
		{
			 get { } //Length: 8
		}

		public override bool IsCompleted
		{
			 get { } //Length: 8
		}

		internal SynchronousAsyncResult(int bytesRead, object asyncStateObject) { }

		internal SynchronousAsyncResult(object asyncStateObject) { }

		internal SynchronousAsyncResult(Exception ex, object asyncStateObject, bool isWrite) { }

		internal static int EndRead(IAsyncResult asyncResult) { }

		internal static void EndWrite(IAsyncResult asyncResult) { }

		public override object get_AsyncState() { }

		public override WaitHandle get_AsyncWaitHandle() { }

		public override bool get_CompletedSynchronously() { }

		public override bool get_IsCompleted() { }

		internal void ThrowIfError() { }

	}

	public static readonly Stream Null; //Field offset: 0x0
	private ReadWriteTask _activeReadWriteTask; //Field offset: 0x18
	private SemaphoreSlim _asyncActiveSemaphore; //Field offset: 0x20

	public abstract bool CanRead
	{
		 get { } //Length: 0
	}

	public abstract bool CanSeek
	{
		 get { } //Length: 0
	}

	public abstract bool CanWrite
	{
		 get { } //Length: 0
	}

	public abstract long Length
	{
		 get { } //Length: 0
	}

	public abstract long Position
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int ReadTimeout
	{
		 get { } //Length: 92
		 set { } //Length: 92
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int WriteTimeout
	{
		 get { } //Length: 92
	}

	private static Stream() { }

	protected Stream() { }

	private Task<Int32> BeginEndReadAsync(Byte[] buffer, int offset, int count) { }

	private Task BeginEndWriteAsync(Byte[] buffer, int offset, int count) { }

	public override IAsyncResult BeginRead(Byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	internal IAsyncResult BeginReadInternal(Byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously) { }

	public override IAsyncResult BeginWrite(Byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	internal IAsyncResult BeginWriteInternal(Byte[] buffer, int offset, int count, AsyncCallback callback, object state, bool serializeAsynchronously) { }

	internal IAsyncResult BlockingBeginRead(Byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	internal IAsyncResult BlockingBeginWrite(Byte[] buffer, int offset, int count, AsyncCallback callback, object state) { }

	internal static int BlockingEndRead(IAsyncResult asyncResult) { }

	internal static void BlockingEndWrite(IAsyncResult asyncResult) { }

	public override void Close() { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	public override int EndRead(IAsyncResult asyncResult) { }

	public override void EndWrite(IAsyncResult asyncResult) { }

	internal SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized() { }

	public abstract void Flush() { }

	public abstract bool get_CanRead() { }

	public abstract bool get_CanSeek() { }

	public abstract bool get_CanWrite() { }

	public abstract long get_Length() { }

	public abstract long get_Position() { }

	public override int get_ReadTimeout() { }

	public override int get_WriteTimeout() { }

	public abstract int Read(out Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override Task<Int32> ReadAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public override int ReadByte() { }

	private void RunReadWriteTask(ReadWriteTask readWriteTask) { }

	private void RunReadWriteTaskWhenReady(Task asyncWaiter, ReadWriteTask readWriteTask) { }

	public abstract long Seek(long offset, SeekOrigin origin) { }

	public abstract void set_Position(long value) { }

	public override void set_ReadTimeout(int value) { }

	public abstract void Write(Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Task WriteAsync(Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public override void WriteByte(byte value) { }

}

