namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class InvalidCastException : SystemException
{

	public InvalidCastException() { }

	public InvalidCastException(string message) { }

	protected InvalidCastException(SerializationInfo info, StreamingContext context) { }

}

