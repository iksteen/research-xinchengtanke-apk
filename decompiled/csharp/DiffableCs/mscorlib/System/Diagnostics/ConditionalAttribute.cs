namespace System.Diagnostics;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ConditionalAttribute : Attribute
{
	private string m_conditionString; //Field offset: 0x10

	public ConditionalAttribute(string conditionString) { }

}

