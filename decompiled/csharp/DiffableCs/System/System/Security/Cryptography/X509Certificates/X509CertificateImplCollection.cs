namespace System.Security.Cryptography.X509Certificates;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class X509CertificateImplCollection : IDisposable
{
	private List<X509CertificateImpl> list; //Field offset: 0x10

	public int Count
	{
		 get { } //Length: 76
	}

	public X509CertificateImpl Item
	{
		 get { } //Length: 116
	}

	public X509CertificateImplCollection() { }

	private X509CertificateImplCollection(X509CertificateImplCollection other) { }

	public void Add(X509CertificateImpl impl, bool takeOwnership) { }

	public X509CertificateImplCollection Clone() { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	protected virtual void Finalize() { }

	public int get_Count() { }

	public X509CertificateImpl get_Item(int index) { }

}

