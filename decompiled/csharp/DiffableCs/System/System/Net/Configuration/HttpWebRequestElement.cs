namespace System.Net.Configuration;

public sealed class HttpWebRequestElement : ConfigurationElement
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public HttpWebRequestElement() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

