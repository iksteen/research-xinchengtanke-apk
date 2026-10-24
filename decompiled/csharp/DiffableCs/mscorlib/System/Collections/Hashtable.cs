namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Hashtable : IDictionary, ICollection, IEnumerable, ISerializable, IDeserializationCallback, ICloneable
{
	private struct bucket
	{
		public object key; //Field offset: 0x0
		public object val; //Field offset: 0x8
		public int hash_coll; //Field offset: 0x10

	}

	public class HashtableDebugView
	{

	}

	private class HashtableEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		private Hashtable hashtable; //Field offset: 0x10
		private int bucket; //Field offset: 0x18
		private int version; //Field offset: 0x1C
		private bool current; //Field offset: 0x20
		private int getObjectRetType; //Field offset: 0x24
		private object currentKey; //Field offset: 0x28
		private object currentValue; //Field offset: 0x30

		public override object Current
		{
			 get { } //Length: 240
		}

		public override DictionaryEntry Entry
		{
			 get { } //Length: 144
		}

		public override object Key
		{
			 get { } //Length: 108
		}

		public override object Value
		{
			 get { } //Length: 108
		}

		internal HashtableEnumerator(Hashtable hashtable, int getObjRetType) { }

		public override object Clone() { }

		public override object get_Current() { }

		public override DictionaryEntry get_Entry() { }

		public override object get_Key() { }

		public override object get_Value() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}

	private class KeyCollection : ICollection, IEnumerable
	{
		private Hashtable _hashtable; //Field offset: 0x10

		public override int Count
		{
			 get { } //Length: 28
		}

		public override object SyncRoot
		{
			 get { } //Length: 36
		}

		internal KeyCollection(Hashtable hashtable) { }

		public override void CopyTo(Array array, int arrayIndex) { }

		public override int get_Count() { }

		public override object get_SyncRoot() { }

		public override IEnumerator GetEnumerator() { }

	}

	[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private class SyncHashtable : Hashtable, IEnumerable
	{
		protected Hashtable _table; //Field offset: 0x50

		public virtual int Count
		{
			 get { } //Length: 36
		}

		public virtual object Item
		{
			 get { } //Length: 36
			 set { } //Length: 264
		}

		public virtual ICollection Keys
		{
			 get { } //Length: 264
		}

		public virtual object SyncRoot
		{
			 get { } //Length: 36
		}

		public virtual ICollection Values
		{
			 get { } //Length: 264
		}

		internal SyncHashtable(Hashtable table) { }

		internal SyncHashtable(SerializationInfo info, StreamingContext context) { }

		public virtual void Add(object key, object value) { }

		public virtual void Clear() { }

		public virtual object Clone() { }

		public virtual bool Contains(object key) { }

		public virtual bool ContainsKey(object key) { }

		public virtual void CopyTo(Array array, int arrayIndex) { }

		public virtual int get_Count() { }

		public virtual object get_Item(object key) { }

		public virtual ICollection get_Keys() { }

		public virtual object get_SyncRoot() { }

		public virtual ICollection get_Values() { }

		public virtual IDictionaryEnumerator GetEnumerator() { }

		public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

		public virtual void OnDeserialization(object sender) { }

		public virtual void Remove(object key) { }

		public virtual void set_Item(object key, object value) { }

		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	}

	private class ValueCollection : ICollection, IEnumerable
	{
		private Hashtable _hashtable; //Field offset: 0x10

		public override int Count
		{
			 get { } //Length: 28
		}

		public override object SyncRoot
		{
			 get { } //Length: 36
		}

		internal ValueCollection(Hashtable hashtable) { }

		public override void CopyTo(Array array, int arrayIndex) { }

		public override int get_Count() { }

		public override object get_SyncRoot() { }

		public override IEnumerator GetEnumerator() { }

	}

	private bucket[] buckets; //Field offset: 0x10
	private int count; //Field offset: 0x18
	private int occupancy; //Field offset: 0x1C
	private int loadsize; //Field offset: 0x20
	private float loadFactor; //Field offset: 0x24
	private int version; //Field offset: 0x28
	private bool isWriterInProgress; //Field offset: 0x2C
	private ICollection keys; //Field offset: 0x30
	private ICollection values; //Field offset: 0x38
	private IEqualityComparer _keycomparer; //Field offset: 0x40
	private object _syncRoot; //Field offset: 0x48

	public override int Count
	{
		 get { } //Length: 8
	}

	public override object Item
	{
		 get { } //Length: 544
		 set { } //Length: 8
	}

	public override ICollection Keys
	{
		 get { } //Length: 132
	}

	public override object SyncRoot
	{
		 get { } //Length: 116
	}

	public override ICollection Values
	{
		 get { } //Length: 132
	}

	internal Hashtable(bool trash) { }

	protected Hashtable(SerializationInfo info, StreamingContext context) { }

	public Hashtable(IEqualityComparer equalityComparer) { }

	[Obsolete]
	public Hashtable(IHashCodeProvider hcp, IComparer comparer) { }

	public Hashtable(int capacity, float loadFactor, IEqualityComparer equalityComparer) { }

	public Hashtable(int capacity, IEqualityComparer equalityComparer) { }

	public Hashtable(int capacity, float loadFactor) { }

	public Hashtable(int capacity) { }

	public Hashtable() { }

	[Obsolete]
	public Hashtable(int capacity, float loadFactor, IHashCodeProvider hcp, IComparer comparer) { }

	public override void Add(object key, object value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Clear() { }

	public override object Clone() { }

	public override bool Contains(object key) { }

	public override bool ContainsKey(object key) { }

	private void CopyEntries(Array array, int arrayIndex) { }

	private void CopyKeys(Array array, int arrayIndex) { }

	public override void CopyTo(Array array, int arrayIndex) { }

	private void CopyValues(Array array, int arrayIndex) { }

	private void expand() { }

	public override int get_Count() { }

	public override object get_Item(object key) { }

	public override ICollection get_Keys() { }

	public override object get_SyncRoot() { }

	public override ICollection get_Values() { }

	public override IDictionaryEnumerator GetEnumerator() { }

	protected override int GetHash(object key) { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	private uint InitHash(object key, int hashsize, out uint seed, out uint incr) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void Insert(object key, object nvalue, bool add) { }

	protected override bool KeyEquals(object item, object key) { }

	public override void OnDeserialization(object sender) { }

	private void putEntry(bucket[] newBuckets, object key, object nvalue, int hashcode) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void rehash(int newsize, bool forceNewHashCode) { }

	private void rehash() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Remove(object key) { }

	public override void set_Item(object key, object value) { }

	public static Hashtable Synchronized(Hashtable table) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private void UpdateVersion() { }

}

