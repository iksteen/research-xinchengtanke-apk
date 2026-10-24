namespace System;

public sealed class ConsoleCancelEventHandler : MulticastDelegate
{

	public ConsoleCancelEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, ConsoleCancelEventArgs e, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object sender, ConsoleCancelEventArgs e) { }

}

