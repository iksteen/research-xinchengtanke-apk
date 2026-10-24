namespace System.Threading;

internal class CancellationCallbackInfo
{
	private static ContextCallback s_executionContextCallback; //Field offset: 0x0
	internal readonly Action<Object> Callback; //Field offset: 0x10
	internal readonly object StateForCallback; //Field offset: 0x18
	internal readonly SynchronizationContext TargetSyncContext; //Field offset: 0x20
	internal readonly ExecutionContext TargetExecutionContext; //Field offset: 0x28
	internal readonly CancellationTokenSource CancellationTokenSource; //Field offset: 0x30

	internal CancellationCallbackInfo(Action<Object> callback, object stateForCallback, SynchronizationContext targetSyncContext, ExecutionContext targetExecutionContext, CancellationTokenSource cancellationTokenSource) { }

	internal void ExecuteCallback() { }

	private static void ExecutionContextCallback(object obj) { }

}

