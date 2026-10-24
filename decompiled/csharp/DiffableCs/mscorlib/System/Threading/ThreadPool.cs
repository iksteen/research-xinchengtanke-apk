namespace System.Threading;

public static class ThreadPool
{

	private static void EnsureVMInitialized() { }

	private static void InitializeVMTp(ref bool enableWorkerTracking) { }

	internal static bool IsThreadPoolHosted() { }

	internal static bool NotifyWorkItemComplete() { }

	internal static void NotifyWorkItemProgress() { }

	internal static void NotifyWorkItemProgressNative() { }

	public static bool QueueUserWorkItem(WaitCallback callBack, object state) { }

	public static bool QueueUserWorkItem(WaitCallback callBack) { }

	private static bool QueueUserWorkItemHelper(WaitCallback callBack, object state, ref StackCrawlMark stackMark, bool compressStack) { }

	private static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, ref StackCrawlMark stackMark, bool compressStack) { }

	public static RegisteredWaitHandle RegisterWaitForSingleObject(WaitHandle waitObject, WaitOrTimerCallback callBack, object state, TimeSpan timeout, bool executeOnlyOnce) { }

	internal static void ReportThreadStatus(bool isWorking) { }

	internal static bool RequestWorkerThread() { }

	internal static bool TryPopCustomWorkItem(IThreadPoolWorkItem workItem) { }

	internal static void UnsafeQueueCustomWorkItem(IThreadPoolWorkItem workItem, bool forceGlobal) { }

	public static bool UnsafeQueueUserWorkItem(WaitCallback callBack, object state) { }

}

