namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ThreadStateException : SystemException
{

	public ThreadStateException() { }

	public ThreadStateException(string message) { }

	protected ThreadStateException(SerializationInfo info, StreamingContext context) { }

}

