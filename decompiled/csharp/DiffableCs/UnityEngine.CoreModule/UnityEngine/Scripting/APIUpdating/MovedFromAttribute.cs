namespace UnityEngine.Scripting.APIUpdating;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MovedFromAttribute : Attribute
{
	internal MovedFromAttributeData data; //Field offset: 0x10

	public MovedFromAttribute(string sourceNamespace) { }

}

