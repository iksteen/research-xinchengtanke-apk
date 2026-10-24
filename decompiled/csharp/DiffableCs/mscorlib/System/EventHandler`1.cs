namespace System;

public sealed class EventHandler : MulticastDelegate
{

	public EventHandler`1(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, TEventArgs e, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object sender, TEventArgs e) { }

}

