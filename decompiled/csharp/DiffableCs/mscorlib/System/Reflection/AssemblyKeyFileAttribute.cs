namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyKeyFileAttribute : Attribute
{
	private string m_keyFile; //Field offset: 0x10

	public AssemblyKeyFileAttribute(string keyFile) { }

}

