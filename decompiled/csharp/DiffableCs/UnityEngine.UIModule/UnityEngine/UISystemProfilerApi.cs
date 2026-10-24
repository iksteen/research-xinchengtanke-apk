namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class UISystemProfilerApi
{
	internal enum SampleType
	{
		Layout = 0,
		Render = 1,
	}


	public static void AddMarker(string name, object obj) { }

	public static void BeginSample(SampleType type) { }

	public static void EndSample(SampleType type) { }

}

