namespace Microsoft.Win32;

internal static class Win32Native
{
	public class WIN32_FIND_DATA
	{
		internal int dwFileAttributes; //Field offset: 0x10
		internal string cFileName; //Field offset: 0x18

		public WIN32_FIND_DATA() { }

	}


	public static string GetMessage(int hr) { }

	public static int MakeHRFromErrorCode(int errorCode) { }

}

