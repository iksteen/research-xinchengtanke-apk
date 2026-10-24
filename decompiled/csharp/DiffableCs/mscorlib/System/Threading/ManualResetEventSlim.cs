namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ManualResetEventSlim : IDisposable
{
	private static Action<Object> s_cancellationTokenCallback; //Field offset: 0x0
	private object m_lock; //Field offset: 0x10
	private ManualResetEvent m_eventObj; //Field offset: 0x18
	private int m_combinedState; //Field offset: 0x20

	public private bool IsSet
	{
		 get { } //Length: 104
		private set { } //Length: 36
	}

	public private int SpinCount
	{
		 get { } //Length: 104
		private set { } //Length: 64
	}

	private int Waiters
	{
		private get { } //Length: 104
		private set { } //Length: 172
	}

	public WaitHandle WaitHandle
	{
		 get { } //Length: 64
	}

	private static ManualResetEventSlim() { }

	public ManualResetEventSlim(bool initialState) { }

	public ManualResetEventSlim(bool initialState, int spinCount) { }

	private static void CancellationTokenCallback(object obj) { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	private void EnsureLockObjectCreated() { }

	private static int ExtractStatePortion(int state, int mask) { }

	private static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount) { }

	public bool get_IsSet() { }

	public int get_SpinCount() { }

	private int get_Waiters() { }

	public WaitHandle get_WaitHandle() { }

	private void Initialize(bool initialState, int spinCount) { }

	private bool LazyInitializeEvent() { }

	private void Set(bool duringCancellation) { }

	public void Set() { }

	private void set_IsSet(bool value) { }

	private void set_SpinCount(int value) { }

	private void set_Waiters(int value) { }

	private void ThrowIfDisposed() { }

	private void UpdateStateAtomically(int newBits, int updateBitsMask) { }

	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken) { }

}

