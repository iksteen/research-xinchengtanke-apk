namespace System.Runtime.InteropServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class InterfaceTypeAttribute : Attribute
{
	internal ComInterfaceType _val; //Field offset: 0x10

	public InterfaceTypeAttribute(ComInterfaceType interfaceType) { }

}

