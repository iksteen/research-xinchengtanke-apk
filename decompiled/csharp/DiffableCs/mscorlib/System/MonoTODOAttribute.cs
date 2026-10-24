namespace System;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class MonoTODOAttribute : Attribute
{
	private string comment; //Field offset: 0x10

	public MonoTODOAttribute() { }

	public MonoTODOAttribute(string comment) { }

}

