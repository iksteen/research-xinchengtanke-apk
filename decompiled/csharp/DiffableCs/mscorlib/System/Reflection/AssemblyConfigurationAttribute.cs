namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyConfigurationAttribute : Attribute
{
	private string m_configuration; //Field offset: 0x10

	public AssemblyConfigurationAttribute(string configuration) { }

}

