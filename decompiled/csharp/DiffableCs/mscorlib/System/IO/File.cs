namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class File
{

	public static FileStream Create(string path) { }

	public static FileStream Create(string path, int bufferSize) { }

	public static void Delete(string path) { }

	public static bool Exists(string path) { }

	internal static int FillAttributeInfo(string path, ref MonoIOStat data, bool tryagain, bool returnErrorOnNotFound) { }

	public static FileStream Open(string path, FileMode mode) { }

	public static FileStream OpenRead(string path) { }

	public static StreamReader OpenText(string path) { }

	public static Byte[] ReadAllBytes(string path) { }

}

