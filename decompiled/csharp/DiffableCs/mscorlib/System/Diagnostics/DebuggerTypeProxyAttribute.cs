namespace System.Diagnostics;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DebuggerTypeProxyAttribute : Attribute
{
	private string typeName; //Field offset: 0x10

	public DebuggerTypeProxyAttribute(Type type) { }

}

