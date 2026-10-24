namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public sealed class Coroutine : YieldInstruction
{
	internal IntPtr m_Ptr; //Field offset: 0x10

	private Coroutine() { }

	protected virtual void Finalize() { }

	[FreeFunction]
	private static void ReleaseCoroutine(IntPtr ptr) { }

}

