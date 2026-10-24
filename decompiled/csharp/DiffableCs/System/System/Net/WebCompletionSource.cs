namespace System.Net;

internal class WebCompletionSource
{
	[CompilerGenerated]
	private struct <WaitForCompletion>d__8 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Boolean> <>t__builder; //Field offset: 0x8
		public WebCompletionSource <>4__this; //Field offset: 0x20
		public bool throwOnError; //Field offset: 0x28
		private ConfiguredTaskAwaiter<Result> <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private class Result
	{
		[CompilerGenerated]
		private readonly State <State>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private readonly ExceptionDispatchInfo <Error>k__BackingField; //Field offset: 0x18

		public ExceptionDispatchInfo Error
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public State State
		{
			[CompilerGenerated]
			 get { } //Length: 8
		}

		public Result(State state, ExceptionDispatchInfo error) { }

		[CompilerGenerated]
		public ExceptionDispatchInfo get_Error() { }

		[CompilerGenerated]
		public State get_State() { }

	}

	private enum State
	{
		Running = 0,
		Completed = 1,
		Canceled = 2,
		Faulted = 3,
	}

	private TaskCompletionSource<Result> completion; //Field offset: 0x10

	public bool IsCompleted
	{
		 get { } //Length: 84
	}

	public WebCompletionSource() { }

	public bool get_IsCompleted() { }

	public void ThrowOnError() { }

	public bool TrySetCanceled() { }

	public bool TrySetCompleted() { }

	public bool TrySetException(Exception error) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Task<Boolean> WaitForCompletion(bool throwOnError) { }

}

