namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class FileSystemInfo : MarshalByRefObject, ISerializable
{
	internal MonoIOStat _data; //Field offset: 0x18
	internal int _dataInitialised; //Field offset: 0x40
	protected string FullPath; //Field offset: 0x48
	protected string OriginalPath; //Field offset: 0x50
	private string _displayPath; //Field offset: 0x58

	internal string DisplayPath
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	public abstract bool Exists
	{
		 get { } //Length: 0
	}

	public string Extension
	{
		 get { } //Length: 356
	}

	public override string FullName
	{
		 get { } //Length: 8
	}

	public abstract string Name
	{
		 get { } //Length: 0
	}

	protected FileSystemInfo() { }

	protected FileSystemInfo(SerializationInfo info, StreamingContext context) { }

	internal string get_DisplayPath() { }

	public abstract bool get_Exists() { }

	public string get_Extension() { }

	public override string get_FullName() { }

	public abstract string get_Name() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	public void Refresh() { }

	internal void set_DisplayPath(string value) { }

}

