namespace System.Diagnostics;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DebuggerBrowsableAttribute : Attribute
{
	private DebuggerBrowsableState state; //Field offset: 0x10

	public DebuggerBrowsableAttribute(DebuggerBrowsableState state) { }

}

