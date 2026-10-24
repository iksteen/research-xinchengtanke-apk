namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class FileInfo : FileSystemInfo
{
	private string _name; //Field offset: 0x60

	public virtual bool Exists
	{
		 get { } //Length: 200
	}

	public virtual string Name
	{
		 get { } //Length: 8
	}

	public FileInfo(string fileName) { }

	private FileInfo(SerializationInfo info, StreamingContext context) { }

	public virtual bool get_Exists() { }

	public virtual string get_Name() { }

	private string GetDisplayPath(string originalPath) { }

	private void Init(string fileName, bool checkHost) { }

	public virtual string ToString() { }

}

