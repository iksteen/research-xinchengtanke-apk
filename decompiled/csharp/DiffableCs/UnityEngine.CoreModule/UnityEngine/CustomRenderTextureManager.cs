namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class CustomRenderTextureManager
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<CustomRenderTexture> textureLoaded; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<CustomRenderTexture> textureUnloaded; //Field offset: 0x8

	[RequiredByNativeCode]
	private static void InvokeOnTextureLoaded_Internal(CustomRenderTexture source) { }

	[RequiredByNativeCode]
	private static void InvokeOnTextureUnloaded_Internal(CustomRenderTexture source) { }

}

