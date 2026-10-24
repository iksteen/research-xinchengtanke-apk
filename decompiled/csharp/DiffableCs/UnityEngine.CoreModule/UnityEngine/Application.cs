namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Application
{
	internal sealed class LogCallback : MulticastDelegate
	{

		public LogCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string condition, string stackTrace, LogType type, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(string condition, string stackTrace, LogType type) { }

	}

	internal sealed class LowMemoryCallback : MulticastDelegate
	{

		public LowMemoryCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static LowMemoryCallback lowMemory; //Field offset: 0x0
	private static LogCallback s_LogCallbackHandler; //Field offset: 0x8
	private static LogCallback s_LogCallbackHandlerThreaded; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<Boolean> focusChanged; //Field offset: 0x18
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<String> deepLinkActivated; //Field offset: 0x20
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Func<Boolean> wantsToQuit; //Field offset: 0x28
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action quitting; //Field offset: 0x30
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action unloading; //Field offset: 0x38

	public static string dataPath
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static ApplicationInstallMode installMode
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static bool isBatchMode
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static bool isEditor
	{
		 get { } //Length: 8
	}

	public static bool isPlaying
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static string persistentDataPath
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static RuntimePlatform platform
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static int targetFrameRate
	{
		[FreeFunction]
		 set { } //Length: 64
	}

	[RequiredByNativeCode]
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread) { }

	[RequiredByNativeCode]
	internal static void CallLowMemory() { }

	[FreeFunction]
	public static string get_dataPath() { }

	[FreeFunction]
	public static ApplicationInstallMode get_installMode() { }

	[FreeFunction]
	public static bool get_isBatchMode() { }

	public static bool get_isEditor() { }

	[FreeFunction]
	public static bool get_isPlaying() { }

	[FreeFunction]
	public static string get_persistentDataPath() { }

	[FreeFunction]
	public static RuntimePlatform get_platform() { }

	[RequiredByNativeCode]
	private static void Internal_ApplicationQuit() { }

	[RequiredByNativeCode]
	private static void Internal_ApplicationUnload() { }

	[RequiredByNativeCode]
	private static bool Internal_ApplicationWantsToQuit() { }

	[RequiredByNativeCode]
	internal static void InvokeDeepLinkActivated(string url) { }

	[RequiredByNativeCode]
	internal static void InvokeFocusChanged(bool focus) { }

	[RequiredByNativeCode]
	internal static void InvokeOnBeforeRender() { }

	[FreeFunction]
	public static void OpenURL(string url) { }

	public static void Quit() { }

	[FreeFunction]
	public static void Quit(int exitCode) { }

	[FreeFunction]
	public static void set_targetFrameRate(int value) { }

}

