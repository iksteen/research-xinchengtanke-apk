namespace System.Runtime.ConstrainedExecution;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class CriticalFinalizerObject
{

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected CriticalFinalizerObject() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected virtual void Finalize() { }

}

