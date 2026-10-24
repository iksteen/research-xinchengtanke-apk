namespace System.Runtime.Remoting.Messaging;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class CallContext
{

	private CallContext() { }

	internal static object SetCurrentCallContext(LogicalCallContext ctx) { }

	internal static LogicalCallContext SetLogicalCallContext(LogicalCallContext callCtx) { }

}

