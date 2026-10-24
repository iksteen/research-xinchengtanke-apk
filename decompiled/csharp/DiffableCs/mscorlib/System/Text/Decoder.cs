namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Decoder
{
	internal DecoderFallback m_fallback; //Field offset: 0x10
	internal DecoderFallbackBuffer m_fallbackBuffer; //Field offset: 0x18

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public DecoderFallback Fallback
	{
		 get { } //Length: 8
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public DecoderFallbackBuffer FallbackBuffer
	{
		 get { } //Length: 88
	}

	internal bool InternalHasFallbackBuffer
	{
		internal get { } //Length: 16
	}

	protected Decoder() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Convert(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Convert(Byte* bytes, int byteCount, Char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed) { }

	public DecoderFallback get_Fallback() { }

	public DecoderFallbackBuffer get_FallbackBuffer() { }

	internal bool get_InternalHasFallbackBuffer() { }

	public abstract int GetCharCount(Byte[] bytes, int index, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetCharCount(Byte[] bytes, int index, int count, bool flush) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetCharCount(Byte* bytes, int count, bool flush) { }

	public abstract int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

	public override int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex, bool flush) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, bool flush) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Reset() { }

	internal void SerializeDecoder(SerializationInfo info) { }

}

