namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ApplicationException : Exception
{

	public ApplicationException() { }

	public ApplicationException(string message) { }

	public ApplicationException(string message, Exception innerException) { }

	protected ApplicationException(SerializationInfo info, StreamingContext context) { }

}

