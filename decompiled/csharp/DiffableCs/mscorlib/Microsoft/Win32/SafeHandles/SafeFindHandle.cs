namespace Microsoft.Win32.SafeHandles;

internal sealed class SafeFindHandle : SafeHandleZeroOrMinusOneIsInvalid
{

	internal SafeFindHandle(IntPtr preexistingHandle) { }

	protected virtual bool ReleaseHandle() { }

}

