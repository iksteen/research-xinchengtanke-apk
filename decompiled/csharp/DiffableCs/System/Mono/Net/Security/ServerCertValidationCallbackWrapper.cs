namespace Mono.Net.Security;

internal sealed class ServerCertValidationCallbackWrapper : MulticastDelegate
{

	public ServerCertValidationCallbackWrapper(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(ServerCertValidationCallback callback, X509Certificate certificate, X509Chain chain, MonoSslPolicyErrors sslPolicyErrors, AsyncCallback __callback, object object) { }

	public override bool EndInvoke(IAsyncResult result) { }

	public override bool Invoke(ServerCertValidationCallback callback, X509Certificate certificate, X509Chain chain, MonoSslPolicyErrors sslPolicyErrors) { }

}

