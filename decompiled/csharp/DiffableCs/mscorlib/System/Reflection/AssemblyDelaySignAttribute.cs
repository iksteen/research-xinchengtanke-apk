namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AssemblyDelaySignAttribute : Attribute
{
	private bool m_delaySign; //Field offset: 0x10

	public AssemblyDelaySignAttribute(bool delaySign) { }

}

