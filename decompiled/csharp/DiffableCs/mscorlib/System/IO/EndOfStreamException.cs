namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class EndOfStreamException : IOException
{

	public EndOfStreamException() { }

	public EndOfStreamException(string message) { }

	protected EndOfStreamException(SerializationInfo info, StreamingContext context) { }

}

