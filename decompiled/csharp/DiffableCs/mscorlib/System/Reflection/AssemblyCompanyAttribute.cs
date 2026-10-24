namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyCompanyAttribute : Attribute
{
	private string m_company; //Field offset: 0x10

	public AssemblyCompanyAttribute(string company) { }

}

