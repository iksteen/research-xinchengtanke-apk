namespace System.Runtime.Remoting.Channels;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IClientChannelSinkProvider
{

	public IClientChannelSinkProvider Next
	{
		 set { } //Length: 0
	}

	public void set_Next(IClientChannelSinkProvider value) { }

}

