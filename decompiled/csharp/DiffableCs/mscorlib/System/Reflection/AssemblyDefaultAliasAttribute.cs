namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyDefaultAliasAttribute : Attribute
{
	private string m_defaultAlias; //Field offset: 0x10

	public AssemblyDefaultAliasAttribute(string defaultAlias) { }

}

