namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TextAreaAttribute : PropertyAttribute
{
	public readonly int minLines; //Field offset: 0x10
	public readonly int maxLines; //Field offset: 0x14

	public TextAreaAttribute(int minLines, int maxLines) { }

}

