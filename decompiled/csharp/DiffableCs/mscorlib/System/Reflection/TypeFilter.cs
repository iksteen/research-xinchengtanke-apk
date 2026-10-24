namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TypeFilter : MulticastDelegate
{

	public TypeFilter(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(Type m, object filterCriteria, AsyncCallback callback, object object) { }

	public override bool EndInvoke(IAsyncResult result) { }

	public override bool Invoke(Type m, object filterCriteria) { }

}

