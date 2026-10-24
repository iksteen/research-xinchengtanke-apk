namespace System.Net.Configuration;

public sealed class SocketElement : ConfigurationElement
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public SocketElement() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

