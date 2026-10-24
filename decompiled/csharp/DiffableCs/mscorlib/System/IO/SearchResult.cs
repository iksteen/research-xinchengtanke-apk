namespace System.IO;

internal sealed class SearchResult
{
	private string fullPath; //Field offset: 0x10
	private string userPath; //Field offset: 0x18
	private WIN32_FIND_DATA findData; //Field offset: 0x20

	internal WIN32_FIND_DATA FindData
	{
		internal get { } //Length: 8
	}

	internal string UserPath
	{
		internal get { } //Length: 8
	}

	internal SearchResult(string fullPath, string userPath, WIN32_FIND_DATA findData) { }

	internal WIN32_FIND_DATA get_FindData() { }

	internal string get_UserPath() { }

}

