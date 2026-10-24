namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class Texture2D : Texture
{
	internal const int streamingMipmapsPriorityMin = -128; //Field offset: 0x0
	internal const int streamingMipmapsPriorityMax = 127; //Field offset: 0x0

	public virtual bool isReadable
	{
		 get { } //Length: 64
	}

	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Texture2D whiteTexture
	{
		 get { } //Length: 52
	}

	internal Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex) { }

	[ExcludeFromDocs]
	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain) { }

	[ExcludeFromDocs]
	public void Apply() { }

	public void Apply(bool updateMipmaps, bool makeNoLongerReadable) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) { }

	public virtual bool get_isReadable() { }

	public static Texture2D get_whiteTexture() { }

	[ExcludeFromDocs]
	public Color GetPixelBilinear(float u, float v) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Color GetPixelBilinearImpl(int image, int mip, float u, float v) { }

	private void GetPixelBilinearImpl_Injected(int image, int mip, float u, float v, out Color ret) { }

	private static void Internal_Create(Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureCreationFlags flags, IntPtr nativeTex) { }

	[FreeFunction]
	private static bool Internal_CreateImpl(Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureCreationFlags flags, IntPtr nativeTex) { }

	public bool Resize(int width, int height) { }

	public bool Resize(int width, int height, TextureFormat format, bool hasMipMap) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool ResizeImpl(int width, int height) { }

	[FreeFunction]
	private bool ResizeWithFormatImpl(int width, int height, GraphicsFormat format, bool hasMipMap) { }

	[ExcludeFromDocs]
	public void SetPixel(int x, int y, Color color) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetPixelImpl(int image, int mip, int x, int y, Color color) { }

	private void SetPixelImpl_Injected(int image, int mip, int x, int y, ref Color color) { }

	public void SetPixels(int x, int y, int blockWidth, int blockHeight, Color[] colors, int miplevel) { }

	[ExcludeFromDocs]
	public void SetPixels(Color[] colors) { }

	[FreeFunction]
	private void SetPixelsImpl(int x, int y, int w, int h, Color[] pixel, int miplevel, int frame) { }

	internal bool ValidateFormat(TextureFormat format, int width, int height) { }

}

