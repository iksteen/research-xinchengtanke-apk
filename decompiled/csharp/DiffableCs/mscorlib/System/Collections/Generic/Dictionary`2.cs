namespace System.Collections.Generic;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Dictionary : IDictionary<TKey, TValue>, ICollection<KeyValuePair`2<TKey, TValue>>, IEnumerable<KeyValuePair`2<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair`2<TKey, TValue>>, ISerializable, IDeserializationCallback
{
	private struct Entry
	{
		public int hashCode; //Field offset: 0x0
		public int next; //Field offset: 0x0
		public TKey key; //Field offset: 0x0
		public TValue value; //Field offset: 0x0

	}

	internal struct Enumerator : IEnumerator<KeyValuePair`2<TKey, TValue>>, IDisposable, IEnumerator, IDictionaryEnumerator
	{
		private Dictionary<TKey, TValue> dictionary; //Field offset: 0x0
		private int version; //Field offset: 0x0
		private int index; //Field offset: 0x0
		private KeyValuePair<TKey, TValue> current; //Field offset: 0x0
		private int getEnumeratorRetType; //Field offset: 0x0

		public override KeyValuePair<TKey, TValue> Current
		{
			 get { } //Length: 20
		}

		private override DictionaryEntry System.Collections.IDictionaryEnumerator.Entry
		{
			private get { } //Length: 292
		}

		private override object System.Collections.IDictionaryEnumerator.Key
		{
			private get { } //Length: 240
		}

		private override object System.Collections.IDictionaryEnumerator.Value
		{
			private get { } //Length: 156
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 516
		}

		internal Enumerator(Dictionary<TKey, TValue> dictionary, int getEnumeratorRetType) { }

		public override void Dispose() { }

		public override KeyValuePair<TKey, TValue> get_Current() { }

		public override bool MoveNext() { }

		private override DictionaryEntry System.Collections.IDictionaryEnumerator.get_Entry() { }

		private override object System.Collections.IDictionaryEnumerator.get_Key() { }

		private override object System.Collections.IDictionaryEnumerator.get_Value() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

	}

	[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal sealed class KeyCollection : ICollection<TKey>, IEnumerable<TKey>, IEnumerable, ICollection, IReadOnlyCollection<TKey>
	{
		internal struct Enumerator : IEnumerator<TKey>, IDisposable, IEnumerator
		{
			private Dictionary<TKey, TValue> dictionary; //Field offset: 0x0
			private int index; //Field offset: 0x0
			private int version; //Field offset: 0x0
			private TKey currentKey; //Field offset: 0x0

			public override TKey Current
			{
				 get { } //Length: 12
			}

			private override object System.Collections.IEnumerator.Current
			{
				private get { } //Length: 204
			}

			internal Enumerator(Dictionary<TKey, TValue> dictionary) { }

			public override void Dispose() { }

			public override TKey get_Current() { }

			public override bool MoveNext() { }

			private override object System.Collections.IEnumerator.get_Current() { }

			private override void System.Collections.IEnumerator.Reset() { }

		}

		private Dictionary<TKey, TValue> dictionary; //Field offset: 0x0

		public override int Count
		{
			 get { } //Length: 40
		}

		private override bool System.Collections.Generic.ICollection<TKey>.IsReadOnly
		{
			private get { } //Length: 8
		}

		private override object System.Collections.ICollection.SyncRoot
		{
			private get { } //Length: 176
		}

		public KeyCollection(Dictionary<TKey, TValue> dictionary) { }

		public override void CopyTo(TKey[] array, int index) { }

		public override int get_Count() { }

		public Enumerator<TKey, TValue> GetEnumerator() { }

		private override void System.Collections.Generic.ICollection<TKey>.Add(TKey item) { }

		private override void System.Collections.Generic.ICollection<TKey>.Clear() { }

		private override bool System.Collections.Generic.ICollection<TKey>.Contains(TKey item) { }

		private override bool System.Collections.Generic.ICollection<TKey>.get_IsReadOnly() { }

		private override bool System.Collections.Generic.ICollection<TKey>.Remove(TKey item) { }

		private override IEnumerator<TKey> System.Collections.Generic.IEnumerable<TKey>.GetEnumerator() { }

		private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

		private override object System.Collections.ICollection.get_SyncRoot() { }

		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	}

	[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal sealed class ValueCollection : ICollection<TValue>, IEnumerable<TValue>, IEnumerable, ICollection, IReadOnlyCollection<TValue>
	{
		internal struct Enumerator : IEnumerator<TValue>, IDisposable, IEnumerator
		{
			private Dictionary<TKey, TValue> dictionary; //Field offset: 0x0
			private int index; //Field offset: 0x0
			private int version; //Field offset: 0x0
			private TValue currentValue; //Field offset: 0x0

			public override TValue Current
			{
				 get { } //Length: 8
			}

			private override object System.Collections.IEnumerator.Current
			{
				private get { } //Length: 136
			}

			internal Enumerator(Dictionary<TKey, TValue> dictionary) { }

			public override void Dispose() { }

			public override TValue get_Current() { }

			public override bool MoveNext() { }

			private override object System.Collections.IEnumerator.get_Current() { }

			private override void System.Collections.IEnumerator.Reset() { }

		}

		private Dictionary<TKey, TValue> dictionary; //Field offset: 0x0

		public override int Count
		{
			 get { } //Length: 40
		}

		private override bool System.Collections.Generic.ICollection<TValue>.IsReadOnly
		{
			private get { } //Length: 8
		}

		private override object System.Collections.ICollection.SyncRoot
		{
			private get { } //Length: 176
		}

		public ValueCollection(Dictionary<TKey, TValue> dictionary) { }

		public override void CopyTo(TValue[] array, int index) { }

		public override int get_Count() { }

		public Enumerator<TKey, TValue> GetEnumerator() { }

		private override void System.Collections.Generic.ICollection<TValue>.Add(TValue item) { }

		private override void System.Collections.Generic.ICollection<TValue>.Clear() { }

		private override bool System.Collections.Generic.ICollection<TValue>.Contains(TValue item) { }

		private override bool System.Collections.Generic.ICollection<TValue>.get_IsReadOnly() { }

		private override bool System.Collections.Generic.ICollection<TValue>.Remove(TValue item) { }

		private override IEnumerator<TValue> System.Collections.Generic.IEnumerable<TValue>.GetEnumerator() { }

		private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

		private override object System.Collections.ICollection.get_SyncRoot() { }

		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	}

	private const string VersionName = "Version"; //Field offset: 0x0
	private const string HashSizeName = "HashSize"; //Field offset: 0x0
	private const string KeyValuePairsName = "KeyValuePairs"; //Field offset: 0x0
	private const string ComparerName = "Comparer"; //Field offset: 0x0
	private Int32[] buckets; //Field offset: 0x0
	private Entry<TKey, TValue>[] entries; //Field offset: 0x0
	private int count; //Field offset: 0x0
	private int version; //Field offset: 0x0
	private int freeList; //Field offset: 0x0
	private int freeCount; //Field offset: 0x0
	private IEqualityComparer<TKey> comparer; //Field offset: 0x0
	private KeyCollection<TKey, TValue> keys; //Field offset: 0x0
	private ValueCollection<TKey, TValue> values; //Field offset: 0x0
	private object _syncRoot; //Field offset: 0x0

	public override int Count
	{
		 get { } //Length: 16
	}

	public override TValue Item
	{
		 get { } //Length: 156
		 set { } //Length: 40
	}

	public KeyCollection<TKey, TValue> Keys
	{
		 get { } //Length: 136
	}

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly
	{
		private get { } //Length: 8
	}

	private override ICollection<TValue> System.Collections.Generic.IDictionary<TKey,TValue>.Values
	{
		private get { } //Length: 136
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 116
	}

	private override object System.Collections.IDictionary.Item
	{
		private get { } //Length: 244
		private set { } //Length: 1032
	}

	public ValueCollection<TKey, TValue> Values
	{
		 get { } //Length: 136
	}

	public Dictionary`2() { }

	public Dictionary`2(int capacity) { }

	public Dictionary`2(IEqualityComparer<TKey> comparer) { }

	public Dictionary`2(int capacity, IEqualityComparer<TKey> comparer) { }

	protected Dictionary`2(SerializationInfo info, StreamingContext context) { }

	public override void Add(TKey key, TValue value) { }

	public override void Clear() { }

	public override bool ContainsKey(TKey key) { }

	public bool ContainsValue(TValue value) { }

	private void CopyTo(KeyValuePair<TKey, TValue>[] array, int index) { }

	private int FindEntry(TKey key) { }

	public override int get_Count() { }

	public override TValue get_Item(TKey key) { }

	public KeyCollection<TKey, TValue> get_Keys() { }

	public ValueCollection<TKey, TValue> get_Values() { }

	public Enumerator<TKey, TValue> GetEnumerator() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	private void Initialize(int capacity) { }

	private static bool IsCompatibleKey(object key) { }

	public override void OnDeserialization(object sender) { }

	public override bool Remove(TKey key) { }

	private void Resize(int newSize, bool forceNewHashCodes) { }

	private void Resize() { }

	public override void set_Item(TKey key, TValue value) { }

	private override void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(KeyValuePair<TKey, TValue> keyValuePair) { }

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(KeyValuePair<TKey, TValue> keyValuePair) { }

	private override void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(KeyValuePair<TKey, TValue>[] array, int index) { }

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly() { }

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(KeyValuePair<TKey, TValue> keyValuePair) { }

	private override ICollection<TValue> System.Collections.Generic.IDictionary<TKey,TValue>.get_Values() { }

	private override IEnumerator<KeyValuePair`2<TKey, TValue>> System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator() { }

	private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override bool System.Collections.IDictionary.Contains(object key) { }

	private override object System.Collections.IDictionary.get_Item(object key) { }

	private override IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }

	private override void System.Collections.IDictionary.set_Item(object key, object value) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	public override bool TryGetValue(TKey key, out TValue value) { }

	private bool TryInsert(TKey key, TValue value, InsertionBehavior behavior) { }

}

