namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TooltipAttribute : PropertyAttribute
{
	public readonly string tooltip; //Field offset: 0x10

	public TooltipAttribute(string tooltip) { }

}

