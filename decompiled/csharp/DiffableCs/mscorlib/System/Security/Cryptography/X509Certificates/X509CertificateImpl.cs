namespace System.Security.Cryptography.X509Certificates;

internal abstract class X509CertificateImpl : IDisposable
{
	private Byte[] cachedCertificateHash; //Field offset: 0x10

	public abstract bool IsValid
	{
		 get { } //Length: 0
	}

	protected X509CertificateImpl() { }

	public abstract X509CertificateImpl Clone() { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	public virtual bool Equals(object obj) { }

	public abstract bool Equals(X509CertificateImpl other, out bool result) { }

	protected virtual void Finalize() { }

	public abstract bool get_IsValid() { }

	public Byte[] GetCertHash() { }

	protected abstract Byte[] GetCertHash(bool lazy) { }

	public virtual int GetHashCode() { }

	public abstract string GetIssuerName(bool legacyV1Mode) { }

	public abstract Byte[] GetRawCertData() { }

	public abstract Byte[] GetSerialNumber() { }

	public abstract string GetSubjectName(bool legacyV1Mode) { }

	public abstract DateTime GetValidFrom() { }

	public abstract DateTime GetValidUntil() { }

	protected void ThrowIfContextInvalid() { }

	public abstract string ToString(bool full) { }

}

