namespace System.Runtime.Remoting.Channels;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IChannelReceiver : IChannel
{

	public object ChannelData
	{
		 get { } //Length: 0
	}

	public object get_ChannelData() { }

	public void StartListening(object data) { }

}

