//Type is in global namespace

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class BetterList
{
	[CompilerGenerated]
	private sealed class <GetEnumerator>d__2 : IEnumerator<T>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x0
		private T <>2__current; //Field offset: 0x0
		public BetterList<T> <>4__this; //Field offset: 0x0
		private int <i>5__2; //Field offset: 0x0

		private override T System.Collections.Generic.IEnumerator<T>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 12
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 80
		}

		[DebuggerHidden]
		public <GetEnumerator>d__2(int <>1__state) { }

		[DebuggerHidden]
		[DebuggerStepThrough]
		private override bool MoveNext() { }

		[DebuggerHidden]
		private override T System.Collections.Generic.IEnumerator<T>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal sealed class CompareFunc : MulticastDelegate
	{

		public CompareFunc(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(T left, T right, AsyncCallback callback, object object) { }

		public override int EndInvoke(IAsyncResult result) { }

		public override int Invoke(T left, T right) { }

	}

	public T[] buffer; //Field offset: 0x0
	public int size; //Field offset: 0x0

	[DebuggerHidden]
	[Obsolete]
	public T Item
	{
		 get { } //Length: 68
		 set { } //Length: 68
	}

	public BetterList`1() { }

	public void Add(T item) { }

	private void AllocateMore() { }

	public void Clear() { }

	public bool Contains(T item) { }

	public T get_Item(int i) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IEnumerator<T> GetEnumerator() { }

	public int IndexOf(T item) { }

	public void Insert(int index, T item) { }

	public T Pop() { }

	public void Release() { }

	public bool Remove(T item) { }

	public void RemoveAt(int index) { }

	public void set_Item(int i, T value) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public void Sort(CompareFunc<T> comparer) { }

	public T[] ToArray() { }

	private void Trim() { }

}

