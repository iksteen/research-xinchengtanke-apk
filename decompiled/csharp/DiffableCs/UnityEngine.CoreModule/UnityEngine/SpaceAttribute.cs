namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SpaceAttribute : PropertyAttribute
{
	public readonly float height; //Field offset: 0x10

	public SpaceAttribute() { }

	public SpaceAttribute(float height) { }

}

