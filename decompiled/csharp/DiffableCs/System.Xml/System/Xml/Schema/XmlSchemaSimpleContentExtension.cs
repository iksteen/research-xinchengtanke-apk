namespace System.Xml.Schema;

public class XmlSchemaSimpleContentExtension : XmlSchemaContent
{
	private XmlSchemaObjectCollection attributes; //Field offset: 0x50
	private XmlSchemaAnyAttribute anyAttribute; //Field offset: 0x58
	private XmlQualifiedName baseTypeName; //Field offset: 0x60

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaObjectCollection Attributes
	{
		 get { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlQualifiedName BaseTypeName
	{
		 get { } //Length: 8
		 set { } //Length: 180
	}

	public XmlSchemaSimpleContentExtension() { }

	public XmlSchemaAnyAttribute get_AnyAttribute() { }

	public XmlSchemaObjectCollection get_Attributes() { }

	public XmlQualifiedName get_BaseTypeName() { }

	public void set_AnyAttribute(XmlSchemaAnyAttribute value) { }

	public void set_BaseTypeName(XmlQualifiedName value) { }

	internal void SetAttributes(XmlSchemaObjectCollection newAttributes) { }

}

