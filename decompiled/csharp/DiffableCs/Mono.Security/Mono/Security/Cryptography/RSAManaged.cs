namespace Mono.Security.Cryptography;

public class RSAManaged : RSA
{
	internal sealed class KeyGeneratedEventHandler : MulticastDelegate
	{

		public KeyGeneratedEventHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object sender, EventArgs e, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object sender, EventArgs e) { }

	}

	private bool isCRTpossible; //Field offset: 0x20
	private bool keypairGenerated; //Field offset: 0x21
	private bool m_disposed; //Field offset: 0x22
	private BigInteger d; //Field offset: 0x28
	private BigInteger p; //Field offset: 0x30
	private BigInteger q; //Field offset: 0x38
	private BigInteger dp; //Field offset: 0x40
	private BigInteger dq; //Field offset: 0x48
	private BigInteger qInv; //Field offset: 0x50
	private BigInteger n; //Field offset: 0x58
	private BigInteger e; //Field offset: 0x60
	[CompilerGenerated]
	private KeyGeneratedEventHandler KeyGenerated; //Field offset: 0x68

	public bool PublicOnly
	{
		 get { } //Length: 192
	}

	public virtual RSAParameters ExportParameters(bool includePrivateParameters) { }

	private void GenerateKeyPair() { }

	public bool get_PublicOnly() { }

	private Byte[] GetPaddedValue(BigInteger value, int length) { }

	public virtual void ImportParameters(RSAParameters parameters) { }

}

