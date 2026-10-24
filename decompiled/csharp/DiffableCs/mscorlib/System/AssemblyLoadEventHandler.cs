namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyLoadEventHandler : MulticastDelegate
{

	public AssemblyLoadEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, AssemblyLoadEventArgs args, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object sender, AssemblyLoadEventArgs args) { }

}

