namespace System;

public static class GC
{
	internal static readonly object EPHEMERON_TOMBSTONE; //Field offset: 0x0

	private static void _ReRegisterForFinalize(object o) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static void _SuppressFinalize(object o) { }

	private static GC() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int CollectionCount(int generation) { }

	private static object get_ephemeron_tombstone() { }

	private static int GetCollectionCount(int generation) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void KeepAlive(object obj) { }

	internal static void register_ephemeron_array(Ephemeron[] array) { }

	public static void ReRegisterForFinalize(object obj) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void SuppressFinalize(object obj) { }

}

