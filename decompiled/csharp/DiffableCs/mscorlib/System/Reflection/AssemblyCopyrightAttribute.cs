namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyCopyrightAttribute : Attribute
{
	private string m_copyright; //Field offset: 0x10

	public AssemblyCopyrightAttribute(string copyright) { }

}

