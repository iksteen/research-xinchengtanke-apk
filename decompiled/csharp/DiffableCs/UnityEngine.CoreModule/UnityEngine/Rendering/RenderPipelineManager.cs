namespace UnityEngine.Rendering;

public static class RenderPipelineManager
{
	internal static RenderPipelineAsset s_CurrentPipelineAsset; //Field offset: 0x0
	private static Camera[] s_Cameras; //Field offset: 0x8
	private static int s_CameraCapacity; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static RenderPipeline <currentPipeline>k__BackingField; //Field offset: 0x18

	public private static RenderPipeline currentPipeline
	{
		[CompilerGenerated]
		 get { } //Length: 100
		[CompilerGenerated]
		private set { } //Length: 108
	}

	private static RenderPipelineManager() { }

	[RequiredByNativeCode]
	internal static void CleanupRenderPipeline() { }

	[RequiredByNativeCode]
	private static void DoRenderLoop_Internal(RenderPipelineAsset pipe, IntPtr loopPtr, List<RenderRequest> renderRequests) { }

	[CompilerGenerated]
	public static RenderPipeline get_currentPipeline() { }

	private static void GetCameras(ScriptableRenderContext context) { }

	internal static void PrepareRenderPipeline(RenderPipelineAsset pipelineAsset) { }

	[CompilerGenerated]
	private static void set_currentPipeline(RenderPipeline value) { }

}

