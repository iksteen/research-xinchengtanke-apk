namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Timer : MarshalByRefObject, IDisposable
{
	private sealed class Scheduler
	{
		private static Scheduler instance; //Field offset: 0x0
		private SortedList list; //Field offset: 0x10
		private ManualResetEvent changed; //Field offset: 0x18

		public static Scheduler Instance
		{
			 get { } //Length: 100
		}

		private static Scheduler() { }

		private Scheduler() { }

		private void Add(Timer timer) { }

		public void Change(Timer timer, long new_next_run) { }

		private int FindByDueTime(long nr) { }

		public static Scheduler get_Instance() { }

		private int InternalRemove(Timer timer) { }

		public void Remove(Timer timer) { }

		private void SchedulerThread() { }

		private void ShrinkIfNeeded(List<Timer> list, int initial) { }

		private static void TimerCB(object o) { }

	}

	private sealed class TimerComparer : IComparer
	{

		public TimerComparer() { }

		public override int Compare(object x, object y) { }

	}

	private static readonly Scheduler scheduler; //Field offset: 0x0
	private TimerCallback callback; //Field offset: 0x18
	private object state; //Field offset: 0x20
	private long due_time_ms; //Field offset: 0x28
	private long period_ms; //Field offset: 0x30
	private long next_run; //Field offset: 0x38
	private bool disposed; //Field offset: 0x40

	private static Timer() { }

	public Timer(TimerCallback callback, object state, int dueTime, int period) { }

	public Timer(TimerCallback callback, object state, TimeSpan dueTime, TimeSpan period) { }

	public bool Change(int dueTime, int period) { }

	public bool Change(TimeSpan dueTime, TimeSpan period) { }

	private bool Change(long dueTime, long period, bool first) { }

	public override void Dispose() { }

	private static long GetTimeMonotonic() { }

	private void Init(TimerCallback callback, object state, long dueTime, long period) { }

	internal void KeepRootedWhileScheduled() { }

}

