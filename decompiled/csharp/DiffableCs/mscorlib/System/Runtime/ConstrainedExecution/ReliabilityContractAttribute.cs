namespace System.Runtime.ConstrainedExecution;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ReliabilityContractAttribute : Attribute
{
	private Consistency _consistency; //Field offset: 0x10
	private Cer _cer; //Field offset: 0x14

	public ReliabilityContractAttribute(Consistency consistencyGuarantee, Cer cer) { }

}

