namespace Mono.Net;

internal class CFNumber : CFObject
{

	public static int AsInt32(IntPtr handle) { }

	private static bool CFNumberGetValue(IntPtr handle, IntPtr type, out int value) { }

}

