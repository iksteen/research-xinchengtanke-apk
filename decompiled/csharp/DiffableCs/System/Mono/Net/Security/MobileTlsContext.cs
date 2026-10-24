namespace Mono.Net.Security;

internal abstract class MobileTlsContext : IDisposable
{
	private MobileAuthenticatedStream parent; //Field offset: 0x10
	private bool serverMode; //Field offset: 0x18
	private string targetHost; //Field offset: 0x20
	private string serverName; //Field offset: 0x28
	private SslProtocols enabledProtocols; //Field offset: 0x30
	private X509Certificate serverCertificate; //Field offset: 0x38
	private X509CertificateCollection clientCertificates; //Field offset: 0x40
	private bool askForClientCert; //Field offset: 0x48
	private ICertificateValidator2 certificateValidator; //Field offset: 0x50

	protected X509CertificateCollection ClientCertificates
	{
		 get { } //Length: 8
	}

	public abstract bool IsAuthenticated
	{
		 get { } //Length: 0
	}

	public bool IsServer
	{
		 get { } //Length: 8
	}

	internal abstract X509Certificate LocalClientCertificate
	{
		internal get { } //Length: 0
	}

	internal X509Certificate LocalServerCertificate
	{
		internal get { } //Length: 8
	}

	internal MobileAuthenticatedStream Parent
	{
		internal get { } //Length: 8
	}

	protected string ServerName
	{
		 get { } //Length: 8
	}

	public MonoTlsSettings Settings
	{
		 get { } //Length: 28
	}

	protected string TargetHost
	{
		 get { } //Length: 8
	}

	public MobileTlsContext(MobileAuthenticatedStream parent, bool serverMode, string targetHost, SslProtocols enabledProtocols, X509Certificate serverCertificate, X509CertificateCollection clientCertificates, bool askForClientCert) { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	protected virtual void Finalize() { }

	public abstract void FinishHandshake() { }

	protected X509CertificateCollection get_ClientCertificates() { }

	public abstract bool get_IsAuthenticated() { }

	public bool get_IsServer() { }

	internal abstract X509Certificate get_LocalClientCertificate() { }

	internal X509Certificate get_LocalServerCertificate() { }

	internal MobileAuthenticatedStream get_Parent() { }

	protected string get_ServerName() { }

	public MonoTlsSettings get_Settings() { }

	protected string get_TargetHost() { }

	public abstract bool ProcessHandshake() { }

	public abstract ValueTuple<Int32, Boolean> Read(Byte[] buffer, int offset, int count) { }

	protected X509Certificate SelectClientCertificate(X509Certificate serverCertificate, String[] acceptableIssuers) { }

	public abstract void Shutdown() { }

	public abstract void StartHandshake() { }

	protected bool ValidateCertificate(X509Certificate leaf, X509Chain chain) { }

	public abstract ValueTuple<Int32, Boolean> Write(Byte[] buffer, int offset, int count) { }

}

