namespace System.Xml.Serialization;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class XmlSchemaProviderAttribute : Attribute
{
	private string _methodName; //Field offset: 0x10
	private bool _isAny; //Field offset: 0x18

	public bool IsAny
	{
		 set { } //Length: 12
	}

	public XmlSchemaProviderAttribute(string methodName) { }

	public void set_IsAny(bool value) { }

}

