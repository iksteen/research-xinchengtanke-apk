namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Encoding : ICloneable
{
	public class DefaultDecoder : Decoder, ISerializable, IObjectReference
	{
		private Encoding m_encoding; //Field offset: 0x20
		private bool m_hasInitializedEncoding; //Field offset: 0x28

		public DefaultDecoder(Encoding encoding) { }

		internal DefaultDecoder(SerializationInfo info, StreamingContext context) { }

		public virtual int GetCharCount(Byte[] bytes, int index, int count) { }

		public virtual int GetCharCount(Byte[] bytes, int index, int count, bool flush) { }

		public virtual int GetCharCount(Byte* bytes, int count, bool flush) { }

		public virtual int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

		public virtual int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex, bool flush) { }

		public virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, bool flush) { }

		public override object GetRealObject(StreamingContext context) { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	public class DefaultEncoder : Encoder, ISerializable, IObjectReference
	{
		private Encoding m_encoding; //Field offset: 0x20
		private bool m_hasInitializedEncoding; //Field offset: 0x28
		internal char charLeftOver; //Field offset: 0x2A

		public DefaultEncoder(Encoding encoding) { }

		internal DefaultEncoder(SerializationInfo info, StreamingContext context) { }

		public virtual int GetByteCount(Char[] chars, int index, int count, bool flush) { }

		public virtual int GetByteCount(Char* chars, int count, bool flush) { }

		public virtual int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex, bool flush) { }

		public virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, bool flush) { }

		public override object GetRealObject(StreamingContext context) { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	}

	public class EncodingByteBuffer
	{
		private Byte* bytes; //Field offset: 0x10
		private Byte* byteStart; //Field offset: 0x18
		private Byte* byteEnd; //Field offset: 0x20
		private Char* chars; //Field offset: 0x28
		private Char* charStart; //Field offset: 0x30
		private Char* charEnd; //Field offset: 0x38
		private int byteCountResult; //Field offset: 0x40
		private Encoding enc; //Field offset: 0x48
		private EncoderNLS encoder; //Field offset: 0x50
		internal EncoderFallbackBuffer fallbackBuffer; //Field offset: 0x58

		internal int CharsUsed
		{
			internal get { } //Length: 24
		}

		internal int Count
		{
			internal get { } //Length: 8
		}

		internal bool MoreData
		{
			internal get { } //Length: 84
		}

		internal EncodingByteBuffer(Encoding inEncoding, EncoderNLS inEncoder, Byte* inByteStart, int inByteCount, Char* inCharStart, int inCharCount) { }

		internal bool AddByte(byte b, int moreBytesExpected) { }

		internal bool AddByte(byte b1) { }

		internal bool AddByte(byte b1, byte b2) { }

		internal bool AddByte(byte b1, byte b2, int moreBytesExpected) { }

		internal int get_CharsUsed() { }

		internal int get_Count() { }

		internal bool get_MoreData() { }

		internal char GetNextChar() { }

		internal void MovePrevious(bool bThrow) { }

	}

	public class EncodingCharBuffer
	{
		private Char* chars; //Field offset: 0x10
		private Char* charStart; //Field offset: 0x18
		private Char* charEnd; //Field offset: 0x20
		private int charCountResult; //Field offset: 0x28
		private Encoding enc; //Field offset: 0x30
		private DecoderNLS decoder; //Field offset: 0x38
		private Byte* byteStart; //Field offset: 0x40
		private Byte* byteEnd; //Field offset: 0x48
		private Byte* bytes; //Field offset: 0x50
		private DecoderFallbackBuffer fallbackBuffer; //Field offset: 0x58

		internal int BytesUsed
		{
			internal get { } //Length: 16
		}

		internal int Count
		{
			internal get { } //Length: 8
		}

		internal bool MoreData
		{
			internal get { } //Length: 16
		}

		internal EncodingCharBuffer(Encoding enc, DecoderNLS decoder, Char* charStart, int charCount, Byte* byteStart, int byteCount) { }

		internal bool AddChar(char ch, int numBytes) { }

		internal bool AddChar(char ch) { }

		internal void AdjustBytes(int count) { }

		internal bool Fallback(byte fallbackByte) { }

		internal bool Fallback(Byte[] byteBuffer) { }

		internal int get_BytesUsed() { }

		internal int get_Count() { }

		internal bool get_MoreData() { }

		internal byte GetNextByte() { }

	}

	private static Encoding defaultEncoding; //Field offset: 0x0
	private static Encoding unicodeEncoding; //Field offset: 0x8
	private static Encoding bigEndianUnicode; //Field offset: 0x10
	private static Encoding utf7Encoding; //Field offset: 0x18
	private static Encoding utf8Encoding; //Field offset: 0x20
	private static Encoding utf32Encoding; //Field offset: 0x28
	private static Encoding asciiEncoding; //Field offset: 0x30
	private static Encoding latin1Encoding; //Field offset: 0x38
	private static Hashtable encodings; //Field offset: 0x40
	private static object s_InternalSyncObject; //Field offset: 0x48
	internal int m_codePage; //Field offset: 0x10
	internal CodePageDataItem dataItem; //Field offset: 0x18
	internal bool m_deserializedFromEverett; //Field offset: 0x20
	[OptionalField]
	private bool m_isReadOnly; //Field offset: 0x21
	[OptionalField]
	internal EncoderFallback encoderFallback; //Field offset: 0x28
	[OptionalField]
	internal DecoderFallback decoderFallback; //Field offset: 0x30

	public static Encoding ASCII
	{
		 get { } //Length: 168
	}

	public static Encoding BigEndianUnicode
	{
		 get { } //Length: 176
	}

	public override int CodePage
	{
		 get { } //Length: 8
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public DecoderFallback DecoderFallback
	{
		 get { } //Length: 8
		 set { } //Length: 192
	}

	public static Encoding Default
	{
		 get { } //Length: 136
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public EncoderFallback EncoderFallback
	{
		 get { } //Length: 8
		 set { } //Length: 192
	}

	public override string EncodingName
	{
		 get { } //Length: 12
	}

	private static object InternalSyncObject
	{
		private get { } //Length: 156
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool IsReadOnly
	{
		 get { } //Length: 8
	}

	private static Encoding Latin1
	{
		private get { } //Length: 168
	}

	public static Encoding Unicode
	{
		 get { } //Length: 176
	}

	public static Encoding UTF32
	{
		 get { } //Length: 176
	}

	public static Encoding UTF7
	{
		 get { } //Length: 168
	}

	public static Encoding UTF8
	{
		 get { } //Length: 172
	}

	public override string WebName
	{
		 get { } //Length: 60
	}

	protected Encoding() { }

	protected Encoding(int codePage) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override object Clone() { }

	private static Encoding CreateDefaultEncoding() { }

	internal void DeserializeEncoding(SerializationInfo info, StreamingContext context) { }

	public virtual bool Equals(object value) { }

	public static Encoding get_ASCII() { }

	public static Encoding get_BigEndianUnicode() { }

	public override int get_CodePage() { }

	public DecoderFallback get_DecoderFallback() { }

	public static Encoding get_Default() { }

	public EncoderFallback get_EncoderFallback() { }

	public override string get_EncodingName() { }

	private static object get_InternalSyncObject() { }

	public bool get_IsReadOnly() { }

	private static Encoding get_Latin1() { }

	public static Encoding get_Unicode() { }

	public static Encoding get_UTF32() { }

	public static Encoding get_UTF7() { }

	public static Encoding get_UTF8() { }

	public override string get_WebName() { }

	internal override Char[] GetBestFitBytesToUnicodeData() { }

	internal override Char[] GetBestFitUnicodeToBytesData() { }

	internal override int GetByteCount(Char* chars, int count, EncoderNLS encoder) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetByteCount(Char* chars, int count) { }

	public abstract int GetByteCount(Char[] chars, int index, int count) { }

	public override int GetByteCount(string s) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount) { }

	internal override int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, EncoderNLS encoder) { }

	public override int GetBytes(string s, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	public abstract int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	public override Byte[] GetBytes(string s) { }

	public override Byte[] GetBytes(Char[] chars, int index, int count) { }

	public abstract int GetCharCount(Byte[] bytes, int index, int count) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetCharCount(Byte* bytes, int count) { }

	internal override int GetCharCount(Byte* bytes, int count, DecoderNLS decoder) { }

	public override Char[] GetChars(Byte[] bytes, int index, int count) { }

	public abstract int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount) { }

	internal override int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, DecoderNLS decoder) { }

	private void GetDataItem() { }

	public override Decoder GetDecoder() { }

	public override Encoder GetEncoder() { }

	public static Encoding GetEncoding(int codepage) { }

	public static Encoding GetEncoding(string name) { }

	public static Encoding GetEncoding(int codepage, EncoderFallback encoderFallback, DecoderFallback decoderFallback) { }

	public virtual int GetHashCode() { }

	public abstract int GetMaxByteCount(int charCount) { }

	public abstract int GetMaxCharCount(int byteCount) { }

	public override Byte[] GetPreamble() { }

	public override string GetString(Byte[] bytes) { }

	public override string GetString(Byte[] bytes, int index, int count) { }

	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx) { }

	internal void OnDeserialized() { }

	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx) { }

	internal void OnDeserializing() { }

	[OnSerializing]
	private void OnSerializing(StreamingContext ctx) { }

	internal void SerializeEncoding(SerializationInfo info, StreamingContext context) { }

	public void set_DecoderFallback(DecoderFallback value) { }

	public void set_EncoderFallback(EncoderFallback value) { }

	internal override void SetDefaultFallbacks() { }

	internal void setReadOnly(bool value = true) { }

	internal void ThrowBytesOverflow() { }

	internal void ThrowBytesOverflow(EncoderNLS encoder, bool nothingEncoded) { }

	internal void ThrowCharsOverflow() { }

	internal void ThrowCharsOverflow(DecoderNLS decoder, bool nothingDecoded) { }

}

