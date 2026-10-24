namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class AsyncOperation : YieldInstruction
{
	internal IntPtr m_Ptr; //Field offset: 0x10
	private Action<AsyncOperation> m_completeCallback; //Field offset: 0x18

	public bool allowSceneActivation
	{
		[NativeMethod]
		 set { } //Length: 80
	}

	public float progress
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public AsyncOperation() { }

	protected virtual void Finalize() { }

	[NativeMethod]
	public float get_progress() { }

	[NativeMethod]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static void InternalDestroy(IntPtr ptr) { }

	[RequiredByNativeCode]
	internal void InvokeCompletionEvent() { }

	[NativeMethod]
	public void set_allowSceneActivation(bool value) { }

}

