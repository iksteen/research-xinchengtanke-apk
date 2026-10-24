namespace System.Security.Cryptography.X509Certificates;

internal static class X509Helper
{
	private static INativeCertificateHelper nativeHelper; //Field offset: 0x0

	private static Byte[] ConvertData(Byte[] data) { }

	internal static Exception GetInvalidContextException() { }

	private static X509CertificateImpl Import(Byte[] rawData) { }

	public static X509CertificateImpl Import(Byte[] rawData, string password, X509KeyStorageFlags keyStorageFlags) { }

	private static X509CertificateImpl ImportCore(Byte[] rawData) { }

	internal static X509Certificate ImportPkcs12(Byte[] rawData, string password) { }

	public static X509CertificateImpl InitFromCertificate(X509CertificateImpl impl) { }

	internal static void InstallNativeHelper(INativeCertificateHelper helper) { }

	public static bool IsValid(X509CertificateImpl impl) { }

	private static Byte[] PEM(string type, Byte[] data) { }

	internal static void ThrowIfContextInvalid(X509CertificateImpl impl) { }

	public static string ToHexString(Byte[] data) { }

}

