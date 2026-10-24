namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UTF7Encoding : Encoding
{
	private class Decoder : DecoderNLS, ISerializable
	{
		internal int bits; //Field offset: 0x30
		internal int bitCount; //Field offset: 0x34
		internal bool firstByte; //Field offset: 0x38

		internal virtual bool HasState
		{
			internal get { } //Length: 16
		}

		public Decoder(UTF7Encoding encoding) { }

		internal Decoder(SerializationInfo info, StreamingContext context) { }

		internal virtual bool get_HasState() { }

		public virtual void Reset() { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	public sealed class DecoderUTF7Fallback : DecoderFallback
	{

		public virtual int MaxCharCount
		{
			 get { } //Length: 8
		}

		public DecoderUTF7Fallback() { }

		public virtual DecoderFallbackBuffer CreateFallbackBuffer() { }

		public virtual bool Equals(object value) { }

		public virtual int get_MaxCharCount() { }

		public virtual int GetHashCode() { }

	}

	public sealed class DecoderUTF7FallbackBuffer : DecoderFallbackBuffer
	{
		private char cFallback; //Field offset: 0x20
		private int iCount; //Field offset: 0x24
		private int iSize; //Field offset: 0x28

		public virtual int Remaining
		{
			 get { } //Length: 12
		}

		public DecoderUTF7FallbackBuffer(DecoderUTF7Fallback fallback) { }

		public virtual bool Fallback(Byte[] bytesUnknown, int index) { }

		public virtual int get_Remaining() { }

		public virtual char GetNextChar() { }

		internal virtual int InternalFallback(Byte[] bytes, Byte* pBytes) { }

		public virtual void Reset() { }

	}

	private class Encoder : EncoderNLS, ISerializable
	{
		internal int bits; //Field offset: 0x38
		internal int bitCount; //Field offset: 0x3C

		internal virtual bool HasState
		{
			internal get { } //Length: 32
		}

		public Encoder(UTF7Encoding encoding) { }

		internal Encoder(SerializationInfo info, StreamingContext context) { }

		internal virtual bool get_HasState() { }

		public virtual void Reset() { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	private Byte[] base64Bytes; //Field offset: 0x38
	private SByte[] base64Values; //Field offset: 0x40
	private Boolean[] directEncode; //Field offset: 0x48
	[OptionalField]
	private bool m_allowOptionals; //Field offset: 0x50

	public UTF7Encoding() { }

	public UTF7Encoding(bool allowOptionals) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual bool Equals(object value) { }

	internal virtual int GetByteCount(Char* chars, int count, EncoderNLS baseEncoder) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetByteCount(Char* chars, int count) { }

	public virtual int GetByteCount(Char[] chars, int index, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetByteCount(string s) { }

	internal virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, EncoderNLS baseEncoder) { }

	public virtual int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetBytes(string s, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount) { }

	public virtual int GetCharCount(Byte[] bytes, int index, int count) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetCharCount(Byte* bytes, int count) { }

	internal virtual int GetCharCount(Byte* bytes, int count, DecoderNLS baseDecoder) { }

	public virtual int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount) { }

	internal virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, DecoderNLS baseDecoder) { }

	public virtual Decoder GetDecoder() { }

	public virtual Encoder GetEncoder() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetHashCode() { }

	public virtual int GetMaxByteCount(int charCount) { }

	public virtual int GetMaxCharCount(int byteCount) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual string GetString(Byte[] bytes, int index, int count) { }

	private void MakeTables() { }

	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx) { }

	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx) { }

	internal virtual void SetDefaultFallbacks() { }

}

