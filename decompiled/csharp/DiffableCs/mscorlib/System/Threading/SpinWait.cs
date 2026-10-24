namespace System.Threading;

public struct SpinWait
{
	private int m_count; //Field offset: 0x0

	public bool NextSpinWillYield
	{
		 get { } //Length: 28
	}

	public bool get_NextSpinWillYield() { }

	public void SpinOnce() { }

}

