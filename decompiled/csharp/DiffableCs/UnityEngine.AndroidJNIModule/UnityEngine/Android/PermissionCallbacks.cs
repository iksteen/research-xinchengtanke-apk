namespace UnityEngine.Android;

public class PermissionCallbacks : AndroidJavaProxy
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Action<String> PermissionGranted; //Field offset: 0x20
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Action<String> PermissionDenied; //Field offset: 0x28
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Action<String> PermissionDeniedAndDontAskAgain; //Field offset: 0x30

	[Preserve]
	private void onPermissionDenied(string permissionName) { }

	[Preserve]
	private void onPermissionDeniedAndDontAskAgain(string permissionName) { }

	[Preserve]
	private void onPermissionGranted(string permissionName) { }

}

