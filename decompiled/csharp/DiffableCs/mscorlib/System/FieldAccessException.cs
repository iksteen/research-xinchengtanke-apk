namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class FieldAccessException : MemberAccessException
{

	public FieldAccessException() { }

	public FieldAccessException(string message) { }

	protected FieldAccessException(SerializationInfo info, StreamingContext context) { }

}

