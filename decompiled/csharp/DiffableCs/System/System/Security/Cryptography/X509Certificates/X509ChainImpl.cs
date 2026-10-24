namespace System.Security.Cryptography.X509Certificates;

internal abstract class X509ChainImpl : IDisposable
{

	public abstract X509ChainElementCollection ChainElements
	{
		 get { } //Length: 0
	}

	public abstract X509ChainPolicy ChainPolicy
	{
		 set { } //Length: 0
	}

	public abstract bool IsValid
	{
		 get { } //Length: 0
	}

	protected X509ChainImpl() { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	protected virtual void Finalize() { }

	public abstract X509ChainElementCollection get_ChainElements() { }

	public abstract bool get_IsValid() { }

	public abstract void Reset() { }

	public abstract void set_ChainPolicy(X509ChainPolicy value) { }

	protected void ThrowIfContextInvalid() { }

}

