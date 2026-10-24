namespace System.Collections;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal sealed class EmptyReadOnlyDictionaryInternal : IDictionary, ICollection, IEnumerable
{
	private sealed class NodeEnumerator : IDictionaryEnumerator, IEnumerator
	{

		public override object Current
		{
			 get { } //Length: 92
		}

		public override DictionaryEntry Entry
		{
			 get { } //Length: 92
		}

		public override object Key
		{
			 get { } //Length: 92
		}

		public override object Value
		{
			 get { } //Length: 92
		}

		public NodeEnumerator() { }

		public override object get_Current() { }

		public override DictionaryEntry get_Entry() { }

		public override object get_Key() { }

		public override object get_Value() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}


	public override int Count
	{
		 get { } //Length: 8
	}

	public override object Item
	{
		 get { } //Length: 124
		 set { } //Length: 396
	}

	public override object SyncRoot
	{
		 get { } //Length: 4
	}

	public EmptyReadOnlyDictionaryInternal() { }

	public override bool Contains(object key) { }

	public override void CopyTo(Array array, int index) { }

	public override int get_Count() { }

	public override object get_Item(object key) { }

	public override object get_SyncRoot() { }

	public override IDictionaryEnumerator GetEnumerator() { }

	public override void set_Item(object key, object value) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

