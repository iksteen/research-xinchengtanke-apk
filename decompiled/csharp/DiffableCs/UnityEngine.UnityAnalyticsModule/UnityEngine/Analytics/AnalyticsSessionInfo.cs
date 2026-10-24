namespace UnityEngine.Analytics;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public static class AnalyticsSessionInfo
{
	internal sealed class IdentityTokenChanged : MulticastDelegate
	{

		public IdentityTokenChanged(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string token, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(string token) { }

	}

	internal sealed class SessionStateChanged : MulticastDelegate
	{

		public SessionStateChanged(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged) { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static SessionStateChanged sessionStateChanged; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static IdentityTokenChanged identityTokenChanged; //Field offset: 0x8

	[RequiredByNativeCode]
	internal static void CallIdentityTokenChanged(string token) { }

	[RequiredByNativeCode]
	internal static void CallSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged) { }

}

