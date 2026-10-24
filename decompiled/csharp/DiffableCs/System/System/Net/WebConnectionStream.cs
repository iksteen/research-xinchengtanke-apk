namespace System.Net;

internal abstract class WebConnectionStream : Stream
{
	protected bool closed; //Field offset: 0x28
	private bool disposed; //Field offset: 0x29
	private object locker; //Field offset: 0x30
	private int read_timeout; //Field offset: 0x38
	private int write_timeout; //Field offset: 0x3C
	internal bool IgnoreIOErrors; //Field offset: 0x40
	[CompilerGenerated]
	private readonly HttpWebRequest <Request>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private readonly WebConnection <Connection>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private readonly WebOperation <Operation>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private readonly Stream <InnerStream>k__BackingField; //Field offset: 0x60

	public virtual bool CanSeek
	{
		 get { } //Length: 8
	}

	internal WebConnection Connection
	{
		[CompilerGenerated]
		internal get { } //Length: 8
	}

	internal Stream InnerStream
	{
		[CompilerGenerated]
		internal get { } //Length: 8
	}

	internal WebOperation Operation
	{
		[CompilerGenerated]
		internal get { } //Length: 8
	}

	public virtual long Position
	{
		 get { } //Length: 64
		 set { } //Length: 64
	}

	public virtual int ReadTimeout
	{
		 get { } //Length: 8
		 set { } //Length: 100
	}

	internal HttpWebRequest Request
	{
		[CompilerGenerated]
		internal get { } //Length: 8
	}

	internal ServicePoint ServicePoint
	{
		internal get { } //Length: 28
	}

	public virtual int WriteTimeout
	{
		 get { } //Length: 8
	}

	protected WebConnectionStream(WebConnection cnc, WebOperation operation, Stream stream) { }

	public virtual IAsyncResult BeginRead(Byte[] buffer, int offset, int size, AsyncCallback cb, object state) { }

	public virtual IAsyncResult BeginWrite(Byte[] buffer, int offset, int size, AsyncCallback cb, object state) { }

	public virtual void Close() { }

	protected abstract void Close_internal(ref bool disposed) { }

	public virtual int EndRead(IAsyncResult r) { }

	public virtual void EndWrite(IAsyncResult r) { }

	public virtual void Flush() { }

	public virtual bool get_CanSeek() { }

	[CompilerGenerated]
	internal WebConnection get_Connection() { }

	[CompilerGenerated]
	internal Stream get_InnerStream() { }

	[CompilerGenerated]
	internal WebOperation get_Operation() { }

	public virtual long get_Position() { }

	public virtual int get_ReadTimeout() { }

	[CompilerGenerated]
	internal HttpWebRequest get_Request() { }

	internal ServicePoint get_ServicePoint() { }

	public virtual int get_WriteTimeout() { }

	protected Exception GetException(Exception e) { }

	internal void InternalClose() { }

	public virtual int Read(Byte[] buffer, int offset, int size) { }

	public virtual long Seek(long a, SeekOrigin b) { }

	public virtual void set_Position(long value) { }

	public virtual void set_ReadTimeout(int value) { }

	public virtual void Write(Byte[] buffer, int offset, int size) { }

}

