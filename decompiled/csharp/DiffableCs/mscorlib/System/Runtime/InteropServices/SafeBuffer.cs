namespace System.Runtime.InteropServices;

public abstract class SafeBuffer : SafeHandleZeroOrMinusOneIsInvalid
{
	private bool inited; //Field offset: 0x1E

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void AcquirePointer(ref Byte* pointer) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void ReleasePointer() { }

}

