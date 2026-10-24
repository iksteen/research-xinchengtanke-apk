namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class StackOverflowException : SystemException
{

	public StackOverflowException() { }

	public StackOverflowException(string message) { }

	internal StackOverflowException(SerializationInfo info, StreamingContext context) { }

}

