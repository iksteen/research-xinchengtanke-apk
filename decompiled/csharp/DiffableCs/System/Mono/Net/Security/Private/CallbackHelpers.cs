namespace Mono.Net.Security.Private;

internal static class CallbackHelpers
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public MonoRemoteCertificateValidationCallback callback; //Field offset: 0x10

		public <>c__DisplayClass5_0() { }

		internal bool <MonoToPublic>b__0(object t, X509Certificate c, X509Chain ch, SslPolicyErrors e) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass8_0
	{
		public MonoLocalCertificateSelectionCallback callback; //Field offset: 0x10

		public <>c__DisplayClass8_0() { }

		internal X509Certificate <MonoToInternal>b__0(string t, X509CertificateCollection lc, X509Certificate rc, String[] ai) { }

	}


	internal static LocalCertSelectionCallback MonoToInternal(MonoLocalCertificateSelectionCallback callback) { }

	internal static RemoteCertificateValidationCallback MonoToPublic(MonoRemoteCertificateValidationCallback callback) { }

}

