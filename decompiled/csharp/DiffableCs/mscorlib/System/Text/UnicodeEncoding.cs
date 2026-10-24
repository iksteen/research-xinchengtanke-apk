namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UnicodeEncoding : Encoding
{
	private class Decoder : DecoderNLS, ISerializable
	{
		internal int lastByte; //Field offset: 0x30
		internal char lastChar; //Field offset: 0x34

		internal virtual bool HasState
		{
			internal get { } //Length: 36
		}

		public Decoder(UnicodeEncoding encoding) { }

		internal Decoder(SerializationInfo info, StreamingContext context) { }

		internal virtual bool get_HasState() { }

		public virtual void Reset() { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	private static readonly ulong highLowPatternMask; //Field offset: 0x0
	[OptionalField]
	internal bool isThrowException; //Field offset: 0x38
	internal bool bigEndian; //Field offset: 0x39
	internal bool byteOrderMark; //Field offset: 0x3A

	private static UnicodeEncoding() { }

	public UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) { }

	public UnicodeEncoding() { }

	public UnicodeEncoding(bool bigEndian, bool byteOrderMark) { }

	public virtual bool Equals(object value) { }

	public virtual int GetByteCount(Char[] chars, int index, int count) { }

	public virtual int GetByteCount(string s) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetByteCount(Char* chars, int count) { }

	internal virtual int GetByteCount(Char* chars, int count, EncoderNLS encoder) { }

	public virtual int GetBytes(string s, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	public virtual int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount) { }

	internal virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, EncoderNLS encoder) { }

	public virtual int GetCharCount(Byte[] bytes, int index, int count) { }

	internal virtual int GetCharCount(Byte* bytes, int count, DecoderNLS baseDecoder) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetCharCount(Byte* bytes, int count) { }

	public virtual int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

	internal virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, DecoderNLS baseDecoder) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount) { }

	public virtual Decoder GetDecoder() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Encoder GetEncoder() { }

	public virtual int GetHashCode() { }

	public virtual int GetMaxByteCount(int charCount) { }

	public virtual int GetMaxCharCount(int byteCount) { }

	public virtual Byte[] GetPreamble() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual string GetString(Byte[] bytes, int index, int count) { }

	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx) { }

	internal virtual void SetDefaultFallbacks() { }

}

