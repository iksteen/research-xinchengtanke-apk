namespace UnityEngine;

public struct RenderTextureDescriptor
{
	private static Int32[] depthFormatBits; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int <width>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int <height>k__BackingField; //Field offset: 0x4
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int <msaaSamples>k__BackingField; //Field offset: 0x8
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int <volumeDepth>k__BackingField; //Field offset: 0xC
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int <mipCount>k__BackingField; //Field offset: 0x10
	private GraphicsFormat _graphicsFormat; //Field offset: 0x14
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private GraphicsFormat <stencilFormat>k__BackingField; //Field offset: 0x18
	private int _depthBufferBits; //Field offset: 0x1C
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private TextureDimension <dimension>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private ShadowSamplingMode <shadowSamplingMode>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private VRTextureUsage <vrUsage>k__BackingField; //Field offset: 0x28
	private RenderTextureCreationFlags _flags; //Field offset: 0x2C
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private RenderTextureMemoryless <memoryless>k__BackingField; //Field offset: 0x30

	public int depthBufferBits
	{
		 get { } //Length: 148
		 set { } //Length: 44
	}

	public TextureDimension dimension
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public GraphicsFormat graphicsFormat
	{
		 get { } //Length: 8
		 set { } //Length: 68
	}

	public int height
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public RenderTextureMemoryless memoryless
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int mipCount
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int msaaSamples
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public ShadowSamplingMode shadowSamplingMode
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int volumeDepth
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public VRTextureUsage vrUsage
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int width
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static RenderTextureDescriptor() { }

	[ExcludeFromDocs]
	public RenderTextureDescriptor(int width, int height, GraphicsFormat colorFormat, int depthBufferBits, int mipCount) { }

	public int get_depthBufferBits() { }

	public GraphicsFormat get_graphicsFormat() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_height() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_msaaSamples() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_volumeDepth() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_width() { }

	public void set_depthBufferBits(int value) { }

	[CompilerGenerated]
	public void set_dimension(TextureDimension value) { }

	public void set_graphicsFormat(GraphicsFormat value) { }

	[CompilerGenerated]
	public void set_height(int value) { }

	[CompilerGenerated]
	public void set_memoryless(RenderTextureMemoryless value) { }

	[CompilerGenerated]
	public void set_mipCount(int value) { }

	[CompilerGenerated]
	public void set_msaaSamples(int value) { }

	[CompilerGenerated]
	public void set_shadowSamplingMode(ShadowSamplingMode value) { }

	[CompilerGenerated]
	public void set_volumeDepth(int value) { }

	[CompilerGenerated]
	public void set_vrUsage(VRTextureUsage value) { }

	[CompilerGenerated]
	public void set_width(int value) { }

	private void SetOrClearRenderTextureCreationFlag(bool value, RenderTextureCreationFlags flag) { }

}

