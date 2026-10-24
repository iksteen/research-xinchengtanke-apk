namespace System.Security.Cryptography.X509Certificates;

internal class X509Certificate2ImplMono : X509Certificate2Impl
{
	private static string empty_error; //Field offset: 0x0
	private static Byte[] commonName; //Field offset: 0x8
	private static Byte[] email; //Field offset: 0x10
	private static Byte[] signedData; //Field offset: 0x18
	private bool _archived; //Field offset: 0x18
	private X509ExtensionCollection _extensions; //Field offset: 0x20
	private PublicKey _publicKey; //Field offset: 0x28
	private X500DistinguishedName issuer_name; //Field offset: 0x30
	private X500DistinguishedName subject_name; //Field offset: 0x38
	private Oid signature_algorithm; //Field offset: 0x40
	private X509CertificateImplCollection intermediateCerts; //Field offset: 0x48
	private X509Certificate _cert; //Field offset: 0x50

	internal virtual X509CertificateImplCollection IntermediateCertificates
	{
		internal get { } //Length: 8
	}

	public virtual bool IsValid
	{
		 get { } //Length: 16
	}

	public virtual AsymmetricAlgorithm PrivateKey
	{
		 get { } //Length: 868
	}

	public virtual PublicKey PublicKey
	{
		 get { } //Length: 464
	}

	public virtual Oid SignatureAlgorithm
	{
		 get { } //Length: 296
	}

	public virtual int Version
	{
		 get { } //Length: 160
	}

	private static X509Certificate2ImplMono() { }

	private X509Certificate2ImplMono(X509Certificate2ImplMono other) { }

	public X509Certificate2ImplMono() { }

	private X509Certificate2ImplMono(X509Certificate cert) { }

	private static void AppendBuffer(StringBuilder sb, Byte[] buffer) { }

	public virtual X509CertificateImpl Clone() { }

	public virtual bool Equals(X509CertificateImpl other, out bool result) { }

	internal virtual X509CertificateImplCollection get_IntermediateCertificates() { }

	public virtual bool get_IsValid() { }

	public virtual AsymmetricAlgorithm get_PrivateKey() { }

	public virtual PublicKey get_PublicKey() { }

	public virtual Oid get_SignatureAlgorithm() { }

	public virtual int get_Version() { }

	protected virtual Byte[] GetCertHash(bool lazy) { }

	public virtual string GetIssuerName(bool legacyV1Mode) { }

	public virtual Byte[] GetRawCertData() { }

	public virtual Byte[] GetSerialNumber() { }

	public virtual string GetSubjectName(bool legacyV1Mode) { }

	public virtual DateTime GetValidFrom() { }

	public virtual DateTime GetValidUntil() { }

	[MonoTODO]
	public virtual void Import(Byte[] rawData, string password, X509KeyStorageFlags keyStorageFlags) { }

	private X509Certificate ImportPkcs12(Byte[] rawData, string password) { }

	public virtual void Reset() { }

	public virtual string ToString() { }

	public virtual string ToString(bool verbose) { }

}

