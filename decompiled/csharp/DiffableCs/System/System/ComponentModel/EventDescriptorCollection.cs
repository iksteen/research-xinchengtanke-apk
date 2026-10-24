namespace System.ComponentModel;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class EventDescriptorCollection : ICollection, IEnumerable, IList
{
	public static readonly EventDescriptorCollection Empty; //Field offset: 0x0
	private EventDescriptor[] events; //Field offset: 0x10
	private String[] namedSort; //Field offset: 0x18
	private IComparer comparer; //Field offset: 0x20
	private bool eventsOwned; //Field offset: 0x28
	private bool needSort; //Field offset: 0x29
	private int eventCount; //Field offset: 0x2C
	private bool readOnly; //Field offset: 0x30

	public int Count
	{
		 get { } //Length: 8
	}

	public override EventDescriptor Item
	{
		 get { } //Length: 144
	}

	private override int System.Collections.ICollection.Count
	{
		private get { } //Length: 8
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 8
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
		private set { } //Length: 376
	}

	private static EventDescriptorCollection() { }

	public EventDescriptorCollection(EventDescriptor[] events) { }

	public EventDescriptorCollection(EventDescriptor[] events, bool readOnly) { }

	public int Add(EventDescriptor value) { }

	public void Clear() { }

	public bool Contains(EventDescriptor value) { }

	private void EnsureEventsOwned() { }

	private void EnsureSize(int sizeNeeded) { }

	public int get_Count() { }

	public override EventDescriptor get_Item(int index) { }

	public IEnumerator GetEnumerator() { }

	public int IndexOf(EventDescriptor value) { }

	public void Insert(int index, EventDescriptor value) { }

	protected void InternalSort(IComparer sorter) { }

	protected void InternalSort(String[] names) { }

	public void Remove(EventDescriptor value) { }

	public void RemoveAt(int index) { }

	private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

	private override int System.Collections.ICollection.get_Count() { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

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

