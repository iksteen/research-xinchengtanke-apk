namespace Mono.Net;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class CFArray : CFObject
{
	private static readonly IntPtr kCFTypeArrayCallbacks; //Field offset: 0x0

	public int Count
	{
		 get { } //Length: 108
	}

	public IntPtr Item
	{
		 get { } //Length: 136
	}

	private static CFArray() { }

	public CFArray(IntPtr handle, bool own) { }

	private static IntPtr CFArrayGetCount(IntPtr handle) { }

	private static IntPtr CFArrayGetValueAtIndex(IntPtr handle, IntPtr index) { }

	public int get_Count() { }

	public IntPtr get_Item(int index) { }

}

