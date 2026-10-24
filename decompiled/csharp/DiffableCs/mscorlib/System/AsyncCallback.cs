namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AsyncCallback : MulticastDelegate
{

	public AsyncCallback(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(IAsyncResult ar, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(IAsyncResult ar) { }

}

