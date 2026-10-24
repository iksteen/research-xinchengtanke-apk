namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MethodAccessException : MemberAccessException
{

	public MethodAccessException() { }

	public MethodAccessException(string message) { }

	protected MethodAccessException(SerializationInfo info, StreamingContext context) { }

}

