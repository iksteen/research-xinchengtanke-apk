namespace UnityEngine.Experimental.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class BuiltinRuntimeReflectionSystem : IScriptableRuntimeReflectionSystem, IDisposable
{

	public BuiltinRuntimeReflectionSystem() { }

	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static bool BuiltinUpdate() { }

	public override void Dispose() { }

	private void Dispose(bool disposing) { }

	[RequiredByNativeCode]
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New() { }

	public override bool TickRealtimeProbes() { }

}

