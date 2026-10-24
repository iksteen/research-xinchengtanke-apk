namespace Mono.Security.Interface;

public interface ICertificateValidator
{

	public MonoTlsSettings Settings
	{
		 get { } //Length: 0
	}

	public MonoTlsSettings get_Settings() { }

	public bool SelectClientCertificate(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, String[] acceptableIssuers, out X509Certificate clientCertificate) { }

}

