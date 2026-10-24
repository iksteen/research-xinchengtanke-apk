namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class OverflowException : ArithmeticException
{

	public OverflowException() { }

	public OverflowException(string message) { }

	public OverflowException(string message, Exception innerException) { }

	protected OverflowException(SerializationInfo info, StreamingContext context) { }

}

