namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class PathTooLongException : IOException
{

	public PathTooLongException() { }

	public PathTooLongException(string message) { }

	protected PathTooLongException(SerializationInfo info, StreamingContext context) { }

}

