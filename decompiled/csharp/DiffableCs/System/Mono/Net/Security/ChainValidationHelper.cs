namespace Mono.Net.Security;

internal class ChainValidationHelper : ICertificateValidator2, ICertificateValidator
{
	private readonly object sender; //Field offset: 0x10
	private readonly MonoTlsSettings settings; //Field offset: 0x18
	private readonly MonoTlsProvider provider; //Field offset: 0x20
	private readonly ServerCertValidationCallback certValidationCallback; //Field offset: 0x28
	private readonly LocalCertSelectionCallback certSelectionCallback; //Field offset: 0x30
	private readonly ServerCertValidationCallbackWrapper callbackWrapper; //Field offset: 0x38
	private readonly MonoTlsStream tlsStream; //Field offset: 0x40
	private readonly HttpWebRequest request; //Field offset: 0x48

	public override MonoTlsSettings Settings
	{
		 get { } //Length: 8
	}

	private ChainValidationHelper(MonoTlsProvider provider, MonoTlsSettings settings, bool cloneSettings, MonoTlsStream stream, ServerCertValidationCallbackWrapper callbackWrapper) { }

	internal static ChainValidationHelper Create(MonoTlsProvider provider, ref MonoTlsSettings settings, MonoTlsStream stream) { }

	private static X509Certificate DefaultSelectionCallback(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, String[] acceptableIssuers) { }

	public override MonoTlsSettings get_Settings() { }

	internal static ICertificateValidator GetInternalValidator(MonoTlsProvider provider, MonoTlsSettings settings) { }

	public override bool SelectClientCertificate(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, String[] acceptableIssuers, out X509Certificate clientCertificate) { }

	public override ValidationResult ValidateCertificate(string host, bool serverMode, X509Certificate leaf, X509Chain chain) { }

	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors) { }

	private ValidationResult ValidateChain(string host, bool server, X509Certificate leaf, ref X509Chain chain, X509CertificateCollection certs, SslPolicyErrors errors) { }

}

