namespace UnityEngine;

[ExtensionOfNativeClass]
[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class ScriptableObject : object
{

	public ScriptableObject() { }

	public static ScriptableObject CreateInstance(Type type) { }

	public static T CreateInstance() { }

	[NativeMethod]
	private static void CreateScriptableObject(ScriptableObject self) { }

	[FreeFunction]
	internal static ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset) { }

}

