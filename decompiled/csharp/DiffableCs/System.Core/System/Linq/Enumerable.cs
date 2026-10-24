namespace System.Linq;

[Extension]
public static class Enumerable
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass6_0
	{
		public Func<TSource, Boolean> predicate1; //Field offset: 0x0
		public Func<TSource, Boolean> predicate2; //Field offset: 0x0

		public <>c__DisplayClass6_0`1() { }

		internal bool <CombinePredicates>b__0(TSource x) { }

	}

	[CompilerGenerated]
	private sealed class <CastIterator>d__99 : IEnumerable<TResult>, IEnumerable, IEnumerator<TResult>, IDisposable, IEnumerator
	{
		private int <>1__state; //Field offset: 0x0
		private TResult <>2__current; //Field offset: 0x0
		private int <>l__initialThreadId; //Field offset: 0x0
		private IEnumerable source; //Field offset: 0x0
		public IEnumerable <>3__source; //Field offset: 0x0
		private IEnumerator <>7__wrap1; //Field offset: 0x0

		private override TResult System.Collections.Generic.IEnumerator<TResult>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 72
		}

		[DebuggerHidden]
		public <CastIterator>d__99`1(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<TResult> System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() { }

		[DebuggerHidden]
		private override TResult System.Collections.Generic.IEnumerator<TResult>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private abstract class Iterator : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
	{
		private int threadId; //Field offset: 0x0
		internal int state; //Field offset: 0x0
		internal TSource current; //Field offset: 0x0

		public override TSource Current
		{
			 get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 36
		}

		public Iterator`1() { }

		public abstract Iterator<TSource> Clone() { }

		public override void Dispose() { }

		public override TSource get_Current() { }

		public override IEnumerator<TSource> GetEnumerator() { }

		public abstract bool MoveNext() { }

		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

		public abstract IEnumerable<TSource> Where(Func<TSource, Boolean> predicate) { }

	}

	private class WhereArrayIterator : Iterator<TSource>
	{
		private TSource[] source; //Field offset: 0x0
		private Func<TSource, Boolean> predicate; //Field offset: 0x0
		private int index; //Field offset: 0x0

		public WhereArrayIterator`1(TSource[] source, Func<TSource, Boolean> predicate) { }

		public virtual Iterator<TSource> Clone() { }

		public virtual bool MoveNext() { }

		public virtual IEnumerable<TSource> Where(Func<TSource, Boolean> predicate) { }

	}

	private class WhereEnumerableIterator : Iterator<TSource>
	{
		private IEnumerable<TSource> source; //Field offset: 0x0
		private Func<TSource, Boolean> predicate; //Field offset: 0x0
		private IEnumerator<TSource> enumerator; //Field offset: 0x0

		public WhereEnumerableIterator`1(IEnumerable<TSource> source, Func<TSource, Boolean> predicate) { }

		public virtual Iterator<TSource> Clone() { }

		public virtual void Dispose() { }

		public virtual bool MoveNext() { }

		public virtual IEnumerable<TSource> Where(Func<TSource, Boolean> predicate) { }

	}

	private class WhereListIterator : Iterator<TSource>
	{
		private List<TSource> source; //Field offset: 0x0
		private Func<TSource, Boolean> predicate; //Field offset: 0x0
		private Enumerator<TSource> enumerator; //Field offset: 0x0

		public WhereListIterator`1(List<TSource> source, Func<TSource, Boolean> predicate) { }

		public virtual Iterator<TSource> Clone() { }

		public virtual bool MoveNext() { }

		public virtual IEnumerable<TSource> Where(Func<TSource, Boolean> predicate) { }

	}


	[Extension]
	public static bool Any(IEnumerable<TSource> source) { }

	[Extension]
	public static bool Any(IEnumerable<TSource> source, Func<TSource, Boolean> predicate) { }

	[Extension]
	public static IEnumerable<TResult> Cast(IEnumerable source) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static IEnumerable<TResult> CastIterator(IEnumerable source) { }

	private static Func<TSource, Boolean> CombinePredicates(Func<TSource, Boolean> predicate1, Func<TSource, Boolean> predicate2) { }

	[Extension]
	public static bool Contains(IEnumerable<TSource> source, TSource value) { }

	[Extension]
	public static bool Contains(IEnumerable<TSource> source, TSource value, IEqualityComparer<TSource> comparer) { }

	[Extension]
	public static int Count(IEnumerable<TSource> source) { }

	[Extension]
	public static TSource First(IEnumerable<TSource> source) { }

	[Extension]
	public static TSource Last(IEnumerable<TSource> source) { }

	[Extension]
	public static IOrderedEnumerable<TSource> OrderBy(IEnumerable<TSource> source, Func<TSource, TKey> keySelector) { }

	[Extension]
	public static TSource SingleOrDefault(IEnumerable<TSource> source, Func<TSource, Boolean> predicate) { }

	[Extension]
	public static IOrderedEnumerable<TSource> ThenBy(IOrderedEnumerable<TSource> source, Func<TSource, TKey> keySelector) { }

	[Extension]
	public static TSource[] ToArray(IEnumerable<TSource> source) { }

	[Extension]
	public static List<TSource> ToList(IEnumerable<TSource> source) { }

	[Extension]
	public static IEnumerable<TSource> Where(IEnumerable<TSource> source, Func<TSource, Boolean> predicate) { }

}

