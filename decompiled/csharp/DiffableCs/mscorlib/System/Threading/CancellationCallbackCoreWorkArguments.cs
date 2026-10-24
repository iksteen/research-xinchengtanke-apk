namespace System.Threading;

internal struct CancellationCallbackCoreWorkArguments
{
	internal SparselyPopulatedArrayFragment<CancellationCallbackInfo> m_currArrayFragment; //Field offset: 0x0
	internal int m_currArrayIndex; //Field offset: 0x8

	public CancellationCallbackCoreWorkArguments(SparselyPopulatedArrayFragment<CancellationCallbackInfo> currArrayFragment, int currArrayIndex) { }

}

