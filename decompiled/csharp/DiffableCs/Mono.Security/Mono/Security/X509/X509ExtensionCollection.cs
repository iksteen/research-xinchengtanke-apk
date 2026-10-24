namespace Mono.Security.X509;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class X509ExtensionCollection : CollectionBase, IEnumerable
{
	private bool readOnly; //Field offset: 0x18

	public X509ExtensionCollection() { }

	public X509ExtensionCollection(ASN1 asn1) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

