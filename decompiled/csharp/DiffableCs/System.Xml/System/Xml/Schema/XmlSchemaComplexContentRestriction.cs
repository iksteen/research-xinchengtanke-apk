namespace System.Xml.Schema;

public class XmlSchemaComplexContentRestriction : XmlSchemaContent
{
	private XmlSchemaParticle particle; //Field offset: 0x50
	private XmlSchemaObjectCollection attributes; //Field offset: 0x58
	private XmlSchemaAnyAttribute anyAttribute; //Field offset: 0x60
	private XmlQualifiedName baseTypeName; //Field offset: 0x68

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
		 set { } //Length: 176
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaParticle Particle
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public XmlSchemaComplexContentRestriction() { }

	public XmlSchemaAnyAttribute get_AnyAttribute() { }

	public XmlSchemaObjectCollection get_Attributes() { }

	public XmlQualifiedName get_BaseTypeName() { }

	public XmlSchemaParticle get_Particle() { }

	public void set_AnyAttribute(XmlSchemaAnyAttribute value) { }

	public void set_BaseTypeName(XmlQualifiedName value) { }

	public void set_Particle(XmlSchemaParticle value) { }

	internal void SetAttributes(XmlSchemaObjectCollection newAttributes) { }

}

