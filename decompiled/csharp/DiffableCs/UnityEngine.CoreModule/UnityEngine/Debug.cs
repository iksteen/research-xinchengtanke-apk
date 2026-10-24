namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Debug
{
	internal static readonly ILogger s_DefaultLogger; //Field offset: 0x0
	internal static ILogger s_Logger; //Field offset: 0x8

	public static ILogger unityLogger
	{
		 get { } //Length: 100
	}

	private static Debug() { }

	[RequiredByNativeCode]
	internal static bool CallOverridenDebugHandler(Exception exception, object obj) { }

	[ExcludeFromDocs]
	public static void DrawLine(Vector3 start, Vector3 end, Color color) { }

	[FreeFunction]
	public static void DrawLine(Vector3 start, Vector3 end, Color color, float duration, bool depthTest) { }

	private static void DrawLine_Injected(ref Vector3 start, ref Vector3 end, ref Color color, float duration, bool depthTest) { }

	[ThreadSafe]
	public static int ExtractStackTraceNoAlloc(Byte* buffer, int bufferMax, string projectFolder) { }

	public static ILogger get_unityLogger() { }

	[RequiredByNativeCode]
	internal static bool IsLoggingEnabled() { }

	public static void Log(object message, object context) { }

	public static void Log(object message) { }

	public static void LogError(object message, object context) { }

	public static void LogError(object message) { }

	public static void LogErrorFormat(object context, string format, Object[] args) { }

	public static void LogException(Exception exception) { }

	public static void LogException(Exception exception, object context) { }

	public static void LogWarning(object message) { }

	public static void LogWarning(object message, object context) { }

	public static void LogWarningFormat(object context, string format, Object[] args) { }

}

