namespace System.Diagnostics.Contracts;

public static class Contract
{

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool ForAll(IEnumerable<T> collection, Predicate<T> predicate) { }

}

