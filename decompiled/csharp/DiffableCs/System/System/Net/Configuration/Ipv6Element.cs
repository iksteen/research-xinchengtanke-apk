namespace System.Net.Configuration;

public sealed class Ipv6Element : ConfigurationElement
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public Ipv6Element() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

