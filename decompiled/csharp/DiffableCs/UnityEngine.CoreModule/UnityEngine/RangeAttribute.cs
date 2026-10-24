namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class RangeAttribute : PropertyAttribute
{
	public readonly float min; //Field offset: 0x10
	public readonly float max; //Field offset: 0x14

	public RangeAttribute(float min, float max) { }

}

