namespace System.Net.Configuration;

public sealed class WebRequestModulesSection : ConfigurationSection
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public WebRequestModulesSection() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

