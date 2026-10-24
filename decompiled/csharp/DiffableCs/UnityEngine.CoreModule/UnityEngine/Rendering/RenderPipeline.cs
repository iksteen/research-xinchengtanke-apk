namespace UnityEngine.Rendering;

public abstract class RenderPipeline
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <disposed>k__BackingField; //Field offset: 0x10

	public private bool disposed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 12
	}

	internal void Dispose() { }

	protected override void Dispose(bool disposing) { }

	[CompilerGenerated]
	public bool get_disposed() { }

	internal void InternalRender(ScriptableRenderContext context, Camera[] cameras) { }

	internal void InternalRenderWithRequests(ScriptableRenderContext context, Camera[] cameras, List<RenderRequest> renderRequests) { }

	protected override void ProcessRenderRequests(ScriptableRenderContext context, Camera camera, List<RenderRequest> renderRequests) { }

	protected abstract void Render(ScriptableRenderContext context, Camera[] cameras) { }

	[CompilerGenerated]
	private void set_disposed(bool value) { }

}

