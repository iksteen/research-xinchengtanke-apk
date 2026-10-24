namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class FileLoadException : IOException
{
	private string _fileName; //Field offset: 0x90
	private string _fusionLog; //Field offset: 0x98

	public string FusionLog
	{
		 get { } //Length: 8
	}

	public virtual string Message
	{
		 get { } //Length: 36
	}

	public FileLoadException() { }

	public FileLoadException(string message) { }

	protected FileLoadException(SerializationInfo info, StreamingContext context) { }

	internal static string FormatFileLoadExceptionMessage(string fileName, int hResult) { }

	public string get_FusionLog() { }

	public virtual string get_Message() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	private void SetMessageField() { }

	public virtual string ToString() { }

}

