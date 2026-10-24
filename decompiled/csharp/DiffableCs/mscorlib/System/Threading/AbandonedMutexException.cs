namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class AbandonedMutexException : SystemException
{
	private int m_MutexIndex; //Field offset: 0x88
	private Mutex m_Mutex; //Field offset: 0x90

	public AbandonedMutexException() { }

	public AbandonedMutexException(int location, WaitHandle handle) { }

	protected AbandonedMutexException(SerializationInfo info, StreamingContext context) { }

	private void SetupException(int location, WaitHandle handle) { }

}

