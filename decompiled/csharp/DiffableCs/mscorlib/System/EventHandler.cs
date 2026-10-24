namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class EventHandler : MulticastDelegate
{

	public EventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, EventArgs e, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object sender, EventArgs e) { }

}

