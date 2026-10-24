namespace System.Runtime.CompilerServices;

public sealed class ConditionalWeakTable
{
	internal sealed class CreateValueCallback : MulticastDelegate
	{

		public CreateValueCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(TKey key, AsyncCallback callback, object object) { }

		public override TValue EndInvoke(IAsyncResult result) { }

		public override TValue Invoke(TKey key) { }

	}

	private Ephemeron[] data; //Field offset: 0x0
	private object _lock; //Field offset: 0x0
	private int size; //Field offset: 0x0

	public ConditionalWeakTable`2() { }

	public void Add(TKey key, TValue value) { }

	protected virtual void Finalize() { }

	public TValue GetValue(TKey key, CreateValueCallback<TKey, TValue> createValueCallback) { }

	private void RecomputeSize() { }

	private void Rehash() { }

	private void RehashWithoutResize() { }

	public bool Remove(TKey key) { }

	public bool TryGetValue(TKey key, out TValue value) { }

}

