namespace System.Collections;

[FriendAccessAllowed]
internal static class HashHelpers
{
	public static readonly Int32[] primes; //Field offset: 0x0
	private static ConditionalWeakTable<Object, SerializationInfo> s_SerializationInfoTable; //Field offset: 0x8

	internal static ConditionalWeakTable<Object, SerializationInfo> SerializationInfoTable
	{
		internal get { } //Length: 248
	}

	private static HashHelpers() { }

	public static int ExpandPrime(int oldSize) { }

	internal static ConditionalWeakTable<Object, SerializationInfo> get_SerializationInfoTable() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int GetPrime(int min) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool IsPrime(int candidate) { }

}

