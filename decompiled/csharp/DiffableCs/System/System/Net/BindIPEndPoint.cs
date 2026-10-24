namespace System.Net;

public sealed class BindIPEndPoint : MulticastDelegate
{

	public BindIPEndPoint(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(ServicePoint servicePoint, IPEndPoint remoteEndPoint, int retryCount, AsyncCallback callback, object object) { }

	public override IPEndPoint EndInvoke(IAsyncResult result) { }

	public override IPEndPoint Invoke(ServicePoint servicePoint, IPEndPoint remoteEndPoint, int retryCount) { }

}

