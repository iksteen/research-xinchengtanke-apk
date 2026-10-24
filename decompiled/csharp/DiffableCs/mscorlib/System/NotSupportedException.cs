namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class NotSupportedException : SystemException
{

	public NotSupportedException() { }

	public NotSupportedException(string message) { }

	public NotSupportedException(string message, Exception innerException) { }

	protected NotSupportedException(SerializationInfo info, StreamingContext context) { }

}

