namespace System.Security.Cryptography.X509Certificates;

internal sealed class X509CertificateImplMono : X509CertificateImpl
{
	private X509Certificate x509; //Field offset: 0x18

	public virtual bool IsValid
	{
		 get { } //Length: 16
	}

	public X509CertificateImplMono(X509Certificate x509) { }

	public virtual X509CertificateImpl Clone() { }

	protected virtual void Dispose(bool disposing) { }

	public virtual bool Equals(X509CertificateImpl other, out bool result) { }

	public virtual bool get_IsValid() { }

	protected virtual Byte[] GetCertHash(bool lazy) { }

	public virtual string GetIssuerName(bool legacyV1Mode) { }

	public virtual Byte[] GetRawCertData() { }

	public virtual Byte[] GetSerialNumber() { }

	public virtual string GetSubjectName(bool legacyV1Mode) { }

	public virtual DateTime GetValidFrom() { }

	public virtual DateTime GetValidUntil() { }

	public virtual string ToString(bool full) { }

}

