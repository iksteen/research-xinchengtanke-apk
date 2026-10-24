namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class WaitCallback : MulticastDelegate
{

	public WaitCallback(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object state, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object state) { }

}

