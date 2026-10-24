namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public struct ContactFilter2D
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useTriggers; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useLayerMask; //Field offset: 0x1
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useDepth; //Field offset: 0x2
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useOutsideDepth; //Field offset: 0x3
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useNormalAngle; //Field offset: 0x4
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool useOutsideNormalAngle; //Field offset: 0x5
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public LayerMask layerMask; //Field offset: 0x8
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float minDepth; //Field offset: 0xC
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float maxDepth; //Field offset: 0x10
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float minNormalAngle; //Field offset: 0x14
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float maxNormalAngle; //Field offset: 0x18

	private void CheckConsistency() { }

	private static void CheckConsistency_Injected(ref ContactFilter2D _unity_self) { }

	internal static ContactFilter2D CreateLegacyFilter(int layerMask, float minDepth, float maxDepth) { }

	public void SetDepth(float minDepth, float maxDepth) { }

	public void SetLayerMask(LayerMask layerMask) { }

}

