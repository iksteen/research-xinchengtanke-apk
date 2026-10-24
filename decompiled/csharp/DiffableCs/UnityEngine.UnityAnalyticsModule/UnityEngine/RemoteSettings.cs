namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class RemoteSettings
{
	internal sealed class UpdatedEventHandler : MulticastDelegate
	{

		public UpdatedEventHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static UpdatedEventHandler Updated; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action BeforeFetchFromServer; //Field offset: 0x8
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<Boolean, Boolean, Int32> Completed; //Field offset: 0x10

	[RequiredByNativeCode]
	internal static void RemoteSettingsBeforeFetchFromServer() { }

	[RequiredByNativeCode]
	internal static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int response) { }

	[RequiredByNativeCode]
	internal static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer) { }

}

