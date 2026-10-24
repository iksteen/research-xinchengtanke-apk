namespace UnityEngine.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public struct BatchCullingContext
{
	public readonly NativeArray<Plane> cullingPlanes; //Field offset: 0x0
	public NativeArray<BatchVisibility> batchVisibility; //Field offset: 0x10
	public NativeArray<Int32> visibleIndices; //Field offset: 0x20
	public NativeArray<Int32> visibleIndicesY; //Field offset: 0x30
	public readonly LODParameters lodParameters; //Field offset: 0x40
	public readonly Matrix4x4 cullingMatrix; //Field offset: 0x5C
	public readonly float nearPlane; //Field offset: 0x9C

	internal BatchCullingContext(NativeArray<Plane> inCullingPlanes, NativeArray<BatchVisibility> inOutBatchVisibility, NativeArray<Int32> outVisibleIndices, NativeArray<Int32> outVisibleIndicesY, LODParameters inLodParameters, Matrix4x4 inCullingMatrix, float inNearPlane) { }

}

