namespace System.Security.Cryptography.X509Certificates;

internal abstract class X509Certificate2Impl : X509CertificateImpl
{

	internal abstract X509CertificateImplCollection IntermediateCertificates
	{
		internal get { } //Length: 0
	}

	public abstract AsymmetricAlgorithm PrivateKey
	{
		 get { } //Length: 0
	}

	public abstract PublicKey PublicKey
	{
		 get { } //Length: 0
	}

	public abstract Oid SignatureAlgorithm
	{
		 get { } //Length: 0
	}

	public abstract int Version
	{
		 get { } //Length: 0
	}

	protected X509Certificate2Impl() { }

	internal abstract X509CertificateImplCollection get_IntermediateCertificates() { }

	public abstract AsymmetricAlgorithm get_PrivateKey() { }

	public abstract PublicKey get_PublicKey() { }

	public abstract Oid get_SignatureAlgorithm() { }

	public abstract int get_Version() { }

	public abstract void Import(Byte[] rawData, string password, X509KeyStorageFlags keyStorageFlags) { }

	public abstract void Reset() { }

}

