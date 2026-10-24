namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SystemException : Exception
{

	public SystemException() { }

	public SystemException(string message) { }

	public SystemException(string message, Exception innerException) { }

	protected SystemException(SerializationInfo info, StreamingContext context) { }

}

