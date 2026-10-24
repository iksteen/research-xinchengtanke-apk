namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class WaitHandleCannotBeOpenedException : ApplicationException
{

	public WaitHandleCannotBeOpenedException() { }

	public WaitHandleCannotBeOpenedException(string message) { }

	protected WaitHandleCannotBeOpenedException(SerializationInfo info, StreamingContext context) { }

}

