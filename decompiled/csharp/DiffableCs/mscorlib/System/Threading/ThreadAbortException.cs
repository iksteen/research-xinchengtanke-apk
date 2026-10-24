namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ThreadAbortException : SystemException
{

	private ThreadAbortException() { }

	internal ThreadAbortException(SerializationInfo info, StreamingContext context) { }

}

