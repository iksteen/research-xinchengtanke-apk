namespace System.Xml.Schema;

public class XmlSchemaComplexContent : XmlSchemaContentModel
{
	private XmlSchemaContent content; //Field offset: 0x50
	private bool isMixed; //Field offset: 0x58
	private bool hasMixedAttribute; //Field offset: 0x59

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual XmlSchemaContent Content
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[XmlIgnore]
	internal bool HasMixedAttribute
	{
		internal get { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool IsMixed
	{
		 get { } //Length: 8
		 set { } //Length: 20
	}

	public XmlSchemaComplexContent() { }

	public virtual XmlSchemaContent get_Content() { }

	internal bool get_HasMixedAttribute() { }

	public bool get_IsMixed() { }

	public virtual void set_Content(XmlSchemaContent value) { }

	public void set_IsMixed(bool value) { }

}

