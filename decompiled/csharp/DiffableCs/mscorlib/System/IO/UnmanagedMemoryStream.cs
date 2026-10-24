namespace System.IO;

public class UnmanagedMemoryStream : Stream
{
	private SafeBuffer _buffer; //Field offset: 0x28
	private Byte* _mem; //Field offset: 0x30
	private long _length; //Field offset: 0x38
	private long _capacity; //Field offset: 0x40
	private long _position; //Field offset: 0x48
	private long _offset; //Field offset: 0x50
	private FileAccess _access; //Field offset: 0x58
	internal bool _isOpen; //Field offset: 0x5C
	private Task<Int32> _lastReadTask; //Field offset: 0x60

	public virtual bool CanRead
	{
		 get { } //Length: 28
	}

	public virtual bool CanSeek
	{
		 get { } //Length: 8
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 28
	}

	public virtual long Length
	{
		 get { } //Length: 52
	}

	public virtual long Position
	{
		 get { } //Length: 60
		 set { } //Length: 172
	}

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Byte* PositionPointer
	{
		 get { } //Length: 228
	}

	protected UnmanagedMemoryStream() { }

	internal UnmanagedMemoryStream(Byte* pointer, long length, long capacity, FileAccess access, bool skipSecurityCheck) { }

	protected virtual void Dispose(bool disposing) { }

	public virtual void Flush() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanSeek() { }

	public virtual bool get_CanWrite() { }

	public virtual long get_Length() { }

	public virtual long get_Position() { }

	public Byte* get_PositionPointer() { }

	internal void Initialize(Byte* pointer, long length, long capacity, FileAccess access, bool skipSecurityCheck) { }

	public virtual int Read(out Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public virtual int ReadByte() { }

	public virtual long Seek(long offset, SeekOrigin loc) { }

	public virtual void set_Position(long value) { }

	public virtual void Write(Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public virtual void WriteByte(byte value) { }

}

