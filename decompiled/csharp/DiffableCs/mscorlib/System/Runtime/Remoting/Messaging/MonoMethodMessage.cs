namespace System.Runtime.Remoting.Messaging;

internal class MonoMethodMessage : IMethodCallMessage, IMethodMessage, IMessage, IMethodReturnMessage, IInternalMessage
{
	internal static string CallContextKey; //Field offset: 0x0
	internal static string UriKey; //Field offset: 0x8
	private MonoMethod method; //Field offset: 0x10
	private Object[] args; //Field offset: 0x18
	private String[] names; //Field offset: 0x20
	private Byte[] arg_types; //Field offset: 0x28
	public LogicalCallContext ctx; //Field offset: 0x30
	public object rval; //Field offset: 0x38
	public Exception exc; //Field offset: 0x40
	private AsyncResult asyncResult; //Field offset: 0x48
	private CallType call_type; //Field offset: 0x50
	private string uri; //Field offset: 0x58
	private MCMDictionary properties; //Field offset: 0x60
	private Type[] methodSignature; //Field offset: 0x68
	private Identity identity; //Field offset: 0x70

	public override int ArgCount
	{
		 get { } //Length: 68
	}

	public override Object[] Args
	{
		 get { } //Length: 8
	}

	public AsyncResult AsyncResult
	{
		 get { } //Length: 8
	}

	internal CallType CallType
	{
		internal get { } //Length: 136
	}

	public override Exception Exception
	{
		 get { } //Length: 8
	}

	public override LogicalCallContext LogicalCallContext
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override MethodBase MethodBase
	{
		 get { } //Length: 8
	}

	public override string MethodName
	{
		 get { } //Length: 164
	}

	public override object MethodSignature
	{
		 get { } //Length: 320
	}

	public override int OutArgCount
	{
		 get { } //Length: 120
	}

	public override Object[] OutArgs
	{
		 get { } //Length: 328
	}

	public override IDictionary Properties
	{
		 get { } //Length: 132
	}

	public override object ReturnValue
	{
		 get { } //Length: 8
	}

	private override Identity System.Runtime.Remoting.Messaging.IInternalMessage.TargetIdentity
	{
		private get { } //Length: 8
		private set { } //Length: 8
	}

	public override string TypeName
	{
		 get { } //Length: 184
	}

	public override string Uri
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	private static MonoMethodMessage() { }

	public MonoMethodMessage(MethodBase method, Object[] out_args) { }

	internal MonoMethodMessage(MethodInfo minfo, Object[] in_args, Object[] out_args) { }

	public MonoMethodMessage(Type type, string methodName, Object[] in_args) { }

	public override int get_ArgCount() { }

	public override Object[] get_Args() { }

	public AsyncResult get_AsyncResult() { }

	internal CallType get_CallType() { }

	public override Exception get_Exception() { }

	public override LogicalCallContext get_LogicalCallContext() { }

	public override MethodBase get_MethodBase() { }

	public override string get_MethodName() { }

	public override object get_MethodSignature() { }

	public override int get_OutArgCount() { }

	public override Object[] get_OutArgs() { }

	public override IDictionary get_Properties() { }

	public override object get_ReturnValue() { }

	public override string get_TypeName() { }

	public override string get_Uri() { }

	public override object GetArg(int arg_num) { }

	private static MethodInfo GetMethodInfo(Type type, string methodName) { }

	internal void InitMessage(MonoMethod method, Object[] out_args) { }

	public bool NeedsOutProcessing(out int outCount) { }

	public void set_LogicalCallContext(LogicalCallContext value) { }

	public override void set_Uri(string value) { }

	private override Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity() { }

	private override void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(Identity value) { }

}

