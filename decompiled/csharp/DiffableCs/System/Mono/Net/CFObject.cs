namespace Mono.Net;

internal class CFObject : IDisposable
{
	[CompilerGenerated]
	private IntPtr <Handle>k__BackingField; //Field offset: 0x10

	public private override IntPtr Handle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public CFObject(IntPtr handle, bool own) { }

	internal static void CFRelease(IntPtr handle) { }

	internal static IntPtr CFRetain(IntPtr handle) { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	public static void dlclose(IntPtr handle) { }

	public static IntPtr dlopen(string path, int mode) { }

	private static IntPtr dlsym(IntPtr handle, string symbol) { }

	protected virtual void Finalize() { }

	[CompilerGenerated]
	public override IntPtr get_Handle() { }

	public static IntPtr GetCFObjectHandle(IntPtr handle, string symbol) { }

	public static IntPtr GetIndirect(IntPtr handle, string symbol) { }

	private void Release() { }

	private void Retain() { }

	[CompilerGenerated]
	private void set_Handle(IntPtr value) { }

}

