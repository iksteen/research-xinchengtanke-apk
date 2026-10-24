namespace System.Xml.Schema;

public class XmlSchemaChoice : XmlSchemaGroupBase
{
	private XmlSchemaObjectCollection items; //Field offset: 0x78

	internal virtual bool IsEmpty
	{
		internal get { } //Length: 4
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual XmlSchemaObjectCollection Items
	{
		 get { } //Length: 8
	}

	public XmlSchemaChoice() { }

	internal virtual bool get_IsEmpty() { }

	public virtual XmlSchemaObjectCollection get_Items() { }

	internal virtual void SetItems(XmlSchemaObjectCollection newItems) { }

}

