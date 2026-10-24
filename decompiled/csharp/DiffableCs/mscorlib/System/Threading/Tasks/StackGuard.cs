namespace System.Threading.Tasks;

internal class StackGuard
{
	private int m_inliningDepth; //Field offset: 0x10

	public StackGuard() { }

	private bool CheckForSufficientStack() { }

	internal void EndInliningScope() { }

	internal bool TryBeginInliningScope() { }

}

