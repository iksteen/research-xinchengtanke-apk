namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class DirectoryNotFoundException : IOException
{

	public DirectoryNotFoundException() { }

	public DirectoryNotFoundException(string message) { }

	protected DirectoryNotFoundException(SerializationInfo info, StreamingContext context) { }

}

