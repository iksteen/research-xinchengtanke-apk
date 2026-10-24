namespace Mono.Net;

internal class CFString : CFObject
{
	private string str; //Field offset: 0x18

	public CFString(IntPtr handle, bool own) { }

	public static string AsString(IntPtr handle) { }

	private static IntPtr CFStringCreateWithCharacters(IntPtr alloc, IntPtr chars, IntPtr length) { }

	private static IntPtr CFStringGetCharacters(IntPtr handle, CFRange range, IntPtr buffer) { }

	private static IntPtr CFStringGetCharactersPtr(IntPtr handle) { }

	private static IntPtr CFStringGetLength(IntPtr handle) { }

	public static CFString Create(string value) { }

	public virtual string ToString() { }

}

