namespace Mono.Net;

internal class CFUrl : CFObject
{

	public CFUrl(IntPtr handle, bool own) { }

	private static IntPtr CFURLCreateWithString(IntPtr allocator, IntPtr str, IntPtr baseURL) { }

	public static CFUrl Create(string absolute) { }

}

