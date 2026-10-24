namespace UnityEngine.Events;

internal class InvokableCall : BaseInvokableCall
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private UnityAction Delegate; //Field offset: 0x10

	private event UnityAction Delegate
	{
		[CompilerGenerated]
		private add { } //Length: 160
		[CompilerGenerated]
		private remove { } //Length: 160
	}

	public InvokableCall(object target, MethodInfo theFunction) { }

	public InvokableCall(UnityAction action) { }

	[CompilerGenerated]
	private void add_Delegate(UnityAction value) { }

	public virtual bool Find(object targetObj, MethodInfo method) { }

	public virtual void Invoke(Object[] args) { }

	public void Invoke() { }

	[CompilerGenerated]
	private void remove_Delegate(UnityAction value) { }

}

