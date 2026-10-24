namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class InvalidOperationException : SystemException
{

	public InvalidOperationException() { }

	public InvalidOperationException(string message) { }

	public InvalidOperationException(string message, Exception innerException) { }

	protected InvalidOperationException(SerializationInfo info, StreamingContext context) { }

}

