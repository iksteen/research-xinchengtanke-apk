namespace Mono.Unity;

internal class X509ChainImplUnityTls : X509ChainImpl
{
	private X509ChainElementCollection elements; //Field offset: 0x10
	private unitytls_x509list_ref nativeCertificateChain; //Field offset: 0x18
	private X509ChainPolicy policy; //Field offset: 0x20
	private List<X509ChainStatus> chainStatusList; //Field offset: 0x28

	public virtual X509ChainElementCollection ChainElements
	{
		 get { } //Length: 616
	}

	public virtual X509ChainPolicy ChainPolicy
	{
		 set { } //Length: 8
	}

	public virtual bool IsValid
	{
		 get { } //Length: 56
	}

	internal unitytls_x509list_ref NativeCertificateChain
	{
		internal get { } //Length: 8
	}

	internal X509ChainImplUnityTls(unitytls_x509list_ref nativeCertificateChain) { }

	public void AddStatus(X509ChainStatusFlags errorCode) { }

	protected virtual void Dispose(bool disposing) { }

	public virtual X509ChainElementCollection get_ChainElements() { }

	public virtual bool get_IsValid() { }

	internal unitytls_x509list_ref get_NativeCertificateChain() { }

	public virtual void Reset() { }

	public virtual void set_ChainPolicy(X509ChainPolicy value) { }

}

