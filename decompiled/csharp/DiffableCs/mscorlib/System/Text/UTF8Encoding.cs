namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UTF8Encoding : Encoding
{
	public class UTF8Decoder : DecoderNLS, ISerializable
	{
		internal int bits; //Field offset: 0x30

		internal virtual bool HasState
		{
			internal get { } //Length: 16
		}

		public UTF8Decoder(UTF8Encoding encoding) { }

		internal UTF8Decoder(SerializationInfo info, StreamingContext context) { }

		internal virtual bool get_HasState() { }

		public virtual void Reset() { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	public class UTF8Encoder : EncoderNLS, ISerializable
	{
		internal int surrogateChar; //Field offset: 0x38

		internal virtual bool HasState
		{
			internal get { } //Length: 16
		}

		public UTF8Encoder(UTF8Encoding encoding) { }

		internal UTF8Encoder(SerializationInfo info, StreamingContext context) { }

		internal virtual bool get_HasState() { }

		public virtual void Reset() { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	private bool emitUTF8Identifier; //Field offset: 0x38
	private bool isThrowException; //Field offset: 0x39

	public UTF8Encoding() { }

	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier) { }

	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) { }

	public virtual bool Equals(object value) { }

	private int FallbackInvalidByteSequence(Byte* pSrc, int ch, DecoderFallbackBuffer fallback) { }

	private bool FallbackInvalidByteSequence(ref Byte* pSrc, int ch, DecoderFallbackBuffer fallback, ref Char* pTarget) { }

	internal virtual int GetByteCount(Char* chars, int count, EncoderNLS baseEncoder) { }

	public virtual int GetByteCount(Char[] chars, int index, int count) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetByteCount(Char* chars, int count) { }

	public virtual int GetByteCount(string chars) { }

	public virtual int GetBytes(string s, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	internal virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, EncoderNLS baseEncoder) { }

	public virtual int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount) { }

	private Byte[] GetBytesUnknown(ref Byte* pSrc, int ch) { }

	public virtual int GetCharCount(Byte[] bytes, int index, int count) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetCharCount(Byte* bytes, int count) { }

	internal virtual int GetCharCount(Byte* bytes, int count, DecoderNLS baseDecoder) { }

	public virtual int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

	internal virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, DecoderNLS baseDecoder) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount) { }

	public virtual Decoder GetDecoder() { }

	public virtual Encoder GetEncoder() { }

	public virtual int GetHashCode() { }

	public virtual int GetMaxByteCount(int charCount) { }

	public virtual int GetMaxCharCount(int byteCount) { }

	public virtual Byte[] GetPreamble() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual string GetString(Byte[] bytes, int index, int count) { }

	private static bool InRange(int ch, int start, int end) { }

	private static int PtrDiff(Byte* a, Byte* b) { }

	private static int PtrDiff(Char* a, Char* b) { }

	internal virtual void SetDefaultFallbacks() { }

}

