namespace System.Configuration;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class ConfigurationElement
{

	protected private override ConfigurationPropertyCollection Properties
	{
		private get { } //Length: 60
	}

	protected private override ConfigurationPropertyCollection get_Properties() { }

	protected private override bool IsModified() { }

	protected private override void Reset(ConfigurationElement parentElement) { }

	protected private override void ResetModified() { }

}

