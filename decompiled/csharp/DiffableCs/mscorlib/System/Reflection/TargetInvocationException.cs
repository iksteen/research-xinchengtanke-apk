namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TargetInvocationException : ApplicationException
{

	private TargetInvocationException() { }

	public TargetInvocationException(Exception inner) { }

	public TargetInvocationException(string message, Exception inner) { }

	internal TargetInvocationException(SerializationInfo info, StreamingContext context) { }

}

