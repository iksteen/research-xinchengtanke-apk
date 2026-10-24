namespace System.Security.Cryptography.X509Certificates;

public sealed class X509ChainPolicy
{
	private OidCollection apps; //Field offset: 0x10
	private OidCollection cert; //Field offset: 0x18
	private X509CertificateCollection store; //Field offset: 0x20
	private X509Certificate2Collection store2; //Field offset: 0x28
	private X509RevocationFlag rflag; //Field offset: 0x30
	private X509RevocationMode mode; //Field offset: 0x34
	private TimeSpan timeout; //Field offset: 0x38
	private X509VerificationFlags vflags; //Field offset: 0x40
	private DateTime vtime; //Field offset: 0x48

	public X509ChainPolicy() { }

	internal X509ChainPolicy(X509CertificateCollection store) { }

	public void Reset() { }

}

