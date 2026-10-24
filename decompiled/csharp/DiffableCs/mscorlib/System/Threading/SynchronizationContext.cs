namespace System.Threading;

public class SynchronizationContext
{

	public static SynchronizationContext Current
	{
		 get { } //Length: 76
	}

	internal static SynchronizationContext CurrentNoFlow
	{
		[FriendAccessAllowed]
		internal get { } //Length: 76
	}

	public SynchronizationContext() { }

	public override SynchronizationContext CreateCopy() { }

	public static SynchronizationContext get_Current() { }

	[FriendAccessAllowed]
	internal static SynchronizationContext get_CurrentNoFlow() { }

	private static SynchronizationContext GetThreadLocalContext() { }

	public override void OperationCompleted() { }

	public override void OperationStarted() { }

	public override void Post(SendOrPostCallback d, object state) { }

	public override void Send(SendOrPostCallback d, object state) { }

	public static void SetSynchronizationContext(SynchronizationContext syncContext) { }

}

