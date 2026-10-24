namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class DllNotFoundException : TypeLoadException
{

	public DllNotFoundException() { }

	public DllNotFoundException(string message) { }

	protected DllNotFoundException(SerializationInfo info, StreamingContext context) { }

}

