namespace UnityEngine.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class BatchRendererGroup
{
	internal sealed class OnPerformCulling : MulticastDelegate
	{

		public OnPerformCulling(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext, AsyncCallback callback, object object) { }

		public override JobHandle EndInvoke(IAsyncResult result) { }

		public override JobHandle Invoke(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext) { }

	}

	private IntPtr m_GroupHandle; //Field offset: 0x10
	private OnPerformCulling m_PerformCulling; //Field offset: 0x18

	[RequiredByNativeCode]
	private static void InvokeOnPerformCulling(BatchRendererGroup group, ref BatchRendererCullingOutput context, ref LODParameters lodParameters) { }

}

