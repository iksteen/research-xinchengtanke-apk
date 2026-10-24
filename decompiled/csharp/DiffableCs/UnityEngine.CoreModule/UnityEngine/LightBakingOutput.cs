namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct LightBakingOutput
{
	public int probeOcclusionLightIndex; //Field offset: 0x0
	public int occlusionMaskChannel; //Field offset: 0x4
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public LightmapBakeType lightmapBakeType; //Field offset: 0x8
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public MixedLightingMode mixedLightingMode; //Field offset: 0xC
	public bool isBaked; //Field offset: 0x10

}

