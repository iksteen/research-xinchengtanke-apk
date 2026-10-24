namespace Unity.Profiling;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public struct ProfilerMarker
{
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr; //Field offset: 0x0

	public ProfilerMarker(string name) { }

}

