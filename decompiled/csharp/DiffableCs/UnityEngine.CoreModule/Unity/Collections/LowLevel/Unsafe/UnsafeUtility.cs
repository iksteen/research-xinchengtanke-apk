namespace Unity.Collections.LowLevel.Unsafe;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class UnsafeUtility
{

	[ThreadSafe]
	public static void Free(Void* memory, Allocator allocator) { }

	public static T ReadArrayElement(Void* source, int index) { }

	public static void WriteArrayElement(Void* destination, int index, T value) { }

}

