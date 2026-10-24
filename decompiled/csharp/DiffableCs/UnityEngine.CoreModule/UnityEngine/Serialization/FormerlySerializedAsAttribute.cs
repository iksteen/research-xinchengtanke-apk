namespace UnityEngine.Serialization;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class FormerlySerializedAsAttribute : Attribute
{
	private string m_oldName; //Field offset: 0x10

	public FormerlySerializedAsAttribute(string oldName) { }

}

