namespace System.Threading;

internal class SparselyPopulatedArray
{
	private SparselyPopulatedArrayFragment<T> m_tail; //Field offset: 0x0

	internal SparselyPopulatedArrayFragment<T> Tail
	{
		internal get { } //Length: 36
	}

	internal SparselyPopulatedArray`1(int initialSize) { }

	internal SparselyPopulatedArrayAddInfo<T> Add(T element) { }

	internal SparselyPopulatedArrayFragment<T> get_Tail() { }

}

