namespace System.Threading;

public static class Interlocked
{

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Add(ref int location1, int value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static T CompareExchange(ref T location1, T value, T comparand) { }

	public static double CompareExchange(ref double location1, double value, double comparand) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr CompareExchange(ref IntPtr location1, IntPtr value, IntPtr comparand) { }

	public static long CompareExchange(ref long location1, long value, long comparand) { }

	public static float CompareExchange(ref float location1, float value, float comparand) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object CompareExchange(ref object location1, object value, object comparand) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal static int CompareExchange(ref int location1, int value, int comparand, ref bool succeeded) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int CompareExchange(ref int location1, int value, int comparand) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Decrement(ref int location) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Exchange(ref int location1, int value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Exchange(ref object location1, object value) { }

	public static float Exchange(ref float location1, float value) { }

	public static long Exchange(ref long location1, long value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr Exchange(ref IntPtr location1, IntPtr value) { }

	public static double Exchange(ref double location1, double value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static T Exchange(ref T location1, T value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Increment(ref int location) { }

	public static long Read(ref long location) { }

}

