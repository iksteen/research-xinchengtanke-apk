namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ArgumentNullException : ArgumentException
{

	public ArgumentNullException() { }

	public ArgumentNullException(string paramName) { }

	public ArgumentNullException(string paramName, string message) { }

	protected ArgumentNullException(SerializationInfo info, StreamingContext context) { }

}

