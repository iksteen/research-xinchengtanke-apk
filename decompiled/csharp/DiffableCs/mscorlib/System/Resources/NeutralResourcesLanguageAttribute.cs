namespace System.Resources;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class NeutralResourcesLanguageAttribute : Attribute
{
	private string _culture; //Field offset: 0x10
	private UltimateResourceFallbackLocation _fallbackLoc; //Field offset: 0x18

	public string CultureName
	{
		 get { } //Length: 8
	}

	public UltimateResourceFallbackLocation Location
	{
		 get { } //Length: 8
	}

	public NeutralResourcesLanguageAttribute(string cultureName) { }

	public string get_CultureName() { }

	public UltimateResourceFallbackLocation get_Location() { }

}

