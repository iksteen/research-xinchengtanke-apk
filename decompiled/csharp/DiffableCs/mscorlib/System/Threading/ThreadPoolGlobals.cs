namespace System.Threading;

internal static class ThreadPoolGlobals
{
	public static uint tpQuantum; //Field offset: 0x0
	public static int processorCount; //Field offset: 0x4
	public static bool tpHosted; //Field offset: 0x8
	public static bool vmTpInitialized; //Field offset: 0x9
	public static bool enableWorkerTracking; //Field offset: 0xA
	public static ThreadPoolWorkQueue workQueue; //Field offset: 0x10

	private static ThreadPoolGlobals() { }

}

