namespace Microsoft.Win32.SafeHandles;

public sealed class SafeWaitHandle : SafeHandleZeroOrMinusOneIsInvalid
{

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public SafeWaitHandle(IntPtr existingHandle, bool ownsHandle) { }

	protected virtual bool ReleaseHandle() { }

}

