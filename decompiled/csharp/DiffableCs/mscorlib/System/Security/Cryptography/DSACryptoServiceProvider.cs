namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DSACryptoServiceProvider : DSA
{
	private static bool useMachineKeyStore; //Field offset: 0x0
	private KeyPairPersistence store; //Field offset: 0x20
	private bool persistKey; //Field offset: 0x28
	private bool persisted; //Field offset: 0x29
	private bool privateKeyExportable; //Field offset: 0x2A
	private bool m_disposed; //Field offset: 0x2B
	private DSAManaged dsa; //Field offset: 0x30

	public virtual int KeySize
	{
		 get { } //Length: 32
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool PublicOnly
	{
		 get { } //Length: 24
	}

	public DSACryptoServiceProvider() { }

	public DSACryptoServiceProvider(int dwKeySize) { }

	private void Common(int dwKeySize, bool parameters) { }

	protected virtual void Dispose(bool disposing) { }

	public virtual DSAParameters ExportParameters(bool includePrivateParameters) { }

	protected virtual void Finalize() { }

	public virtual int get_KeySize() { }

	public bool get_PublicOnly() { }

	public virtual void ImportParameters(DSAParameters parameters) { }

	private void OnKeyGenerated(object sender, EventArgs e) { }

}

