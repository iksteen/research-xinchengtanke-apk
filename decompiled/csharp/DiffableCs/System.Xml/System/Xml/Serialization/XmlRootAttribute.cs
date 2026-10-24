namespace System.Xml.Serialization;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class XmlRootAttribute : Attribute
{
	private string elementName; //Field offset: 0x10
	private bool isNullable; //Field offset: 0x18
	private string ns; //Field offset: 0x20

	public string Namespace
	{
		 set { } //Length: 8
	}

	public XmlRootAttribute(string elementName) { }

	public void set_Namespace(string value) { }

}

