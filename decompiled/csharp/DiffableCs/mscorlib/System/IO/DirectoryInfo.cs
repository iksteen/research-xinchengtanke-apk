namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DirectoryInfo : FileSystemInfo
{
	private string current; //Field offset: 0x60
	private string parent; //Field offset: 0x68

	public virtual bool Exists
	{
		 get { } //Length: 76
	}

	public virtual string Name
	{
		 get { } //Length: 8
	}

	public DirectoryInfo Parent
	{
		 get { } //Length: 120
	}

	public DirectoryInfo(string path) { }

	internal DirectoryInfo(string path, bool simpleOriginalPath) { }

	private DirectoryInfo(SerializationInfo info, StreamingContext context) { }

	internal void CheckPath(string path) { }

	public void Create() { }

	public virtual bool get_Exists() { }

	public virtual string get_Name() { }

	public DirectoryInfo get_Parent() { }

	public DirectoryInfo[] GetDirectories() { }

	public DirectoryInfo[] GetDirectories(string searchPattern) { }

	public FileInfo[] GetFiles() { }

	public FileInfo[] GetFiles(string searchPattern) { }

	private void Initialize() { }

	public virtual string ToString() { }

}

