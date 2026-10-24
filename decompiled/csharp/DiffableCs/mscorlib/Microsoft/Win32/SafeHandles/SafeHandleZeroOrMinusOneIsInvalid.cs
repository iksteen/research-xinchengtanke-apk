namespace Microsoft.Win32.SafeHandles;

public abstract class SafeHandleZeroOrMinusOneIsInvalid : SafeHandle
{

	public virtual bool IsInvalid
	{
		 get { } //Length: 96
	}

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected SafeHandleZeroOrMinusOneIsInvalid(bool ownsHandle) { }

	public virtual bool get_IsInvalid() { }

}

