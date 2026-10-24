namespace System.Runtime.Remoting.Contexts;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IDynamicMessageSink
{

	public void ProcessMessageFinish(IMessage replyMsg, bool bCliSide, bool bAsync) { }

	public void ProcessMessageStart(IMessage reqMsg, bool bCliSide, bool bAsync) { }

}

