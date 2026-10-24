namespace System.Threading.Tasks;

internal interface ITaskCompletionAction
{

	public void Invoke(Task completingTask) { }

}

