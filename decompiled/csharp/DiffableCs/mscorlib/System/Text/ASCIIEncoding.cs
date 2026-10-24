namespace System.Text;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ASCIIEncoding : Encoding
{

	public ASCIIEncoding() { }

	public virtual int GetByteCount(Char[] chars, int index, int count) { }

	public virtual int GetByteCount(string chars) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetByteCount(Char* chars, int count) { }

	internal virtual int GetByteCount(Char* chars, int charCount, EncoderNLS encoder) { }

	public virtual int GetBytes(string chars, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	public virtual int GetBytes(Char[] chars, int charIndex, int charCount, Byte[] bytes, int byteIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount) { }

	internal virtual int GetBytes(Char* chars, int charCount, Byte* bytes, int byteCount, EncoderNLS encoder) { }

	public virtual int GetCharCount(Byte[] bytes, int index, int count) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetCharCount(Byte* bytes, int count) { }

	internal virtual int GetCharCount(Byte* bytes, int count, DecoderNLS decoder) { }

	internal virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount, DecoderNLS decoder) { }

	public virtual int GetChars(Byte[] bytes, int byteIndex, int byteCount, Char[] chars, int charIndex) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetChars(Byte* bytes, int byteCount, Char* chars, int charCount) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Decoder GetDecoder() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual Encoder GetEncoder() { }

	public virtual int GetMaxByteCount(int charCount) { }

	public virtual int GetMaxCharCount(int byteCount) { }

	public virtual string GetString(Byte[] bytes, int byteIndex, int byteCount) { }

	internal virtual void SetDefaultFallbacks() { }

}

