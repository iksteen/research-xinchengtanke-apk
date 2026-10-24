namespace System.Runtime.Remoting;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class RemotingException : SystemException
{

	public RemotingException() { }

	public RemotingException(string message) { }

	protected RemotingException(SerializationInfo info, StreamingContext context) { }

	public RemotingException(string message, Exception InnerException) { }

}

