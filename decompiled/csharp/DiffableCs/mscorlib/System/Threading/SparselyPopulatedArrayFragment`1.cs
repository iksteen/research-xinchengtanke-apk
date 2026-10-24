namespace System.Threading;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class SparselyPopulatedArrayFragment
{
	internal readonly T[] m_elements; //Field offset: 0x0
	internal int m_freeCount; //Field offset: 0x0
	internal SparselyPopulatedArrayFragment<T> m_next; //Field offset: 0x0
	internal SparselyPopulatedArrayFragment<T> m_prev; //Field offset: 0x0

	internal T Item
	{
		internal get { } //Length: 76
	}

	internal int Length
	{
		internal get { } //Length: 28
	}

	internal SparselyPopulatedArrayFragment<T> Prev
	{
		internal get { } //Length: 36
	}

	internal SparselyPopulatedArrayFragment`1(int size) { }

	internal SparselyPopulatedArrayFragment`1(int size, SparselyPopulatedArrayFragment<T> prev) { }

	internal T get_Item(int index) { }

	internal int get_Length() { }

	internal SparselyPopulatedArrayFragment<T> get_Prev() { }

	internal T SafeAtomicRemove(int index, T expectedElement) { }

}

