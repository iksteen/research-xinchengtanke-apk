namespace System.Collections.Generic;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Stack : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	internal struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private readonly Stack<T> _stack; //Field offset: 0x0
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

		internal Enumerator(Stack<T> stack) { }

		public override void Dispose() { }

		public override T get_Current() { }

		public override bool MoveNext() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

		private void ThrowEnumerationNotStartedOrEnded() { }

	}

	private T[] _array; //Field offset: 0x0
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

	public Stack`1() { }

	public override int get_Count() { }

	public T Peek() { }

	public T Pop() { }

	public void Push(T item) { }

	private override IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }

	private override void System.Collections.ICollection.CopyTo(Array array, int arrayIndex) { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private void ThrowForEmptyStack() { }

}

