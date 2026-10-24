namespace UnityEngine;

[ExcludeFromPreset]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Cubemap : Texture
{

	public virtual bool isReadable
	{
		 get { } //Length: 64
	}

	[ExcludeFromDocs]
	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags) { }

	[ExcludeFromDocs]
	[RequiredByNativeCode]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags) { }

	public Cubemap(int width, TextureFormat format, int mipCount) { }

	[ExcludeFromDocs]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount) { }

	internal Cubemap(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex) { }

	internal Cubemap(int width, TextureFormat textureFormat, bool mipChain, IntPtr nativeTex) { }

	public Cubemap(int width, TextureFormat textureFormat, bool mipChain) { }

	public virtual bool get_isReadable() { }

	private static void Internal_Create(Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureCreationFlags flags, IntPtr nativeTex) { }

	[FreeFunction]
	private static bool Internal_CreateImpl(Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureCreationFlags flags, IntPtr nativeTex) { }

	internal bool ValidateFormat(TextureFormat format, int width) { }

	internal bool ValidateFormat(GraphicsFormat format, int width) { }

	private static void ValidateIsNotCrunched(TextureCreationFlags flags) { }

}

