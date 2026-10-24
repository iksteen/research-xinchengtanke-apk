namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class StreamWriter : TextWriter
{
	public static readonly StreamWriter Null; //Field offset: 0x0
	private static Encoding _UTF8NoBOM; //Field offset: 0x8
	private Stream stream; //Field offset: 0x28
	private Encoding encoding; //Field offset: 0x30
	private Encoder encoder; //Field offset: 0x38
	private Byte[] byteBuffer; //Field offset: 0x40
	private Char[] charBuffer; //Field offset: 0x48
	private int charPos; //Field offset: 0x50
	private int charLen; //Field offset: 0x54
	private bool autoFlush; //Field offset: 0x58
	private bool haveWrittenPreamble; //Field offset: 0x59
	private bool closable; //Field offset: 0x5A
	private Task _asyncWriteTask; //Field offset: 0x60

	public override bool AutoFlush
	{
		 set { } //Length: 84
	}

	public virtual Encoding Encoding
	{
		 get { } //Length: 8
	}

	internal bool LeaveOpen
	{
		internal get { } //Length: 16
	}

	internal static Encoding UTF8NoBOM
	{
		[FriendAccessAllowed]
		internal get { } //Length: 256
	}

	private static StreamWriter() { }

	internal StreamWriter(string path, bool append, Encoding encoding, int bufferSize, bool checkHost) { }

	internal StreamWriter() { }

	public StreamWriter(Stream stream) { }

	public StreamWriter(Stream stream, Encoding encoding) { }

	public StreamWriter(Stream stream, Encoding encoding, int bufferSize, bool leaveOpen) { }

	public StreamWriter(string path) { }

	public StreamWriter(string path, bool append) { }

	public StreamWriter(string path, bool append, Encoding encoding) { }

	public StreamWriter(string path, bool append, Encoding encoding, int bufferSize) { }

	private void CheckAsyncTaskInProgress() { }

	public virtual void Close() { }

	private static Stream CreateFile(string path, bool append, bool checkHost) { }

	protected virtual void Dispose(bool disposing) { }

	public virtual void Flush() { }

	private void Flush(bool flushStream, bool flushEncoder) { }

	public virtual Encoding get_Encoding() { }

	internal bool get_LeaveOpen() { }

	[FriendAccessAllowed]
	internal static Encoding get_UTF8NoBOM() { }

	private void Init(Stream streamArg, Encoding encodingArg, int bufferSize, bool shouldLeaveOpen) { }

	public override void set_AutoFlush(bool value) { }

	public virtual void Write(string value) { }

	public virtual void Write(char value) { }

	public virtual void Write(Char[] buffer) { }

	public virtual void Write(Char[] buffer, int index, int count) { }

}

