namespace System.Collections.Generic;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class List : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	internal struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private List<T> list; //Field offset: 0x0
		private int index; //Field offset: 0x0
		private int version; //Field offset: 0x0
		private T current; //Field offset: 0x0

		public override T Current
		{
			 get { } //Length: 12
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 180
		}

		internal Enumerator(List<T> list) { }

		public override void Dispose() { }

		public override T get_Current() { }

		public override bool MoveNext() { }

		private bool MoveNextRare() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

	}

	private const int _defaultCapacity = 4; //Field offset: 0x0
	private static readonly T[] _emptyArray; //Field offset: 0x0
	private T[] _items; //Field offset: 0x0
	private int _size; //Field offset: 0x0
	private int _version; //Field offset: 0x0
	private object _syncRoot; //Field offset: 0x0

	public int Capacity
	{
		 get { } //Length: 28
		 set { } //Length: 368
	}

	public override int Count
	{
		 get { } //Length: 8
	}

	public override T Item
	{
		 get { } //Length: 64
		 set { } //Length: 140
	}

	private override bool System.Collections.Generic.ICollection<T>.IsReadOnly
	{
		private get { } //Length: 8
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 116
	}

	private override bool System.Collections.IList.IsFixedSize
	{
		private get { } //Length: 8
	}

	private override bool System.Collections.IList.IsReadOnly
	{
		private get { } //Length: 8
	}

	private override object System.Collections.IList.Item
	{
		private get { } //Length: 108
		private set { } //Length: 424
	}

	private static List`1() { }

	public List`1(IEnumerable<T> collection) { }

	public List`1() { }

	public List`1(int capacity) { }

	public override void Add(T item) { }

	public void AddRange(IEnumerable<T> collection) { }

	public override void Clear() { }

	public override bool Contains(T item) { }

	public override void CopyTo(T[] array, int arrayIndex) { }

	public void CopyTo(int index, T[] array, int arrayIndex, int count) { }

	public void CopyTo(T[] array) { }

	private void EnsureCapacity(int min) { }

	public T Find(Predicate<T> match) { }

	public int FindIndex(int startIndex, int count, Predicate<T> match) { }

	public int FindIndex(Predicate<T> match) { }

	public int get_Capacity() { }

	public override int get_Count() { }

	public override T get_Item(int index) { }

	public Enumerator<T> GetEnumerator() { }

	public override int IndexOf(T item) { }

	public override void Insert(int index, T item) { }

	public void InsertRange(int index, IEnumerable<T> collection) { }

	private static bool IsCompatibleObject(object value) { }

	public override bool Remove(T item) { }

	public int RemoveAll(Predicate<T> match) { }

	public override void RemoveAt(int index) { }

	public void RemoveRange(int index, int count) { }

	public void Reverse(int index, int count) { }

	public void Reverse() { }

	public void set_Capacity(int value) { }

	public override void set_Item(int index, T value) { }

	public void Sort() { }

	public void Sort(IComparer<T> comparer) { }

	public void Sort(int index, int count, IComparer<T> comparer) { }

	public void Sort(Comparison<T> comparison) { }

	private override bool System.Collections.Generic.ICollection<T>.get_IsReadOnly() { }

	private override IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }

	private override void System.Collections.ICollection.CopyTo(Array array, int arrayIndex) { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private override int System.Collections.IList.Add(object item) { }

	private override bool System.Collections.IList.Contains(object item) { }

	private override bool System.Collections.IList.get_IsFixedSize() { }

	private override bool System.Collections.IList.get_IsReadOnly() { }

	private override object System.Collections.IList.get_Item(int index) { }

	private override int System.Collections.IList.IndexOf(object item) { }

	private override void System.Collections.IList.Insert(int index, object item) { }

	private override void System.Collections.IList.Remove(object item) { }

	private override void System.Collections.IList.set_Item(int index, object value) { }

	public T[] ToArray() { }

	public void TrimExcess() { }

}

