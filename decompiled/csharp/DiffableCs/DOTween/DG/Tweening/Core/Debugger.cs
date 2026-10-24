namespace DG.Tweening.Core;

public static class Debugger
{
	public static int logPriority; //Field offset: 0x0

	public static void Log(object message) { }

	public static void LogError(object message) { }

	public static void LogRemoveActiveTweenError(string propertyName) { }

	public static void LogReport(object message) { }

	public static void LogWarning(object message) { }

	public static void SetLogPriority(LogBehaviour logBehaviour) { }

}

