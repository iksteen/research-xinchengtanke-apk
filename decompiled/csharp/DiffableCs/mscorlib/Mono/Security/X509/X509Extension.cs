namespace Mono.Security.X509;

internal class X509Extension
{
	protected string extnOid; //Field offset: 0x10
	protected bool extnCritical; //Field offset: 0x18
	protected ASN1 extnValue; //Field offset: 0x20

	public X509Extension(ASN1 asn1) { }

	protected override void Decode() { }

	public virtual bool Equals(object obj) { }

	public virtual int GetHashCode() { }

	public virtual string ToString() { }

	private void WriteLine(StringBuilder sb, int n, int pos) { }

}

