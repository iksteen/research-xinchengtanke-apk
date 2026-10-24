namespace System.Reflection;

internal abstract class RtFieldInfo : RuntimeFieldInfo
{

	protected RtFieldInfo() { }

	internal void CheckConsistency(object target) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public virtual void SetValueDirect(TypedReference obj, object value) { }

	internal object UnsafeGetValue(object obj) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	internal void UnsafeSetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture) { }

}

