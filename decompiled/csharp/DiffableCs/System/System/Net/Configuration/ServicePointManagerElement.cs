namespace System.Net.Configuration;

public sealed class ServicePointManagerElement : ConfigurationElement
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public ServicePointManagerElement() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

