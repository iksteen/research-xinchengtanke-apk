namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ParameterizedThreadStart : MulticastDelegate
{

	public ParameterizedThreadStart(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object obj, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object obj) { }

}

