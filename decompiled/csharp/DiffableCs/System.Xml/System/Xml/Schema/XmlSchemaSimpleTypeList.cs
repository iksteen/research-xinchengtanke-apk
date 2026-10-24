namespace System.Xml.Schema;

public class XmlSchemaSimpleTypeList : XmlSchemaSimpleTypeContent
{
	private XmlQualifiedName itemTypeName; //Field offset: 0x50
	private XmlSchemaSimpleType itemType; //Field offset: 0x58
	private XmlSchemaSimpleType baseItemType; //Field offset: 0x60

	[XmlIgnore]
	public XmlSchemaSimpleType BaseItemType
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaSimpleType ItemType
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlQualifiedName ItemTypeName
	{
		 get { } //Length: 8
		 set { } //Length: 180
	}

	public XmlSchemaSimpleTypeList() { }

	internal virtual XmlSchemaObject Clone() { }

	public XmlSchemaSimpleType get_BaseItemType() { }

	public XmlSchemaSimpleType get_ItemType() { }

	public XmlQualifiedName get_ItemTypeName() { }

	public void set_BaseItemType(XmlSchemaSimpleType value) { }

	public void set_ItemType(XmlSchemaSimpleType value) { }

	public void set_ItemTypeName(XmlQualifiedName value) { }

}

