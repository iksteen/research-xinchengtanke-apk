namespace Mono;

public static class Runtime
{

	public static string GetDisplayName() { }

	private static string GetNativeStackTrace(Exception exception) { }

	public static void InstallSignalHandlers() { }

	private static void mono_runtime_cleanup_handlers() { }

	private static void mono_runtime_install_handlers() { }

	public static void RemoveSignalHandlers() { }

	public static bool SetGCAllowSynchronousMajor(bool flag) { }

}

