namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class Path
{
	[Obsolete]
	public static readonly Char[] InvalidPathChars; //Field offset: 0x0
	public static readonly char AltDirectorySeparatorChar; //Field offset: 0x8
	public static readonly char DirectorySeparatorChar; //Field offset: 0xA
	public static readonly char PathSeparator; //Field offset: 0xC
	internal static readonly string DirectorySeparatorStr; //Field offset: 0x10
	public static readonly char VolumeSeparatorChar; //Field offset: 0x18
	internal static readonly Char[] PathSeparatorChars; //Field offset: 0x20
	private static readonly bool dirEqualsVolume; //Field offset: 0x28
	internal static readonly Char[] trimEndCharsWindows; //Field offset: 0x30
	internal static readonly Char[] trimEndCharsUnix; //Field offset: 0x38

	internal static string DirectorySeparatorCharAsString
	{
		internal get { } //Length: 100
	}

	internal static Char[] TrimEndChars
	{
		internal get { } //Length: 156
	}

	private static Path() { }

	private static string CanonicalizePath(string path) { }

	internal static void CheckInvalidPathChars(string path, bool checkAdditional = false) { }

	internal static void CheckSearchPattern(string searchPattern) { }

	internal static string CleanPath(string s) { }

	public static string Combine(string path1, string path2) { }

	public static string Combine(string path1, string path2, string path3) { }

	public static string Combine(String[] paths) { }

	internal static string get_DirectorySeparatorCharAsString() { }

	internal static Char[] get_TrimEndChars() { }

	public static string GetDirectoryName(string path) { }

	public static string GetFileName(string path) { }

	public static string GetFullPath(string path) { }

	internal static string GetFullPathInternal(string path) { }

	private static int GetFullPathName(string path, int numBufferChars, StringBuilder buffer, ref IntPtr lpFilePartOrNull) { }

	internal static string GetFullPathName(string path) { }

	public static Char[] GetInvalidPathChars() { }

	public static string GetPathRoot(string path) { }

	private static string GetServerAndShare(string path) { }

	internal static string InsecureGetFullPath(string path) { }

	internal static string InternalCombine(string path1, string path2) { }

	internal static bool IsDirectorySeparator(char c) { }

	public static bool IsPathRooted(string path) { }

	private static bool SameRoot(string root, string path) { }

	internal static void Validate(string path) { }

	internal static void Validate(string path, string parameterName) { }

	internal static string WindowsDriveAdjustment(string path) { }

}

