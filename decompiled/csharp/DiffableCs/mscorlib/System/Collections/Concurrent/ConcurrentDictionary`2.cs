namespace System.Collections.Concurrent;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ConcurrentDictionary : IDictionary<TKey, TValue>, ICollection<KeyValuePair`2<TKey, TValue>>, IEnumerable<KeyValuePair`2<TKey, TValue>>, IEnumerable, IDictionary, ICollection, IReadOnlyDictionary<TKey, TValue>, IReadOnlyCollection<KeyValuePair`2<TKey, TValue>>
{
	[CompilerGenerated]
	private sealed class <GetEnumerator>d__32 : IEnumerator<KeyValuePair`2<TKey, TValue>>, IDisposable, IEnumerator
	{
		private int <>1__state; //Field offset: 0x0
		private KeyValuePair<TKey, TValue> <>2__current; //Field offset: 0x0
		public ConcurrentDictionary<TKey, TValue> <>4__this; //Field offset: 0x0
		private Node<TKey, TValue>[] <buckets>5__1; //Field offset: 0x0
		private Node<TKey, TValue> <current>5__2; //Field offset: 0x0
		private int <i>5__3; //Field offset: 0x0

		private override KeyValuePair<TKey, TValue> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Current
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
		public <GetEnumerator>d__32(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override KeyValuePair<TKey, TValue> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private sealed class DictionaryEnumerator : IDictionaryEnumerator, IEnumerator
	{
		private IEnumerator<KeyValuePair`2<TKey, TValue>> _enumerator; //Field offset: 0x0

		public override object Current
		{
			 get { } //Length: 140
		}

		public override DictionaryEntry Entry
		{
			 get { } //Length: 348
		}

		public override object Key
		{
			 get { } //Length: 156
		}

		public override object Value
		{
			 get { } //Length: 164
		}

		internal DictionaryEnumerator(ConcurrentDictionary<TKey, TValue> dictionary) { }

		public override object get_Current() { }

		public override DictionaryEntry get_Entry() { }

		public override object get_Key() { }

		public override object get_Value() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}

	private sealed class Node
	{
		internal readonly TKey _key; //Field offset: 0x0
		internal TValue _value; //Field offset: 0x0
		internal Node<TKey, TValue> _next; //Field offset: 0x0
		internal readonly int _hashcode; //Field offset: 0x0

		internal Node(TKey key, TValue value, int hashcode, Node<TKey, TValue> next) { }

	}

	private sealed class Tables
	{
		internal readonly Node<TKey, TValue>[] _buckets; //Field offset: 0x0
		internal readonly Object[] _locks; //Field offset: 0x0
		internal Int32[] _countPerLock; //Field offset: 0x0

		internal Tables(Node<TKey, TValue>[] buckets, Object[] locks, Int32[] countPerLock) { }

	}

	private static readonly bool s_isValueWriteAtomic; //Field offset: 0x0
	private Tables<TKey, TValue> _tables; //Field offset: 0x0
	private IEqualityComparer<TKey> _comparer; //Field offset: 0x0
	private readonly bool _growLockArray; //Field offset: 0x0
	private int _budget; //Field offset: 0x0

	public override int Count
	{
		 get { } //Length: 292
	}

	private static int DefaultConcurrencyLevel
	{
		private get { } //Length: 8
	}

	public override TKey Item
	{
		 set { } //Length: 396
	}

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly
	{
		private get { } //Length: 8
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 84
	}

	private override object System.Collections.IDictionary.Item
	{
		private get { } //Length: 352
		private set { } //Length: 568
	}

	public override ICollection<TValue> Values
	{
		 get { } //Length: 36
	}

	private static ConcurrentDictionary`2() { }

	public ConcurrentDictionary`2() { }

	internal ConcurrentDictionary`2(int concurrencyLevel, int capacity, bool growLockArray, IEqualityComparer<TKey> comparer) { }

	private void AcquireAllLocks(ref int locksAcquired) { }

	private void AcquireLocks(int fromInclusive, int toExclusive, ref int locksAcquired) { }

	public override void Clear() { }

	public override bool ContainsKey(TKey key) { }

	private void CopyToEntries(DictionaryEntry[] array, int index) { }

	private void CopyToObjects(Object[] array, int index) { }

	private void CopyToPairs(KeyValuePair<TKey, TValue>[] array, int index) { }

	public override int get_Count() { }

	private static int get_DefaultConcurrencyLevel() { }

	public override ICollection<TValue> get_Values() { }

	private static int GetBucket(int hashcode, int bucketCount) { }

	private static void GetBucketAndLockNo(int hashcode, out int bucketNo, out int lockNo, int bucketCount, int lockCount) { }

	private int GetCountInternal() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override IEnumerator<KeyValuePair`2<TKey, TValue>> GetEnumerator() { }

	public TValue GetOrAdd(TKey key, Func<TKey, TValue> valueFactory) { }

	private ReadOnlyCollection<TValue> GetValues() { }

	private void GrowTable(Tables<TKey, TValue> tables) { }

	private static bool IsValueWriteAtomic() { }

	private void ReleaseLocks(int fromInclusive, int toExclusive) { }

	public override void set_Item(TKey key, TValue value) { }

	private override void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(KeyValuePair<TKey, TValue> keyValuePair) { }

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(KeyValuePair<TKey, TValue> keyValuePair) { }

	private override void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(KeyValuePair<TKey, TValue>[] array, int index) { }

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly() { }

	private override bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(KeyValuePair<TKey, TValue> keyValuePair) { }

	private override void System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey key, TValue value) { }

	private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override bool System.Collections.IDictionary.Contains(object key) { }

	private override object System.Collections.IDictionary.get_Item(object key) { }

	private override IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }

	private override void System.Collections.IDictionary.set_Item(object key, object value) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private static void ThrowKeyNullException() { }

	public bool TryAdd(TKey key, TValue value) { }

	private bool TryAddInternal(TKey key, int hashcode, TValue value, bool updateIfExists, bool acquireLock, out TValue resultingValue) { }

	public override bool TryGetValue(TKey key, out TValue value) { }

	private bool TryGetValueInternal(TKey key, int hashcode, out TValue value) { }

	private bool TryRemoveInternal(TKey key, out TValue value, bool matchValue, TValue oldValue) { }

}

