namespace System.Threading;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class EventWaitHandle : WaitHandle
{

	public EventWaitHandle(bool initialState, EventResetMode mode) { }

	public EventWaitHandle(bool initialState, EventResetMode mode, string name) { }

	public bool Reset() { }

	public bool Set() { }

}

