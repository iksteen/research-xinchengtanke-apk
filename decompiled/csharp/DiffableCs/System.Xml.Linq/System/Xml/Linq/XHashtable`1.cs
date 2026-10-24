namespace System.Xml.Linq;

internal sealed class XHashtable
{
	internal sealed class ExtractKeyDelegate : MulticastDelegate
	{

		public ExtractKeyDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(TValue value, AsyncCallback callback, object object) { }

		public override string EndInvoke(IAsyncResult result) { }

		public override string Invoke(TValue value) { }

	}

	private sealed class XHashtableState
	{
		private struct Entry
		{
			public TValue Value; //Field offset: 0x0
			public int HashCode; //Field offset: 0x0
			public int Next; //Field offset: 0x0

		}

		private Int32[] buckets; //Field offset: 0x0
		private Entry<TValue>[] entries; //Field offset: 0x0
		private int numEntries; //Field offset: 0x0
		private ExtractKeyDelegate<TValue> extractKey; //Field offset: 0x0

		public XHashtableState(ExtractKeyDelegate<TValue> extractKey, int capacity) { }

		private static int ComputeHashCode(string key, int index, int count) { }

		private bool FindEntry(int hashCode, string key, int index, int count, ref int entryIndex) { }

		public XHashtableState<TValue> Resize() { }

		public bool TryAdd(TValue value, out TValue newValue) { }

		public bool TryGetValue(string key, int index, int count, out TValue value) { }

	}

	private XHashtableState<TValue> state; //Field offset: 0x0

	public XHashtable`1(ExtractKeyDelegate<TValue> extractKey, int capacity) { }

	public TValue Add(TValue value) { }

	public bool TryGetValue(string key, int index, int count, out TValue value) { }

}

