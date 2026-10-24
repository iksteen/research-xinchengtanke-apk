namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SerializationException : SystemException
{
	private static string _nullMessage; //Field offset: 0x0

	private static SerializationException() { }

	public SerializationException() { }

	public SerializationException(string message) { }

	public SerializationException(string message, Exception innerException) { }

	protected SerializationException(SerializationInfo info, StreamingContext context) { }

}

