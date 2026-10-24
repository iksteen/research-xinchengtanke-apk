namespace System.Threading.Tasks;

public class TaskFactory
{
	public sealed class CompleteOnInvokePromise : Task<Task>, ITaskCompletionAction
	{
		private IList<Task> _tasks; //Field offset: 0x58
		private int m_firstTaskAlreadyCompleted; //Field offset: 0x60

		public CompleteOnInvokePromise(IList<Task> tasks) { }

		public override void Invoke(Task completingTask) { }

	}

	private CancellationToken m_defaultCancellationToken; //Field offset: 0x10
	private TaskScheduler m_defaultScheduler; //Field offset: 0x18
	private TaskCreationOptions m_defaultCreationOptions; //Field offset: 0x20
	private TaskContinuationOptions m_defaultContinuationOptions; //Field offset: 0x24

	public TaskFactory() { }

	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler) { }

	internal static void CheckCreationOptions(TaskCreationOptions creationOptions) { }

	internal static void CheckFromAsyncOptions(TaskCreationOptions creationOptions, bool hasBeginMethod) { }

	internal static void CheckMultiTaskContinuationOptions(TaskContinuationOptions continuationOptions) { }

	internal static Task<Task> CommonCWAnyLogic(IList<Task> tasks) { }

	public Task FromAsync(Func<TArg1, AsyncCallback, Object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state) { }

	public Task FromAsync(Func<TArg1, AsyncCallback, Object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state, TaskCreationOptions creationOptions) { }

	public Task<TResult> StartNew(Func<Object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler) { }

}

