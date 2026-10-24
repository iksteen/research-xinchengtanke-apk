namespace System.Runtime.Remoting.Messaging;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IMessageSink
{

	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink) { }

	public IMessage SyncProcessMessage(IMessage msg) { }

}

