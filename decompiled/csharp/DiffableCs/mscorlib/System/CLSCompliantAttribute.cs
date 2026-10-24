namespace System;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class CLSCompliantAttribute : Attribute
{
	private bool m_compliant; //Field offset: 0x10

	public CLSCompliantAttribute(bool isCompliant) { }

}

