namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class OutOfMemoryException : SystemException
{

	public OutOfMemoryException() { }

	public OutOfMemoryException(string message) { }

	protected OutOfMemoryException(SerializationInfo info, StreamingContext context) { }

}

