namespace System.Net.Configuration;

public sealed class SettingsSection : ConfigurationSection
{

	protected virtual ConfigurationPropertyCollection Properties
	{
		 get { } //Length: 60
	}

	public SettingsSection() { }

	protected virtual ConfigurationPropertyCollection get_Properties() { }

}

