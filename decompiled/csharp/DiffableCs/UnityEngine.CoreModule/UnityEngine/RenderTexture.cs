namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public class RenderTexture : Texture
{

	public int depth
	{
		[FreeFunction]
		 set { } //Length: 80
	}

	public RenderTextureDescriptor descriptor
	{
		 get { } //Length: 176
		 set { } //Length: 140
	}

	[NativeProperty]
	public GraphicsFormat graphicsFormat
	{
		 set { } //Length: 80
	}

	public virtual int height
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public virtual int width
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public RenderTexture(RenderTexture textureToCopy) { }

	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, int mipCount) { }

	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth) { }

	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, RenderTextureFormat format) { }

	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite) { }

	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format, int mipCount) { }

	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, GraphicsFormat format) { }

	[ExcludeFromDocs]
	public RenderTexture(int width, int height, int depth, DefaultFormat format) { }

	[RequiredByNativeCode]
	protected private RenderTexture() { }

	public RenderTexture(RenderTextureDescriptor desc) { }

	public RenderTextureDescriptor get_descriptor() { }

	public virtual int get_height() { }

	public virtual int get_width() { }

	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private RenderTextureDescriptor GetDescriptor() { }

	private void GetDescriptor_Injected(out RenderTextureDescriptor ret) { }

	[FreeFunction]
	private static void Internal_Create(RenderTexture rt) { }

	[FreeFunction]
	public void set_depth(int value) { }

	public void set_descriptor(RenderTextureDescriptor value) { }

	public void set_graphicsFormat(GraphicsFormat value) { }

	public virtual void set_height(int value) { }

	public virtual void set_width(int value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc) { }

	private void SetRenderTextureDescriptor_Injected(ref RenderTextureDescriptor desc) { }

	internal void SetSRGBReadWrite(bool srgb) { }

	private static void ValidateRenderTextureDesc(RenderTextureDescriptor desc) { }

}

