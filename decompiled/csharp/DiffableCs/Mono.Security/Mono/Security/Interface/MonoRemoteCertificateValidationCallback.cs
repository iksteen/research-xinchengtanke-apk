namespace Mono.Security.Interface;

public sealed class MonoRemoteCertificateValidationCallback : MulticastDelegate
{

	public MonoRemoteCertificateValidationCallback(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(string targetHost, X509Certificate certificate, X509Chain chain, MonoSslPolicyErrors sslPolicyErrors, AsyncCallback callback, object object) { }

	public override bool EndInvoke(IAsyncResult result) { }

	public override bool Invoke(string targetHost, X509Certificate certificate, X509Chain chain, MonoSslPolicyErrors sslPolicyErrors) { }

}

