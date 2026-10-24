namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MemoryStream : Stream
{
	private Byte[] _buffer; //Field offset: 0x28
	private int _origin; //Field offset: 0x30
	private int _position; //Field offset: 0x34
	private int _length; //Field offset: 0x38
	private int _capacity; //Field offset: 0x3C
	private bool _expandable; //Field offset: 0x40
	private bool _writable; //Field offset: 0x41
	private bool _exposable; //Field offset: 0x42
	private bool _isOpen; //Field offset: 0x43
	private Task<Int32> _lastReadTask; //Field offset: 0x48

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

	public override int Capacity
	{
		 get { } //Length: 56
		 set { } //Length: 384
	}

	public virtual long Length
	{
		 get { } //Length: 60
	}

	public virtual long Position
	{
		 get { } //Length: 56
		 set { } //Length: 188
	}

	public MemoryStream() { }

	public MemoryStream(int capacity) { }

	public MemoryStream(Byte[] buffer) { }

	public MemoryStream(Byte[] buffer, bool writable) { }

	public MemoryStream(Byte[] buffer, int index, int count) { }

	public MemoryStream(Byte[] buffer, int index, int count, bool writable, bool publiclyVisible) { }

	protected virtual void Dispose(bool disposing) { }

	private bool EnsureCapacity(int value) { }

	private void EnsureWriteable() { }

	public virtual void Flush() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanSeek() { }

	public virtual bool get_CanWrite() { }

	public override int get_Capacity() { }

	public virtual long get_Length() { }

	public virtual long get_Position() { }

	public override Byte[] GetBuffer() { }

	internal int InternalEmulateRead(int count) { }

	internal Byte[] InternalGetBuffer() { }

	internal int InternalGetPosition() { }

	internal int InternalReadInt32() { }

	public virtual int Read(out Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public virtual int ReadByte() { }

	public virtual long Seek(long offset, SeekOrigin loc) { }

	public override void set_Capacity(int value) { }

	public virtual void set_Position(long value) { }

	public override Byte[] ToArray() { }

	public virtual void Write(Byte[] buffer, int offset, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public virtual void WriteByte(byte value) { }

}

