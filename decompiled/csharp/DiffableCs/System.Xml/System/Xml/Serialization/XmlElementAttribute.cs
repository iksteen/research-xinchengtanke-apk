namespace System.Xml.Serialization;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class XmlElementAttribute : Attribute
{
	private string elementName; //Field offset: 0x10
	private Type type; //Field offset: 0x18
	private int order; //Field offset: 0x20

	public XmlElementAttribute(string elementName) { }

	public XmlElementAttribute(string elementName, Type type) { }

}

