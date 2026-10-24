namespace System.Security.Cryptography.X509Certificates;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class X509ChainElementCollection : ICollection, IEnumerable
{
	private ArrayList _list; //Field offset: 0x10

	public override int Count
	{
		 get { } //Length: 36
	}

	public X509ChainElement Item
	{
		 get { } //Length: 164
	}

	public override object SyncRoot
	{
		 get { } //Length: 36
	}

	internal X509ChainElementCollection() { }

	internal void Add(X509Certificate2 certificate) { }

	internal void Clear() { }

	public override int get_Count() { }

	public X509ChainElement get_Item(int index) { }

	public override object get_SyncRoot() { }

	private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

