namespace Unity.Profiling.LowLevel.Unsafe;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public static class ProfilerUnsafeUtility
{

	[ThreadSafe]
	public static IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount) { }

}

