namespace System.Net;

internal class FtpDataStream : Stream, IDisposable
{
	private sealed class ReadDelegate : MulticastDelegate
	{

		public ReadDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Byte[] buffer, int offset, int size, AsyncCallback callback, object object) { }

		public override int EndInvoke(IAsyncResult result) { }

		public override int Invoke(Byte[] buffer, int offset, int size) { }

	}

	private sealed class WriteDelegate : MulticastDelegate
	{

		public WriteDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Byte[] buffer, int offset, int size, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(Byte[] buffer, int offset, int size) { }

	}

	private FtpWebRequest request; //Field offset: 0x28
	private Stream networkStream; //Field offset: 0x30
	private bool disposed; //Field offset: 0x38
	private bool isRead; //Field offset: 0x39
	private int totalRead; //Field offset: 0x3C

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
		 get { } //Length: 16
	}

	public virtual long Length
	{
		 get { } //Length: 64
	}

	public virtual long Position
	{
		 get { } //Length: 64
		 set { } //Length: 64
	}

	internal FtpDataStream(FtpWebRequest request, Stream stream, bool isRead) { }

	public virtual IAsyncResult BeginRead(Byte[] buffer, int offset, int size, AsyncCallback cb, object state) { }

	public virtual IAsyncResult BeginWrite(Byte[] buffer, int offset, int size, AsyncCallback cb, object state) { }

	private void CheckDisposed() { }

	public virtual void Close() { }

	protected virtual void Dispose(bool disposing) { }

	public virtual int EndRead(IAsyncResult asyncResult) { }

	public virtual void EndWrite(IAsyncResult asyncResult) { }

	protected virtual void Finalize() { }

	public virtual void Flush() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanSeek() { }

	public virtual bool get_CanWrite() { }

	public virtual long get_Length() { }

	public virtual long get_Position() { }

	public virtual int Read(Byte[] buffer, int offset, int size) { }

	private int ReadInternal(Byte[] buffer, int offset, int size) { }

	public virtual long Seek(long offset, SeekOrigin origin) { }

	public virtual void set_Position(long value) { }

	private override void System.IDisposable.Dispose() { }

	public virtual void Write(Byte[] buffer, int offset, int size) { }

	private void WriteInternal(Byte[] buffer, int offset, int size) { }

}

