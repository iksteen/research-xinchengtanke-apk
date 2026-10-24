namespace System.Xml.Schema;

public class XmlSchemaSimpleTypeRestriction : XmlSchemaSimpleTypeContent
{
	private XmlQualifiedName baseTypeName; //Field offset: 0x50
	private XmlSchemaSimpleType baseType; //Field offset: 0x58
	private XmlSchemaObjectCollection facets; //Field offset: 0x60

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

	public XmlSchemaSimpleTypeRestriction() { }

	internal virtual XmlSchemaObject Clone() { }

	public XmlSchemaSimpleType get_BaseType() { }

	public XmlQualifiedName get_BaseTypeName() { }

	public XmlSchemaObjectCollection get_Facets() { }

	public void set_BaseType(XmlSchemaSimpleType value) { }

	public void set_BaseTypeName(XmlQualifiedName value) { }

}

