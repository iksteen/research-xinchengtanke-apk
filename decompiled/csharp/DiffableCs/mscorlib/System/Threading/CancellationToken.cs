namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct CancellationToken
{
	private static readonly Action<Object> s_ActionToActionObjShunt; //Field offset: 0x0
	private CancellationTokenSource m_source; //Field offset: 0x0

	public bool CanBeCanceled
	{
		 get { } //Length: 56
	}

	public bool IsCancellationRequested
	{
		 get { } //Length: 56
	}

	public static CancellationToken None
	{
		 get { } //Length: 8
	}

	private static CancellationToken() { }

	internal CancellationToken(CancellationTokenSource source) { }

	private static void ActionToActionObjShunt(object obj) { }

	public virtual bool Equals(object other) { }

	public bool Equals(CancellationToken other) { }

	public bool get_CanBeCanceled() { }

	public bool get_IsCancellationRequested() { }

	public static CancellationToken get_None() { }

	public virtual int GetHashCode() { }

	internal CancellationTokenRegistration InternalRegisterWithoutEC(Action<Object> callback, object state) { }

	public static bool op_Equality(CancellationToken left, CancellationToken right) { }

	public static bool op_Inequality(CancellationToken left, CancellationToken right) { }

	public CancellationTokenRegistration Register(Action callback) { }

	private CancellationTokenRegistration Register(Action<Object> callback, object state, bool useSynchronizationContext, bool useExecutionContext) { }

	public void ThrowIfCancellationRequested() { }

	internal void ThrowIfSourceDisposed() { }

	private static void ThrowObjectDisposedException() { }

	private void ThrowOperationCanceledException() { }

}

