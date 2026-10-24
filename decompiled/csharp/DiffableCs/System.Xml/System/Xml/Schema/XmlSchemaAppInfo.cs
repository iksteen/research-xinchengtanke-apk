namespace System.Xml.Schema;

public class XmlSchemaAppInfo : XmlSchemaObject
{
	private string source; //Field offset: 0x38
	private XmlNode[] markup; //Field offset: 0x40

	[XmlAnyElement]
	[XmlText]
	public XmlNode[] Markup
	{
		 set { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string Source
	{
		 set { } //Length: 8
	}

	public XmlSchemaAppInfo() { }

	public void set_Markup(XmlNode[] value) { }

	public void set_Source(string value) { }

}

