namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class DriveNotFoundException : IOException
{

	public DriveNotFoundException() { }

	public DriveNotFoundException(string message) { }

	protected DriveNotFoundException(SerializationInfo info, StreamingContext context) { }

}

