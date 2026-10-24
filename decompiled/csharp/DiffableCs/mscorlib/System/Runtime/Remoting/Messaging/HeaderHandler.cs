namespace System.Runtime.Remoting.Messaging;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class HeaderHandler : MulticastDelegate
{

	public HeaderHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(Header[] headers, AsyncCallback callback, object object) { }

	public override object EndInvoke(IAsyncResult result) { }

	public override object Invoke(Header[] headers) { }

}

