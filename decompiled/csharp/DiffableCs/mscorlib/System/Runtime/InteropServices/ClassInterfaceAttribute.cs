namespace System.Runtime.InteropServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ClassInterfaceAttribute : Attribute
{
	internal ClassInterfaceType _val; //Field offset: 0x10

	public ClassInterfaceAttribute(ClassInterfaceType classInterfaceType) { }

}

