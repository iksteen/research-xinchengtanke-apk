namespace System.ComponentModel;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class PropertyDescriptorCollection : ICollection, IEnumerable, IList, IDictionary
{
	private class PropertyDescriptorEnumerator : IDictionaryEnumerator, IEnumerator
	{
		private PropertyDescriptorCollection owner; //Field offset: 0x10
		private int index; //Field offset: 0x18

		public override object Current
		{
			 get { } //Length: 104
		}

		public override DictionaryEntry Entry
		{
			 get { } //Length: 116
		}

		public override object Key
		{
			 get { } //Length: 64
		}

		public override object Value
		{
			 get { } //Length: 64
		}

		public PropertyDescriptorEnumerator(PropertyDescriptorCollection owner) { }

		public override object get_Current() { }

		public override DictionaryEntry get_Entry() { }

		public override object get_Key() { }

		public override object get_Value() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}

	public static readonly PropertyDescriptorCollection Empty; //Field offset: 0x0
	private IDictionary cachedFoundProperties; //Field offset: 0x10
	private bool cachedIgnoreCase; //Field offset: 0x18
	private PropertyDescriptor[] properties; //Field offset: 0x20
	private int propCount; //Field offset: 0x28
	private String[] namedSort; //Field offset: 0x30
	private IComparer comparer; //Field offset: 0x38
	private bool propsOwned; //Field offset: 0x40
	private bool needSort; //Field offset: 0x41
	private bool readOnly; //Field offset: 0x42

	public int Count
	{
		 get { } //Length: 8
	}

	public override PropertyDescriptor Item
	{
		 get { } //Length: 144
	}

	public override PropertyDescriptor Item
	{
		 get { } //Length: 20
	}

	private override int System.Collections.ICollection.Count
	{
		private get { } //Length: 8
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 8
	}

	private override object System.Collections.IDictionary.Item
	{
		private get { } //Length: 132
		private set { } //Length: 996
	}

	private override bool System.Collections.IList.IsFixedSize
	{
		private get { } //Length: 8
	}

	private override bool System.Collections.IList.IsReadOnly
	{
		private get { } //Length: 8
	}

	private override object System.Collections.IList.Item
	{
		private get { } //Length: 16
		private set { } //Length: 484
	}

	private static PropertyDescriptorCollection() { }

	public PropertyDescriptorCollection(PropertyDescriptor[] properties) { }

	public PropertyDescriptorCollection(PropertyDescriptor[] properties, bool readOnly) { }

	public int Add(PropertyDescriptor value) { }

	public void Clear() { }

	public bool Contains(PropertyDescriptor value) { }

	public override void CopyTo(Array array, int index) { }

	private void EnsurePropsOwned() { }

	private void EnsureSize(int sizeNeeded) { }

	public override PropertyDescriptor Find(string name, bool ignoreCase) { }

	public int get_Count() { }

	public override PropertyDescriptor get_Item(int index) { }

	public override PropertyDescriptor get_Item(string name) { }

	public override IEnumerator GetEnumerator() { }

	public int IndexOf(PropertyDescriptor value) { }

	public void Insert(int index, PropertyDescriptor value) { }

	protected void InternalSort(String[] names) { }

	protected void InternalSort(IComparer sorter) { }

	public void Remove(PropertyDescriptor value) { }

	public void RemoveAt(int index) { }

	private override int System.Collections.ICollection.get_Count() { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override bool System.Collections.IDictionary.Contains(object key) { }

	private override object System.Collections.IDictionary.get_Item(object key) { }

	private override IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }

	private override void System.Collections.IDictionary.set_Item(object key, object value) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private override int System.Collections.IList.Add(object value) { }

	private override void System.Collections.IList.Clear() { }

	private override bool System.Collections.IList.Contains(object value) { }

	private override bool System.Collections.IList.get_IsFixedSize() { }

	private override bool System.Collections.IList.get_IsReadOnly() { }

	private override object System.Collections.IList.get_Item(int index) { }

	private override int System.Collections.IList.IndexOf(object value) { }

	private override void System.Collections.IList.Insert(int index, object value) { }

	private override void System.Collections.IList.Remove(object value) { }

	private override void System.Collections.IList.RemoveAt(int index) { }

	private override void System.Collections.IList.set_Item(int index, object value) { }

}

