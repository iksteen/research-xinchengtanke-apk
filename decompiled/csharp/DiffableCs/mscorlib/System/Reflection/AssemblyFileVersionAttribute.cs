namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyFileVersionAttribute : Attribute
{
	private string _version; //Field offset: 0x10

	public AssemblyFileVersionAttribute(string version) { }

}

