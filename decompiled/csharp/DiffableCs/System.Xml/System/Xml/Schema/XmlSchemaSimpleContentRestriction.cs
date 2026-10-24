namespace System.Xml.Schema;

public class XmlSchemaSimpleContentRestriction : XmlSchemaContent
{
	private XmlQualifiedName baseTypeName; //Field offset: 0x50
	private XmlSchemaSimpleType baseType; //Field offset: 0x58
	private XmlSchemaObjectCollection facets; //Field offset: 0x60
	private XmlSchemaObjectCollection attributes; //Field offset: 0x68
	private XmlSchemaAnyAttribute anyAttribute; //Field offset: 0x70

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

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaSimpleType BaseType
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlQualifiedName BaseTypeName
	{
		 get { } //Length: 8
		 set { } //Length: 180
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaObjectCollection Facets
	{
		 get { } //Length: 8
	}

	public XmlSchemaSimpleContentRestriction() { }

	public XmlSchemaAnyAttribute get_AnyAttribute() { }

	public XmlSchemaObjectCollection get_Attributes() { }

	public XmlSchemaSimpleType get_BaseType() { }

	public XmlQualifiedName get_BaseTypeName() { }

	public XmlSchemaObjectCollection get_Facets() { }

	public void set_AnyAttribute(XmlSchemaAnyAttribute value) { }

	public void set_BaseType(XmlSchemaSimpleType value) { }

	public void set_BaseTypeName(XmlQualifiedName value) { }

	internal void SetAttributes(XmlSchemaObjectCollection newAttributes) { }

}

