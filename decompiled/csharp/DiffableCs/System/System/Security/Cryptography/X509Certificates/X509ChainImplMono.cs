namespace System.Security.Cryptography.X509Certificates;

internal class X509ChainImplMono : X509ChainImpl
{
	private static X509ChainStatus[] Empty; //Field offset: 0x0
	private StoreLocation location; //Field offset: 0x10
	private X509ChainElementCollection elements; //Field offset: 0x18
	private X509ChainPolicy policy; //Field offset: 0x20
	private X509ChainStatus[] status; //Field offset: 0x28
	private AsymmetricAlgorithm working_public_key; //Field offset: 0x30
	private X509ChainElement bce_restriction; //Field offset: 0x38
	private X509Certificate2Collection roots; //Field offset: 0x40
	private X509Certificate2Collection cas; //Field offset: 0x48
	private X509Store root_store; //Field offset: 0x50
	private X509Store ca_store; //Field offset: 0x58
	private X509Store user_root_store; //Field offset: 0x60
	private X509Store user_ca_store; //Field offset: 0x68
	private X509Certificate2Collection collection; //Field offset: 0x70

	public virtual X509ChainElementCollection ChainElements
	{
		 get { } //Length: 8
	}

	public virtual X509ChainPolicy ChainPolicy
	{
		 set { } //Length: 8
	}

	public virtual bool IsValid
	{
		 get { } //Length: 8
	}

	private static X509ChainImplMono() { }

	public X509ChainImplMono(bool useMachineContext) { }

	public virtual X509ChainElementCollection get_ChainElements() { }

	public virtual bool get_IsValid() { }

	public virtual void Reset() { }

	public virtual void set_ChainPolicy(X509ChainPolicy value) { }

}

