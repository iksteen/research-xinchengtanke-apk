namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyDescriptionAttribute : Attribute
{
	private string m_description; //Field offset: 0x10

	public AssemblyDescriptionAttribute(string description) { }

}

