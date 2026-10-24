namespace System.Security.Cryptography.X509Certificates;

public class X509Certificate2 : X509Certificate
{
	private static Byte[] signedData; //Field offset: 0x0
	private string friendlyName; //Field offset: 0x30

	internal X509Certificate2Impl Impl
	{
		internal get { } //Length: 152
	}

	public DateTime NotAfter
	{
		 get { } //Length: 68
	}

	public DateTime NotBefore
	{
		 get { } //Length: 68
	}

	public AsymmetricAlgorithm PrivateKey
	{
		 get { } //Length: 40
	}

	public PublicKey PublicKey
	{
		 get { } //Length: 40
	}

	public string SerialNumber
	{
		 get { } //Length: 12
	}

	public Oid SignatureAlgorithm
	{
		 get { } //Length: 40
	}

	public string Thumbprint
	{
		 get { } //Length: 12
	}

	public int Version
	{
		 get { } //Length: 40
	}

	private static X509Certificate2() { }

	public X509Certificate2() { }

	public X509Certificate2(Byte[] rawData) { }

	protected X509Certificate2(SerializationInfo info, StreamingContext context) { }

	private static void AppendBuffer(StringBuilder sb, Byte[] buffer) { }

	internal X509Certificate2Impl get_Impl() { }

	public DateTime get_NotAfter() { }

	public DateTime get_NotBefore() { }

	public AsymmetricAlgorithm get_PrivateKey() { }

	public PublicKey get_PublicKey() { }

	public string get_SerialNumber() { }

	public Oid get_SignatureAlgorithm() { }

	public string get_Thumbprint() { }

	public int get_Version() { }

	[MonoTODO]
	public virtual void Import(Byte[] rawData, string password, X509KeyStorageFlags keyStorageFlags) { }

	public virtual void Reset() { }

	public virtual string ToString() { }

	public virtual string ToString(bool verbose) { }

}

