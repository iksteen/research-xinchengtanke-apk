namespace System.IO;

internal abstract class Iterator : IEnumerable<TSource>, IEnumerable, IEnumerator<TSource>, IDisposable, IEnumerator
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

	protected abstract Iterator<TSource> Clone() { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	public override TSource get_Current() { }

	public override IEnumerator<TSource> GetEnumerator() { }

	public abstract bool MoveNext() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private override object System.Collections.IEnumerator.get_Current() { }

	private override void System.Collections.IEnumerator.Reset() { }

}

