namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class MaterialPropertyBlock
{
	internal IntPtr m_Ptr; //Field offset: 0x10

	public MaterialPropertyBlock() { }

	[NativeMethod]
	private static IntPtr CreateImpl() { }

	[NativeMethod]
	private static void DestroyImpl(IntPtr mpb) { }

	private void Dispose() { }

	protected virtual void Finalize() { }

	public void SetTexture(string name, Texture value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ThreadSafe]
	private void SetTextureImpl(int name, Texture value) { }

}

