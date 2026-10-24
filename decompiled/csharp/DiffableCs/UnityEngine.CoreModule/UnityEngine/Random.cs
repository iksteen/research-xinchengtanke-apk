namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class Random
{

	[FreeFunction]
	private static int RandomRangeInt(int minInclusive, int maxExclusive) { }

	public static int Range(int minInclusive, int maxExclusive) { }

	[FreeFunction]
	public static float Range(float minInclusive, float maxInclusive) { }

}

