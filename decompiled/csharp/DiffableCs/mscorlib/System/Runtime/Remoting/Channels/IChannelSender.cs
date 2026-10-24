namespace System.Runtime.Remoting.Channels;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IChannelSender : IChannel
{

	public IMessageSink CreateMessageSink(string url, object remoteChannelData, out string objectURI) { }

}

