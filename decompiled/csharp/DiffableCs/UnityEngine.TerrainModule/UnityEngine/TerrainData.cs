namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class TerrainData : object
{
	private enum BoundaryValueType
	{
		MaxHeightmapRes = 0,
		MinDetailResPerPatch = 1,
		MaxDetailResPerPatch = 2,
		MaxDetailPatchCount = 3,
		MaxDetailsPerRes = 4,
		MinAlphamapRes = 5,
		MaxAlphamapRes = 6,
		MinBaseMapRes = 7,
		MaxBaseMapRes = 8,
	}

	internal static readonly int k_MaximumResolution; //Field offset: 0x0
	internal static readonly int k_MinimumDetailResolutionPerPatch; //Field offset: 0x4
	internal static readonly int k_MaximumDetailResolutionPerPatch; //Field offset: 0x8
	internal static readonly int k_MaximumDetailPatchCount; //Field offset: 0xC
	internal static readonly int k_MaximumDetailsPerRes; //Field offset: 0x10
	internal static readonly int k_MinimumAlphamapResolution; //Field offset: 0x14
	internal static readonly int k_MaximumAlphamapResolution; //Field offset: 0x18
	internal static readonly int k_MinimumBaseMapResolution; //Field offset: 0x1C
	internal static readonly int k_MaximumBaseMapResolution; //Field offset: 0x20

	public Vector3 size
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 96
	}

	internal Terrain[] users
	{
		internal get { } //Length: 64
	}

	private static TerrainData() { }

	public TerrainData() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Vector3 get_size() { }

	private void get_size_Injected(out Vector3 ret) { }

	internal Terrain[] get_users() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[RequiredByNativeCode]
	internal float GetAlphamapResolutionInternal() { }

	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ThreadSafe]
	private static int GetBoundaryValue(BoundaryValueType type) { }

	[FreeFunction]
	private static void Internal_Create(TerrainData terrainData) { }

}

