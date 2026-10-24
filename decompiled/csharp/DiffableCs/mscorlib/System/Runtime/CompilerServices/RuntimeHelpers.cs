namespace System.Runtime.CompilerServices;

public static class RuntimeHelpers
{

	public static int OffsetToStringData
	{
		 get { } //Length: 4
	}

	public static int get_OffsetToStringData() { }

	public static int GetHashCode(object o) { }

	private static void InitializeArray(Array array, IntPtr fldHandle) { }

	public static void InitializeArray(Array array, RuntimeFieldHandle fldHandle) { }

	public static bool IsReferenceOrContainsReferences() { }

	[MonoTODO]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void PrepareConstrainedRegions() { }

}

