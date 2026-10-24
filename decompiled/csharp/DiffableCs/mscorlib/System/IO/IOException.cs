namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class IOException : SystemException
{
	private string _maybeFullPath; //Field offset: 0x88

	public IOException() { }

	public IOException(string message) { }

	public IOException(string message, int hresult) { }

	internal IOException(string message, int hresult, string maybeFullPath) { }

	public IOException(string message, Exception innerException) { }

	protected IOException(SerializationInfo info, StreamingContext context) { }

}

