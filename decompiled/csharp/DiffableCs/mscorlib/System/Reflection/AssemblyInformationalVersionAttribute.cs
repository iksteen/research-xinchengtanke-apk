namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyInformationalVersionAttribute : Attribute
{
	private string m_informationalVersion; //Field offset: 0x10

	public AssemblyInformationalVersionAttribute(string informationalVersion) { }

}

