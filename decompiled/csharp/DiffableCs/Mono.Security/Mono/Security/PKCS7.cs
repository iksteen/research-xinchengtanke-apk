namespace Mono.Security;

public sealed class PKCS7
{
	internal class ContentInfo
	{
		private string contentType; //Field offset: 0x10
		private ASN1 content; //Field offset: 0x18

		public ASN1 ASN1
		{
			 get { } //Length: 4
		}

		public ASN1 Content
		{
			 get { } //Length: 8
			 set { } //Length: 8
		}

		public string ContentType
		{
			 get { } //Length: 8
			 set { } //Length: 8
		}

		public ContentInfo() { }

		public ContentInfo(string oid) { }

		public ContentInfo(Byte[] data) { }

		public ContentInfo(ASN1 asn1) { }

		public ASN1 get_ASN1() { }

		public ASN1 get_Content() { }

		public string get_ContentType() { }

		internal ASN1 GetASN1() { }

		public void set_Content(ASN1 value) { }

		public void set_ContentType(string value) { }

	}

	internal class EncryptedData
	{
		private byte _version; //Field offset: 0x10
		private ContentInfo _content; //Field offset: 0x18
		private ContentInfo _encryptionAlgorithm; //Field offset: 0x20
		private Byte[] _encrypted; //Field offset: 0x28

		public Byte[] EncryptedContent
		{
			 get { } //Length: 120
		}

		public ContentInfo EncryptionAlgorithm
		{
			 get { } //Length: 8
		}

		public EncryptedData() { }

		public EncryptedData(ASN1 asn1) { }

		public Byte[] get_EncryptedContent() { }

		public ContentInfo get_EncryptionAlgorithm() { }

	}


}

