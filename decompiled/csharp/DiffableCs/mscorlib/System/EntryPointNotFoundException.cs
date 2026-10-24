namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class EntryPointNotFoundException : TypeLoadException
{

	public EntryPointNotFoundException() { }

	public EntryPointNotFoundException(string message) { }

	protected EntryPointNotFoundException(SerializationInfo info, StreamingContext context) { }

}

