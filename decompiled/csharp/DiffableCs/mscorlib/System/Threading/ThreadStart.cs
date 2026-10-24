namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ThreadStart : MulticastDelegate
{

	public ThreadStart(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke() { }

}

