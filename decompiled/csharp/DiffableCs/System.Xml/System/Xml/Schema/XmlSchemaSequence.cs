namespace System.Xml.Schema;

public class XmlSchemaSequence : XmlSchemaGroupBase
{
	private XmlSchemaObjectCollection items; //Field offset: 0x78

	internal virtual bool IsEmpty
	{
		internal get { } //Length: 72
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

	public XmlSchemaSequence() { }

	internal virtual bool get_IsEmpty() { }

	public virtual XmlSchemaObjectCollection get_Items() { }

	internal virtual void SetItems(XmlSchemaObjectCollection newItems) { }

}

