namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class InvalidProgramException : SystemException
{

	public InvalidProgramException() { }

	public InvalidProgramException(string message) { }

	internal InvalidProgramException(SerializationInfo info, StreamingContext context) { }

}

