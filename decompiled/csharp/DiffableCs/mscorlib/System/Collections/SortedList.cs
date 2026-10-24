namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SortedList : IDictionary, ICollection, IEnumerable, ICloneable
{
	public class SortedListDebugView
	{

	}

	private class SortedListEnumerator : IDictionaryEnumerator, IEnumerator, ICloneable
	{
		private SortedList sortedList; //Field offset: 0x10
		private object key; //Field offset: 0x18
		private object value; //Field offset: 0x20
		private int index; //Field offset: 0x28
		private int startIndex; //Field offset: 0x2C
		private int endIndex; //Field offset: 0x30
		private int version; //Field offset: 0x34
		private bool current; //Field offset: 0x38
		private int getObjectRetType; //Field offset: 0x3C

		public override object Current
		{
			 get { } //Length: 240
		}

		public override DictionaryEntry Entry
		{
			 get { } //Length: 184
		}

		public override object Key
		{
			 get { } //Length: 156
		}

		public override object Value
		{
			 get { } //Length: 156
		}

		internal SortedListEnumerator(SortedList sortedList, int index, int count, int getObjRetType) { }

		public override object Clone() { }

		public override object get_Current() { }

		public override DictionaryEntry get_Entry() { }

		public override object get_Key() { }

		public override object get_Value() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}

	[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private class SyncSortedList : SortedList
	{
		private SortedList _list; //Field offset: 0x40
		private object _root; //Field offset: 0x48

		public virtual int Capacity
		{
			 get { } //Length: 236
		}

		public virtual int Count
		{
			 get { } //Length: 236
		}

		public virtual object Item
		{
			 get { } //Length: 244
			 set { } //Length: 236
		}

		public virtual object SyncRoot
		{
			 get { } //Length: 8
		}

		internal SyncSortedList(SortedList list) { }

		public virtual void Add(object key, object value) { }

		public virtual object Clone() { }

		public virtual bool Contains(object key) { }

		public virtual bool ContainsKey(object key) { }

		public virtual bool ContainsValue(object key) { }

		public virtual void CopyTo(Array array, int index) { }

		public virtual int get_Capacity() { }

		public virtual int get_Count() { }

		public virtual object get_Item(object key) { }

		public virtual object get_SyncRoot() { }

		public virtual object GetByIndex(int index) { }

		public virtual IDictionaryEnumerator GetEnumerator() { }

		public virtual object GetKey(int index) { }

		public virtual IList GetValueList() { }

		public virtual int IndexOfKey(object key) { }

		public virtual int IndexOfValue(object value) { }

		public virtual void Remove(object key) { }

		public virtual void RemoveAt(int index) { }

		public virtual void set_Item(object key, object value) { }

	}

	[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private class ValueList : IList, ICollection, IEnumerable
	{
		private SortedList sortedList; //Field offset: 0x10

		public override int Count
		{
			 get { } //Length: 28
		}

		public override bool IsFixedSize
		{
			 get { } //Length: 8
		}

		public override bool IsReadOnly
		{
			 get { } //Length: 8
		}

		public override object Item
		{
			 get { } //Length: 36
			 set { } //Length: 92
		}

		public override object SyncRoot
		{
			 get { } //Length: 36
		}

		internal ValueList(SortedList sortedList) { }

		public override int Add(object key) { }

		public override void Clear() { }

		public override bool Contains(object value) { }

		public override void CopyTo(Array array, int arrayIndex) { }

		public override int get_Count() { }

		public override bool get_IsFixedSize() { }

		public override bool get_IsReadOnly() { }

		public override object get_Item(int index) { }

		public override object get_SyncRoot() { }

		public override IEnumerator GetEnumerator() { }

		public override int IndexOf(object value) { }

		public override void Insert(int index, object value) { }

		public override void Remove(object value) { }

		public override void RemoveAt(int index) { }

		public override void set_Item(int index, object value) { }

	}

	private static Object[] emptyArray; //Field offset: 0x0
	private Object[] keys; //Field offset: 0x10
	private Object[] values; //Field offset: 0x18
	private int _size; //Field offset: 0x20
	private int version; //Field offset: 0x24
	private IComparer comparer; //Field offset: 0x28
	private ValueList valueList; //Field offset: 0x30
	private object _syncRoot; //Field offset: 0x38

	public override int Capacity
	{
		 get { } //Length: 28
		 set { } //Length: 488
	}

	public override int Count
	{
		 get { } //Length: 8
	}

	public override object Item
	{
		 get { } //Length: 100
		 set { } //Length: 316
	}

	public override object SyncRoot
	{
		 get { } //Length: 116
	}

	public override ICollection Values
	{
		 get { } //Length: 16
	}

	private static SortedList() { }

	public SortedList(IComparer comparer, int capacity) { }

	public SortedList(IComparer comparer) { }

	public SortedList() { }

	public SortedList(int initialCapacity) { }

	public override void Add(object key, object value) { }

	public override object Clone() { }

	public override bool Contains(object key) { }

	public override bool ContainsKey(object key) { }

	public override bool ContainsValue(object value) { }

	public override void CopyTo(Array array, int arrayIndex) { }

	private void EnsureCapacity(int min) { }

	public override int get_Capacity() { }

	public override int get_Count() { }

	public override object get_Item(object key) { }

	public override object get_SyncRoot() { }

	public override ICollection get_Values() { }

	public override object GetByIndex(int index) { }

	public override IDictionaryEnumerator GetEnumerator() { }

	public override object GetKey(int index) { }

	public override IList GetValueList() { }

	public override int IndexOfKey(object key) { }

	public override int IndexOfValue(object value) { }

	private void Init() { }

	private void Insert(int index, object key, object value) { }

	public override void Remove(object key) { }

	public override void RemoveAt(int index) { }

	public override void set_Capacity(int value) { }

	public override void set_Item(object key, object value) { }

	public static SortedList Synchronized(SortedList list) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

