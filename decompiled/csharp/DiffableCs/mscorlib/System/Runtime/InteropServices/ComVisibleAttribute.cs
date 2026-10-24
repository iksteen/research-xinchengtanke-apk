namespace System.Runtime.InteropServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ComVisibleAttribute : Attribute
{
	internal bool _val; //Field offset: 0x10

	public ComVisibleAttribute(bool visibility) { }

}

