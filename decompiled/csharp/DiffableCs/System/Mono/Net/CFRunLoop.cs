namespace Mono.Net;

internal class CFRunLoop : CFObject
{

	public static CFRunLoop CurrentRunLoop
	{
		 get { } //Length: 112
	}

	public CFRunLoop(IntPtr handle, bool own) { }

	public void AddSource(IntPtr source, CFString mode) { }

	private static void CFRunLoopAddSource(IntPtr rl, IntPtr source, IntPtr mode) { }

	private static IntPtr CFRunLoopGetCurrent() { }

	private static void CFRunLoopRemoveSource(IntPtr rl, IntPtr source, IntPtr mode) { }

	private static int CFRunLoopRunInMode(IntPtr mode, double seconds, bool returnAfterSourceHandled) { }

	private static void CFRunLoopStop(IntPtr rl) { }

	public static CFRunLoop get_CurrentRunLoop() { }

	public void RemoveSource(IntPtr source, CFString mode) { }

	public int RunInMode(CFString mode, double seconds, bool returnAfterSourceHandled) { }

	public void Stop() { }

}

