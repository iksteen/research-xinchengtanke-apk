namespace System;

public struct ArraySegment : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	private sealed class ArraySegmentEnumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private T[] _array; //Field offset: 0x0
		private int _start; //Field offset: 0x0
		private int _end; //Field offset: 0x0
		private int _current; //Field offset: 0x0

		public override T Current
		{
			 get { } //Length: 188
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 100
		}

		internal ArraySegmentEnumerator(ArraySegment<T> arraySegment) { }

		public override void Dispose() { }

		public override T get_Current() { }

		public override bool MoveNext() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

	}

	private T[] _array; //Field offset: 0x0
	private int _offset; //Field offset: 0x0
	private int _count; //Field offset: 0x0

	public T[] Array
	{
		 get { } //Length: 8
	}

	public override int Count
	{
		 get { } //Length: 8
	}

	public int Offset
	{
		 get { } //Length: 8
	}

	private override bool System.Collections.Generic.ICollection<T>.IsReadOnly
	{
		private get { } //Length: 8
	}

	private override T System.Collections.Generic.IList<T>.Item
	{
		private get { } //Length: 240
		private set { } //Length: 240
	}

	private override T System.Collections.Generic.IReadOnlyList<T>.Item
	{
		private get { } //Length: 240
	}

	public virtual bool Equals(object obj) { }

	public bool Equals(ArraySegment<T> obj) { }

	public T[] get_Array() { }

	public override int get_Count() { }

	public int get_Offset() { }

	public virtual int GetHashCode() { }

	private override void System.Collections.Generic.ICollection<T>.Add(T item) { }

	private override void System.Collections.Generic.ICollection<T>.Clear() { }

	private override bool System.Collections.Generic.ICollection<T>.Contains(T item) { }

	private override void System.Collections.Generic.ICollection<T>.CopyTo(T[] array, int arrayIndex) { }

	private override bool System.Collections.Generic.ICollection<T>.get_IsReadOnly() { }

	private override bool System.Collections.Generic.ICollection<T>.Remove(T item) { }

	private override IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }

	private override T System.Collections.Generic.IList<T>.get_Item(int index) { }

	private override int System.Collections.Generic.IList<T>.IndexOf(T item) { }

	private override void System.Collections.Generic.IList<T>.Insert(int index, T item) { }

	private override void System.Collections.Generic.IList<T>.RemoveAt(int index) { }

	private override void System.Collections.Generic.IList<T>.set_Item(int index, T value) { }

	private override T System.Collections.Generic.IReadOnlyList<T>.get_Item(int index) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

