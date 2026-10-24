namespace System.Threading;

internal struct ExecutionContextSwitcher
{
	internal Reader outerEC; //Field offset: 0x0
	internal bool outerECBelongsToScope; //Field offset: 0x8
	internal object hecsw; //Field offset: 0x10
	internal Thread thread; //Field offset: 0x18

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal void Undo() { }

	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal bool UndoNoThrow() { }

}

