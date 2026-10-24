namespace System.Collections.Generic;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Queue : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	internal struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private readonly Queue<T> _q; //Field offset: 0x0
		private readonly int _version; //Field offset: 0x0
		private int _index; //Field offset: 0x0
		private T _currentElement; //Field offset: 0x0

		public override T Current
		{
			 get { } //Length: 52
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 60
		}

		internal Enumerator(Queue<T> q) { }

		public override void Dispose() { }

		public override T get_Current() { }

		public override bool MoveNext() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

		private void ThrowEnumerationNotStartedOrEnded() { }

	}

	private T[] _array; //Field offset: 0x0
	private int _head; //Field offset: 0x0
	private int _tail; //Field offset: 0x0
	private int _size; //Field offset: 0x0
	private int _version; //Field offset: 0x0
	private object _syncRoot; //Field offset: 0x0

	public override int Count
	{
		 get { } //Length: 8
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 116
	}

	public Queue`1() { }

	public T Dequeue() { }

	public void Enqueue(T item) { }

	public override int get_Count() { }

	private void MoveNext(ref int index) { }

	private void SetCapacity(int capacity) { }

	private override IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }

	private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private void ThrowForEmptyQueue() { }

}

