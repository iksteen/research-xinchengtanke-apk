namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class MemberFilter : MulticastDelegate
{

	public MemberFilter(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(MemberInfo m, object filterCriteria, AsyncCallback callback, object object) { }

	public override bool EndInvoke(IAsyncResult result) { }

	public override bool Invoke(MemberInfo m, object filterCriteria) { }

}

