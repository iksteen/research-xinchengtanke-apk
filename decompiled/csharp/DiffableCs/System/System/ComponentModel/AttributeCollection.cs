namespace System.ComponentModel;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class AttributeCollection : ICollection, IEnumerable
{
	public static readonly AttributeCollection Empty; //Field offset: 0x0
	private static object internalSyncObject; //Field offset: 0x8
	private Attribute[] _attributes; //Field offset: 0x10

	protected override Attribute[] Attributes
	{
		 get { } //Length: 8
	}

	public int Count
	{
		 get { } //Length: 40
	}

	private override int System.Collections.ICollection.Count
	{
		private get { } //Length: 40
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 8
	}

	private static AttributeCollection() { }

	public AttributeCollection(Attribute[] attributes) { }

	public override void CopyTo(Array array, int index) { }

	protected override Attribute[] get_Attributes() { }

	public int get_Count() { }

	public IEnumerator GetEnumerator() { }

	private override int System.Collections.ICollection.get_Count() { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

