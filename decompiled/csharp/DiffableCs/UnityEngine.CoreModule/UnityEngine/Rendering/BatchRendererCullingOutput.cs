namespace UnityEngine.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
internal struct BatchRendererCullingOutput
{
	public JobHandle cullingJobsFence; //Field offset: 0x0
	public Matrix4x4 cullingMatrix; //Field offset: 0x10
	public Plane* cullingPlanes; //Field offset: 0x50
	public BatchVisibility* batchVisibility; //Field offset: 0x58
	public Int32* visibleIndices; //Field offset: 0x60
	public Int32* visibleIndicesY; //Field offset: 0x68
	public int cullingPlanesCount; //Field offset: 0x70
	public int batchVisibilityCount; //Field offset: 0x74
	public int visibleIndicesCount; //Field offset: 0x78
	public float nearPlane; //Field offset: 0x7C

}

