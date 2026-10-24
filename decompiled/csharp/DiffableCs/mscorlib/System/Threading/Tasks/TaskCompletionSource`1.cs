namespace System.Threading.Tasks;

public class TaskCompletionSource
{
	private readonly Task<TResult> m_task; //Field offset: 0x0

	public Task<TResult> Task
	{
		 get { } //Length: 8
	}

	public TaskCompletionSource`1() { }

	public Task<TResult> get_Task() { }

	private void SpinUntilCompleted() { }

	public bool TrySetCanceled() { }

	public bool TrySetCanceled(CancellationToken cancellationToken) { }

	public bool TrySetException(Exception exception) { }

	public bool TrySetResult(TResult result) { }

}

