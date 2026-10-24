namespace Mono.Security.X509;

public class X509Certificate : ISerializable
{
	private static string encoding_error; //Field offset: 0x0
	private ASN1 decoder; //Field offset: 0x10
	private Byte[] m_encodedcert; //Field offset: 0x18
	private DateTime m_from; //Field offset: 0x20
	private DateTime m_until; //Field offset: 0x28
	private ASN1 issuer; //Field offset: 0x30
	private string m_issuername; //Field offset: 0x38
	private string m_keyalgo; //Field offset: 0x40
	private Byte[] m_keyalgoparams; //Field offset: 0x48
	private ASN1 subject; //Field offset: 0x50
	private string m_subject; //Field offset: 0x58
	private Byte[] m_publickey; //Field offset: 0x60
	private Byte[] signature; //Field offset: 0x68
	private string m_signaturealgo; //Field offset: 0x70
	private Byte[] m_signaturealgoparams; //Field offset: 0x78
	private RSA _rsa; //Field offset: 0x80
	private DSA _dsa; //Field offset: 0x88
	private int version; //Field offset: 0x90
	private Byte[] serialnumber; //Field offset: 0x98
	private Byte[] issuerUniqueID; //Field offset: 0xA0
	private Byte[] subjectUniqueID; //Field offset: 0xA8
	private X509ExtensionCollection extensions; //Field offset: 0xB0

	public DSA DSA
	{
		 get { } //Length: 768
		 set { } //Length: 68
	}

	public override string IssuerName
	{
		 get { } //Length: 8
	}

	public override string KeyAlgorithm
	{
		 get { } //Length: 8
	}

	public override Byte[] KeyAlgorithmParameters
	{
		 get { } //Length: 120
	}

	public override Byte[] PublicKey
	{
		 get { } //Length: 120
	}

	public override Byte[] RawData
	{
		 get { } //Length: 120
	}

	public override RSA RSA
	{
		 get { } //Length: 464
		 set { } //Length: 64
	}

	public override Byte[] SerialNumber
	{
		 get { } //Length: 120
	}

	public override string SignatureAlgorithm
	{
		 get { } //Length: 8
	}

	public override string SubjectName
	{
		 get { } //Length: 8
	}

	public override DateTime ValidFrom
	{
		 get { } //Length: 8
	}

	public override DateTime ValidUntil
	{
		 get { } //Length: 8
	}

	public int Version
	{
		 get { } //Length: 8
	}

	private static X509Certificate() { }

	public X509Certificate(Byte[] data) { }

	public DSA get_DSA() { }

	public override string get_IssuerName() { }

	public override string get_KeyAlgorithm() { }

	public override Byte[] get_KeyAlgorithmParameters() { }

	public override Byte[] get_PublicKey() { }

	public override Byte[] get_RawData() { }

	public override RSA get_RSA() { }

	public override Byte[] get_SerialNumber() { }

	public override string get_SignatureAlgorithm() { }

	public override string get_SubjectName() { }

	public override DateTime get_ValidFrom() { }

	public override DateTime get_ValidUntil() { }

	public int get_Version() { }

	public ASN1 GetIssuerName() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	public ASN1 GetSubjectName() { }

	private Byte[] GetUnsignedBigInteger(Byte[] integer) { }

	private void Parse(Byte[] data) { }

	private static Byte[] PEM(string type, Byte[] data) { }

	public void set_DSA(DSA value) { }

	public override void set_RSA(RSA value) { }

}

