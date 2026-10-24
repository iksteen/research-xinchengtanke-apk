namespace System.Text.RegularExpressions;

public class RegexMatchTimeoutException : TimeoutException, ISerializable
{
	private string regexInput; //Field offset: 0x88
	private string regexPattern; //Field offset: 0x90
	private TimeSpan matchTimeout; //Field offset: 0x98

	public RegexMatchTimeoutException(string regexInput, string regexPattern, TimeSpan matchTimeout) { }

	public RegexMatchTimeoutException() { }

	protected RegexMatchTimeoutException(SerializationInfo info, StreamingContext context) { }

	private void Init() { }

	private void Init(string input, string pattern, TimeSpan timeout) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo si, StreamingContext context) { }

}

