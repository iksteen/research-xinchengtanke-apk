namespace System.Runtime.Remoting.Channels;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IServerChannelSinkProvider
{

	public IServerChannelSinkProvider Next
	{
		 set { } //Length: 0
	}

	public void set_Next(IServerChannelSinkProvider value) { }

}

