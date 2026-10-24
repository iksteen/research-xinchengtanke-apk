namespace System.Text;

public sealed class DecoderFallbackException : ArgumentException
{
	private Byte[] bytesUnknown; //Field offset: 0x90
	private int index; //Field offset: 0x98

	public DecoderFallbackException() { }

	internal DecoderFallbackException(SerializationInfo info, StreamingContext context) { }

	public DecoderFallbackException(string message, Byte[] bytesUnknown, int index) { }

}

