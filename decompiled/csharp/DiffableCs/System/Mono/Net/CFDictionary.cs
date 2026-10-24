namespace Mono.Net;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class CFDictionary : CFObject
{
	private static readonly IntPtr KeyCallbacks; //Field offset: 0x0
	private static readonly IntPtr ValueCallbacks; //Field offset: 0x8

	public IntPtr Item
	{
		 get { } //Length: 4
	}

	private static CFDictionary() { }

	public CFDictionary(IntPtr handle, bool own) { }

	private static IntPtr CFDictionaryGetValue(IntPtr handle, IntPtr key) { }

	public IntPtr get_Item(IntPtr key) { }

	public IntPtr GetValue(IntPtr key) { }

}

