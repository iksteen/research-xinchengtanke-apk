namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal sealed class DebugLogHandler : ILogHandler
{

	public DebugLogHandler() { }

	[ThreadAndSerializationSafe]
	internal static void Internal_Log(LogType level, LogOption options, string msg, object obj) { }

	[ThreadAndSerializationSafe]
	internal static void Internal_LogException(Exception ex, object obj) { }

	public override void LogException(Exception exception, object context) { }

	public override void LogFormat(LogType logType, object context, string format, Object[] args) { }

}

