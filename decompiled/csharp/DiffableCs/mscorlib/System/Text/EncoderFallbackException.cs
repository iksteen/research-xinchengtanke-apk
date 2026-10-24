namespace System.Text;

public sealed class EncoderFallbackException : ArgumentException
{
	private char charUnknown; //Field offset: 0x90
	private char charUnknownHigh; //Field offset: 0x92
	private char charUnknownLow; //Field offset: 0x94
	private int index; //Field offset: 0x98

	public EncoderFallbackException() { }

	internal EncoderFallbackException(SerializationInfo info, StreamingContext context) { }

	internal EncoderFallbackException(string message, char charUnknown, int index) { }

	internal EncoderFallbackException(string message, char charUnknownHigh, char charUnknownLow, int index) { }

}

