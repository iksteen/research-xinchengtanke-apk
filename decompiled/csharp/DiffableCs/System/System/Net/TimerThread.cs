namespace System.Net;

internal static class TimerThread
{
	public sealed class Callback : MulticastDelegate
	{

		public Callback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Timer timer, int timeNoticed, object context, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(Timer timer, int timeNoticed, object context) { }

	}

	private class InfiniteTimerQueue : Queue
	{

		internal InfiniteTimerQueue() { }

	}

	public abstract class Queue
	{
		private readonly int m_DurationMilliseconds; //Field offset: 0x10

		internal Queue(int durationMilliseconds) { }

	}

	public abstract class Timer : IDisposable
	{
		private readonly int m_StartTimeMilliseconds; //Field offset: 0x10
		private readonly int m_DurationMilliseconds; //Field offset: 0x14

		internal Timer(int durationMilliseconds) { }

		internal abstract bool Cancel() { }

		public override void Dispose() { }

	}

	private class TimerNode : Timer
	{
		private enum TimerState
		{
			Ready = 0,
			Fired = 1,
			Cancelled = 2,
			Sentinel = 3,
		}

		private TimerState m_TimerState; //Field offset: 0x18
		private Callback m_Callback; //Field offset: 0x20
		private object m_Context; //Field offset: 0x28
		private object m_QueueLock; //Field offset: 0x30
		private TimerNode next; //Field offset: 0x38
		private TimerNode prev; //Field offset: 0x40

		internal TimerNode Next
		{
			internal get { } //Length: 8
			internal set { } //Length: 8
		}

		internal TimerNode Prev
		{
			internal get { } //Length: 8
			internal set { } //Length: 8
		}

		internal TimerNode() { }

		internal virtual bool Cancel() { }

		internal TimerNode get_Next() { }

		internal TimerNode get_Prev() { }

		internal void set_Next(TimerNode value) { }

		internal void set_Prev(TimerNode value) { }

	}

	private class TimerQueue : Queue
	{
		private readonly TimerNode m_Timers; //Field offset: 0x18

		internal TimerQueue(int durationMilliseconds) { }

	}

	private static LinkedList<WeakReference> s_Queues; //Field offset: 0x0
	private static LinkedList<WeakReference> s_NewQueues; //Field offset: 0x8
	private static int s_ThreadState; //Field offset: 0x10
	private static AutoResetEvent s_ThreadReadyEvent; //Field offset: 0x18
	private static ManualResetEvent s_ThreadShutdownEvent; //Field offset: 0x20
	private static WaitHandle[] s_ThreadEvents; //Field offset: 0x28
	private static Hashtable s_QueuesCache; //Field offset: 0x30

	private static TimerThread() { }

	internal static Queue CreateQueue(int durationMilliseconds) { }

	private static void OnDomainUnload(object sender, EventArgs e) { }

	private static void StopTimerThread() { }

}

