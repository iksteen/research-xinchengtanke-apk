namespace Mono.Security.Interface;

internal interface ICertificateValidator2 : ICertificateValidator
{

	public ValidationResult ValidateCertificate(string targetHost, bool serverMode, X509Certificate leaf, X509Chain chain) { }

}

