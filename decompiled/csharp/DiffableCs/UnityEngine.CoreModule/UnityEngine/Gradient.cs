namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class Gradient : IEquatable<Gradient>
{
	internal IntPtr m_Ptr; //Field offset: 0x10

	[RequiredByNativeCode]
	public Gradient() { }

	[FreeFunction]
	private void Cleanup() { }

	public virtual bool Equals(object o) { }

	public override bool Equals(Gradient other) { }

	protected virtual void Finalize() { }

	public virtual int GetHashCode() { }

	[FreeFunction]
	private static IntPtr Init() { }

	[FreeFunction]
	private bool Internal_Equals(IntPtr other) { }

}

