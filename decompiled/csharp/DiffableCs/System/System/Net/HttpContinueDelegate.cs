namespace System.Net;

public sealed class HttpContinueDelegate : MulticastDelegate
{

	public HttpContinueDelegate(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(int StatusCode, WebHeaderCollection httpHeaders, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(int StatusCode, WebHeaderCollection httpHeaders) { }

}

