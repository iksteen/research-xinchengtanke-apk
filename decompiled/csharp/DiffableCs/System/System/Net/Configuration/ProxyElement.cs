namespace System.Net.Configuration;

public sealed class ProxyElement : ConfigurationElement
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public ProxyElement() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

