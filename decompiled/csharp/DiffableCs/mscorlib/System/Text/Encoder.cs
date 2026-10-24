namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Encoder
{
	internal EncoderFallback m_fallback; //Field offset: 0x10
	internal EncoderFallbackBuffer m_fallbackBuffer; //Field offset: 0x18

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public EncoderFallback Fallback
	{
		 get { } //Length: 8
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public EncoderFallbackBuffer FallbackBuffer
	{
		 get { } //Length: 88
	}

	internal bool InternalHasFallbackBuffer
	{
		internal get { } //Length: 16
	}

	protected Encoder() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Convert(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Convert(Char* chars, int charCount, Byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed) { }

	public EncoderFallback get_Fallback() { }

	public EncoderFallbackBuffer get_FallbackBuffer() { }

	internal bool get_InternalHasFallbackBuffer() { }

	public abstract int GetByteCount(Char[] chars, int index, int count, bool flush) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetByteCount(Char* chars, int count, bool flush) { }

	public abstract int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex, bool flush) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, bool flush) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Reset() { }

	internal void SerializeEncoder(SerializationInfo info) { }

}

