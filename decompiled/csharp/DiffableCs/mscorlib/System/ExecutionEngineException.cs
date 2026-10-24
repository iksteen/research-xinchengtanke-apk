namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Obsolete]
public sealed class ExecutionEngineException : SystemException
{

	public ExecutionEngineException() { }

	public ExecutionEngineException(string message) { }

	public ExecutionEngineException(string message, Exception innerException) { }

	internal ExecutionEngineException(SerializationInfo info, StreamingContext context) { }

}

