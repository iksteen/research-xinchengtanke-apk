namespace UnityEngine.Experimental.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public static class ScriptableRuntimeReflectionSystemSettings
{
	private static ScriptableRuntimeReflectionSystemWrapper s_Instance; //Field offset: 0x0

	private static ScriptableRuntimeReflectionSystemWrapper Internal_ScriptableRuntimeReflectionSystemSettings_instance
	{
		[RequiredByNativeCode]
		private get { } //Length: 100
	}

	private static IScriptableRuntimeReflectionSystem Internal_ScriptableRuntimeReflectionSystemSettings_system
	{
		[RequiredByNativeCode]
		private set { } //Length: 384
	}

	private static ScriptableRuntimeReflectionSystemSettings() { }

	[RequiredByNativeCode]
	private static ScriptableRuntimeReflectionSystemWrapper get_Internal_ScriptableRuntimeReflectionSystemSettings_instance() { }

	[RuntimeInitializeOnLoadMethod]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static void ScriptingDirtyReflectionSystemInstance() { }

	[RequiredByNativeCode]
	private static void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(IScriptableRuntimeReflectionSystem value) { }

}

