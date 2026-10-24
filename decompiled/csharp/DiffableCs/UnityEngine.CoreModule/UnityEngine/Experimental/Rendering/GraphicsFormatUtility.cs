namespace UnityEngine.Experimental.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class GraphicsFormatUtility
{

	[FreeFunction]
	private static bool CanDecompressFormat(GraphicsFormat format, bool wholeImage) { }

	internal static bool CanDecompressFormat(GraphicsFormat format) { }

	public static GraphicsFormat GetGraphicsFormat(TextureFormat format, bool isSRGB) { }

	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, bool isSRGB) { }

	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, RenderTextureReadWrite readWrite) { }

	[FreeFunction]
	private static GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(RenderTextureFormat format, bool isSRGB) { }

	[FreeFunction]
	private static GraphicsFormat GetGraphicsFormat_Native_TextureFormat(TextureFormat format, bool isSRGB) { }

	[FreeFunction]
	internal static bool IsCompressedTextureFormat(TextureFormat format) { }

	public static bool IsCrunchFormat(TextureFormat format) { }

	[FreeFunction]
	public static bool IsPVRTCFormat(GraphicsFormat format) { }

	[FreeFunction]
	public static bool IsSRGBFormat(GraphicsFormat format) { }

}

