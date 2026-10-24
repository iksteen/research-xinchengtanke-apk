namespace System.Runtime.InteropServices;

public abstract class SafeHandle : CriticalFinalizerObject, IDisposable
{
	private const int RefCount_Mask = 2147483644; //Field offset: 0x0
	private const int RefCount_One = 4; //Field offset: 0x0
	protected IntPtr handle; //Field offset: 0x10
	private int _state; //Field offset: 0x18
	private bool _ownsHandle; //Field offset: 0x1C
	private bool _fullyInitialized; //Field offset: 0x1D

	public bool IsClosed
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 12
	}

	public abstract bool IsInvalid
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 0
	}

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected SafeHandle(IntPtr invalidHandleValue, bool ownsHandle) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Close() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void DangerousAddRef(ref bool success) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IntPtr DangerousGetHandle() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void DangerousRelease() { }

	private void DangerousReleaseInternal(bool dispose) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Dispose() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected override void Dispose(bool disposing) { }

	protected virtual void Finalize() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool get_IsClosed() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public abstract bool get_IsInvalid() { }

	private void InternalDispose() { }

	private void InternalFinalize() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected abstract bool ReleaseHandle() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected void SetHandle(IntPtr handle) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void SetHandleAsInvalid() { }

}

