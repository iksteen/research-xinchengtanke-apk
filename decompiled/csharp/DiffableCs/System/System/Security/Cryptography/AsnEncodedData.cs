namespace System.Security.Cryptography;

public class AsnEncodedData
{
	internal Oid _oid; //Field offset: 0x10
	internal Byte[] _raw; //Field offset: 0x18

	public Oid Oid
	{
		 set { } //Length: 136
	}

	public Byte[] RawData
	{
		 get { } //Length: 8
		 set { } //Length: 220
	}

	protected AsnEncodedData() { }

	public AsnEncodedData(Oid oid, Byte[] rawData) { }

	internal string BasicConstraintsExtension(bool multiLine) { }

	public override void CopyFrom(AsnEncodedData asnEncodedData) { }

	internal string Default(bool multiLine) { }

	internal string EnhancedKeyUsageExtension(bool multiLine) { }

	public Byte[] get_RawData() { }

	internal string KeyUsageExtension(bool multiLine) { }

	internal string NetscapeCertType(bool multiLine) { }

	public void set_Oid(Oid value) { }

	public void set_RawData(Byte[] value) { }

	internal string SubjectAltName(bool multiLine) { }

	internal string SubjectKeyIdentifierExtension(bool multiLine) { }

	internal override string ToString(bool multiLine) { }

}

