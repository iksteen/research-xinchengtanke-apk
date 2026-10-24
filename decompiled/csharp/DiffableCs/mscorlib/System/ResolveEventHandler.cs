namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ResolveEventHandler : MulticastDelegate
{

	public ResolveEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, ResolveEventArgs args, AsyncCallback callback, object object) { }

	public override Assembly EndInvoke(IAsyncResult result) { }

	public override Assembly Invoke(object sender, ResolveEventArgs args) { }

}

