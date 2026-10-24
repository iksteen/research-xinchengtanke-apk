namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UnauthorizedAccessException : SystemException
{

	public UnauthorizedAccessException() { }

	public UnauthorizedAccessException(string message) { }

	protected UnauthorizedAccessException(SerializationInfo info, StreamingContext context) { }

}

