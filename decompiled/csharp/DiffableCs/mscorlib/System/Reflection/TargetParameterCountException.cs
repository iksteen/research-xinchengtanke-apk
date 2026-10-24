namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TargetParameterCountException : ApplicationException
{

	public TargetParameterCountException() { }

	public TargetParameterCountException(string message) { }

	internal TargetParameterCountException(SerializationInfo info, StreamingContext context) { }

}

