namespace System.Threading.Tasks;

public class TaskCanceledException : OperationCanceledException
{
	private Task m_canceledTask; //Field offset: 0x90

	public TaskCanceledException() { }

	public TaskCanceledException(Task task) { }

	protected TaskCanceledException(SerializationInfo info, StreamingContext context) { }

}

