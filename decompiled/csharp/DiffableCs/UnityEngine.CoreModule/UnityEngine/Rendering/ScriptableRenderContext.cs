namespace UnityEngine.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeType]
public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext>
{
	private static readonly ShaderTagId kRenderTypeTag; //Field offset: 0x0
	private IntPtr m_Ptr; //Field offset: 0x0

	private static ScriptableRenderContext() { }

	internal ScriptableRenderContext(IntPtr ptr) { }

	public override bool Equals(ScriptableRenderContext other) { }

	public virtual bool Equals(object obj) { }

	internal Camera GetCamera(int index) { }

	private Camera GetCamera_Internal(int index) { }

	private static Camera GetCamera_Internal_Injected(ref ScriptableRenderContext _unity_self, int index) { }

	public virtual int GetHashCode() { }

	internal int GetNumberOfCameras() { }

	private int GetNumberOfCameras_Internal() { }

	private static int GetNumberOfCameras_Internal_Injected(ref ScriptableRenderContext _unity_self) { }

}

