namespace System.ComponentModel;

public sealed class RefreshEventHandler : MulticastDelegate
{

	public RefreshEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(RefreshEventArgs e, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(RefreshEventArgs e) { }

}

