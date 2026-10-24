namespace System.Xml.Serialization;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class XmlAttributeAttribute : Attribute
{
	private string attributeName; //Field offset: 0x10
	private string dataType; //Field offset: 0x18

	public string DataType
	{
		 set { } //Length: 8
	}

	public XmlAttributeAttribute(string attributeName) { }

	public void set_DataType(string value) { }

}

