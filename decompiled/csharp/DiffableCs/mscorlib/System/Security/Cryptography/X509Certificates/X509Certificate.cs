namespace System.Security.Cryptography.X509Certificates;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[MonoTODO]
public class X509Certificate : IDeserializationCallback, ISerializable, IDisposable
{
	private X509CertificateImpl impl; //Field offset: 0x10
	private bool hideDates; //Field offset: 0x18
	private string issuer_name; //Field offset: 0x20
	private string subject_name; //Field offset: 0x28

	internal X509CertificateImpl Impl
	{
		internal get { } //Length: 40
	}

	public string Issuer
	{
		 get { } //Length: 96
	}

	internal bool IsValid
	{
		internal get { } //Length: 24
	}

	public string Subject
	{
		 get { } //Length: 96
	}

	internal X509Certificate(X509CertificateImpl impl) { }

	public X509Certificate() { }

	public X509Certificate(SerializationInfo info, StreamingContext context) { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	public override bool Equals(X509Certificate other) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual bool Equals(object obj) { }

	internal X509CertificateImpl get_Impl() { }

	public string get_Issuer() { }

	internal bool get_IsValid() { }

	public string get_Subject() { }

	public override Byte[] GetCertHash() { }

	public override string GetCertHashString() { }

	public virtual int GetHashCode() { }

	public override Byte[] GetRawCertData() { }

	public override Byte[] GetSerialNumber() { }

	public override string GetSerialNumberString() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[MonoTODO]
	public override void Import(Byte[] rawData, string password, X509KeyStorageFlags keyStorageFlags) { }

	internal void ImportHandle(X509CertificateImpl impl) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Reset() { }

	private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	public override string ToString(bool fVerbose) { }

	public virtual string ToString() { }

}

