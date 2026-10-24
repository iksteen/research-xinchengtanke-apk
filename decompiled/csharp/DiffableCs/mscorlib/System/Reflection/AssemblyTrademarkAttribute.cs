namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyTrademarkAttribute : Attribute
{
	private string m_trademark; //Field offset: 0x10

	public AssemblyTrademarkAttribute(string trademark) { }

}

