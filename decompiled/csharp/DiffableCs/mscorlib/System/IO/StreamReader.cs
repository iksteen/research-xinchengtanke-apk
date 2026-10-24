namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class StreamReader : TextReader
{
	private class NullStreamReader : StreamReader
	{

		public virtual Stream BaseStream
		{
			 get { } //Length: 100
		}

		public virtual Encoding CurrentEncoding
		{
			 get { } //Length: 8
		}

		internal NullStreamReader() { }

		protected virtual void Dispose(bool disposing) { }

		public virtual Stream get_BaseStream() { }

		public virtual Encoding get_CurrentEncoding() { }

		public virtual int Peek() { }

		public virtual int Read() { }

		public virtual int Read(Char[] buffer, int index, int count) { }

		internal virtual int ReadBuffer() { }

		public virtual string ReadLine() { }

		public virtual string ReadToEnd() { }

	}

	public static readonly StreamReader Null; //Field offset: 0x0
	private Stream stream; //Field offset: 0x18
	private Encoding encoding; //Field offset: 0x20
	private Decoder decoder; //Field offset: 0x28
	private Byte[] byteBuffer; //Field offset: 0x30
	private Char[] charBuffer; //Field offset: 0x38
	private Byte[] _preamble; //Field offset: 0x40
	private int charPos; //Field offset: 0x48
	private int charLen; //Field offset: 0x4C
	private int byteLen; //Field offset: 0x50
	private int bytePos; //Field offset: 0x54
	private int _maxCharsPerBuffer; //Field offset: 0x58
	private bool _detectEncoding; //Field offset: 0x5C
	private bool _checkPreamble; //Field offset: 0x5D
	private bool _isBlocked; //Field offset: 0x5E
	private bool _closable; //Field offset: 0x5F
	private Task _asyncReadTask; //Field offset: 0x60

	public override Stream BaseStream
	{
		 get { } //Length: 8
	}

	public override Encoding CurrentEncoding
	{
		 get { } //Length: 8
	}

	internal static int DefaultBufferSize
	{
		internal get { } //Length: 8
	}

	internal bool LeaveOpen
	{
		internal get { } //Length: 16
	}

	private static StreamReader() { }

	internal StreamReader() { }

	public StreamReader(Stream stream) { }

	public StreamReader(Stream stream, bool detectEncodingFromByteOrderMarks) { }

	public StreamReader(Stream stream, Encoding encoding) { }

	public StreamReader(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen) { }

	public StreamReader(string path) { }

	public StreamReader(string path, bool detectEncodingFromByteOrderMarks) { }

	public StreamReader(string path, Encoding encoding) { }

	public StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize) { }

	internal StreamReader(string path, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost) { }

	private void CheckAsyncTaskInProgress() { }

	public virtual void Close() { }

	private void CompressBuffer(int n) { }

	internal bool DataAvailable() { }

	private void DetectEncoding() { }

	protected virtual void Dispose(bool disposing) { }

	public override Stream get_BaseStream() { }

	public override Encoding get_CurrentEncoding() { }

	internal static int get_DefaultBufferSize() { }

	internal bool get_LeaveOpen() { }

	internal void Init(Stream stream) { }

	private void Init(Stream stream, Encoding encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen) { }

	private bool IsPreamble() { }

	public virtual int Peek() { }

	public virtual int Read() { }

	public virtual int Read(out Char[] buffer, int index, int count) { }

	internal override int ReadBuffer() { }

	private int ReadBuffer(Char[] userBuffer, int userOffset, int desiredChars, out bool readToUserBuffer) { }

	public virtual string ReadLine() { }

	public virtual string ReadToEnd() { }

}

