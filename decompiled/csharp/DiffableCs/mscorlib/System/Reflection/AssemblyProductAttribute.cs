namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyProductAttribute : Attribute
{
	private string m_product; //Field offset: 0x10

	public AssemblyProductAttribute(string product) { }

}

