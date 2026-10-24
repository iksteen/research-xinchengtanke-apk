namespace System.Diagnostics;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DebuggerDisplayAttribute : Attribute
{
	private string name; //Field offset: 0x10
	private string value; //Field offset: 0x18
	private string type; //Field offset: 0x20

	public DebuggerDisplayAttribute(string value) { }

}

