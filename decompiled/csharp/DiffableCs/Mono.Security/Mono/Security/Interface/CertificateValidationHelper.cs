namespace Mono.Security.Interface;

public static class CertificateValidationHelper
{
	private static readonly bool noX509Chain; //Field offset: 0x0
	private static readonly bool supportsTrustAnchors; //Field offset: 0x1

	private static CertificateValidationHelper() { }

	internal static ICertificateValidator2 GetInternalValidator(MonoTlsSettings settings, MonoTlsProvider provider) { }

}

