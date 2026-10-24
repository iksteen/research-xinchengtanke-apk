namespace System.Collections.Specialized;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ListDictionary : IDictionary, ICollection, IEnumerable
{
	private class DictionaryNode
	{
		public object key; //Field offset: 0x10
		public object value; //Field offset: 0x18
		public DictionaryNode next; //Field offset: 0x20

		public DictionaryNode() { }

	}

	private class NodeEnumerator : IDictionaryEnumerator, IEnumerator
	{
		private ListDictionary list; //Field offset: 0x10
		private DictionaryNode current; //Field offset: 0x18
		private int version; //Field offset: 0x20
		private bool start; //Field offset: 0x24

		public override object Current
		{
			 get { } //Length: 104
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

		public NodeEnumerator(ListDictionary list) { }

		public override object get_Current() { }

		public override DictionaryEntry get_Entry() { }

		public override object get_Key() { }

		public override object get_Value() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}

	private DictionaryNode head; //Field offset: 0x10
	private int version; //Field offset: 0x18
	private int count; //Field offset: 0x1C
	private IComparer comparer; //Field offset: 0x20
	private object _syncRoot; //Field offset: 0x28

	public override int Count
	{
		 get { } //Length: 8
	}

	public override object Item
	{
		 get { } //Length: 396
		 set { } //Length: 560
	}

	public override object SyncRoot
	{
		 get { } //Length: 120
	}

	public ListDictionary() { }

	public ListDictionary(IComparer comparer) { }

	public override void Add(object key, object value) { }

	public override bool Contains(object key) { }

	public override void CopyTo(Array array, int index) { }

	public override int get_Count() { }

	public override object get_Item(object key) { }

	public override object get_SyncRoot() { }

	public override IDictionaryEnumerator GetEnumerator() { }

	public override void set_Item(object key, object value) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

