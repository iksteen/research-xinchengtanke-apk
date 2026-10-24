namespace System.Xml.Schema;

public class XmlSchemaGroupRef : XmlSchemaParticle
{
	private XmlQualifiedName refName; //Field offset: 0x78
	private XmlSchemaGroupBase particle; //Field offset: 0x80
	private XmlSchemaGroup refined; //Field offset: 0x88

	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlQualifiedName RefName
	{
		 get { } //Length: 8
		 set { } //Length: 176
	}

	public XmlSchemaGroupRef() { }

	internal XmlSchemaGroup get_Redefined() { }

	public XmlQualifiedName get_RefName() { }

	internal void set_Redefined(XmlSchemaGroup value) { }

	public void set_RefName(XmlQualifiedName value) { }

	internal void SetParticle(XmlSchemaGroupBase value) { }

}

