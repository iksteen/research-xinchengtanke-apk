namespace System.Collections.Specialized;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class HybridDictionary : IDictionary, ICollection, IEnumerable
{
	private ListDictionary list; //Field offset: 0x10
	private Hashtable hashtable; //Field offset: 0x18
	private bool caseInsensitive; //Field offset: 0x20

	public override int Count
	{
		 get { } //Length: 52
	}

	public override object Item
	{
		 get { } //Length: 168
		 set { } //Length: 376
	}

	private ListDictionary List
	{
		private get { } //Length: 260
	}

	public override object SyncRoot
	{
		 get { } //Length: 4
	}

	public HybridDictionary() { }

	public HybridDictionary(bool caseInsensitive) { }

	public override void Add(object key, object value) { }

	private void ChangeOver() { }

	public override bool Contains(object key) { }

	public override void CopyTo(Array array, int index) { }

	public override int get_Count() { }

	public override object get_Item(object key) { }

	private ListDictionary get_List() { }

	public override object get_SyncRoot() { }

	public override IDictionaryEnumerator GetEnumerator() { }

	public override void set_Item(object key, object value) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

