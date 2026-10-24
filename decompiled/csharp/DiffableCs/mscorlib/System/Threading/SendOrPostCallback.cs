namespace System.Threading;

public sealed class SendOrPostCallback : MulticastDelegate
{

	public SendOrPostCallback(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object state, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object state) { }

}

