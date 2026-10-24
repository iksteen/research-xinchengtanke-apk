namespace System;

internal sealed class IOAsyncCallback : MulticastDelegate
{

	public IOAsyncCallback(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(IOAsyncResult ioares, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(IOAsyncResult ioares) { }

}

