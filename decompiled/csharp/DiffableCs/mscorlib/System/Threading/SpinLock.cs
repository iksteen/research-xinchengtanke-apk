namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct SpinLock
{
	public class SystemThreading_SpinLockDebugView
	{

	}

	private static int MAXIMUM_WAITERS; //Field offset: 0x0
	private int m_owner; //Field offset: 0x0

	public bool IsHeldByCurrentThread
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 164
	}

	public bool IsThreadOwnerTrackingEnabled
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 40
	}

	private static SpinLock() { }

	public SpinLock(bool enableThreadOwnerTracking) { }

	private void ContinueTryEnter(int millisecondsTimeout, ref bool lockTaken) { }

	private void ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, ref bool lockTaken) { }

	private void DecrementWaiters() { }

	public void Enter(ref bool lockTaken) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Exit(bool useMemoryBarrier) { }

	private void ExitSlowPath(bool useMemoryBarrier) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool get_IsHeldByCurrentThread() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool get_IsThreadOwnerTrackingEnabled() { }

	public void TryEnter(int millisecondsTimeout, ref bool lockTaken) { }

}

