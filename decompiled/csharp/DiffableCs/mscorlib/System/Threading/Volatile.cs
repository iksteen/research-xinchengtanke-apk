namespace System.Threading;

public static class Volatile
{

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool Read(ref bool location) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static T Read(ref T location) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void Write(ref T location, T value) { }

}

