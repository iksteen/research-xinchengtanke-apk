namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class HeaderAttribute : PropertyAttribute
{
	public readonly string header; //Field offset: 0x10

	public HeaderAttribute(string header) { }

}

