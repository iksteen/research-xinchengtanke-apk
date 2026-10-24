namespace System.Text;

internal class EncoderNLS : Encoder, ISerializable
{
	internal char charLeftOver; //Field offset: 0x20
	protected Encoding m_encoding; //Field offset: 0x28
	protected bool m_mustFlush; //Field offset: 0x30
	internal bool m_throwOnOverflow; //Field offset: 0x31
	internal int m_charsUsed; //Field offset: 0x34

	public Encoding Encoding
	{
		 get { } //Length: 8
	}

	internal override bool HasState
	{
		internal get { } //Length: 16
	}

	public bool MustFlush
	{
		 get { } //Length: 8
	}

	internal EncoderNLS(SerializationInfo info, StreamingContext context) { }

	internal EncoderNLS(Encoding encoding) { }

	internal EncoderNLS() { }

	internal void ClearMustFlush() { }

	public virtual void Convert(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed) { }

	public virtual void Convert(Char* chars, int charCount, Byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed) { }

	public Encoding get_Encoding() { }

	internal override bool get_HasState() { }

	public bool get_MustFlush() { }

	public virtual int GetByteCount(Char[] chars, int index, int count, bool flush) { }

	public virtual int GetByteCount(Char* chars, int count, bool flush) { }

	public virtual int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex, bool flush) { }

	public virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, bool flush) { }

	public virtual void Reset() { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

}

