namespace Microsoft.Win32.SafeHandles;

public abstract class SafeHandleMinusOneIsInvalid : SafeHandle
{

	public virtual bool IsInvalid
	{
		 get { } //Length: 68
	}

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected SafeHandleMinusOneIsInvalid(bool ownsHandle) { }

	public virtual bool get_IsInvalid() { }

}

