namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AmbiguousMatchException : SystemException
{

	public AmbiguousMatchException() { }

	public AmbiguousMatchException(string message) { }

	internal AmbiguousMatchException(SerializationInfo info, StreamingContext context) { }

}

