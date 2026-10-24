namespace System.Xml;

public class XmlAttribute : XmlNode
{
	private XmlName name; //Field offset: 0x18
	private XmlLinkedNode lastChild; //Field offset: 0x20

	public virtual string BaseURI
	{
		 get { } //Length: 156
	}

	public virtual string InnerText
	{
		 set { } //Length: 116
	}

	public virtual string InnerXml
	{
		 set { } //Length: 144
	}

	internal virtual bool IsContainer
	{
		internal get { } //Length: 8
	}

	internal virtual XmlLinkedNode LastNode
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	public virtual string LocalName
	{
		 get { } //Length: 28
	}

	public virtual string Name
	{
		 get { } //Length: 28
	}

	public virtual string NamespaceURI
	{
		 get { } //Length: 28
	}

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 8
	}

	public virtual XmlDocument OwnerDocument
	{
		 get { } //Length: 28
	}

	public override XmlElement OwnerElement
	{
		 get { } //Length: 128
	}

	public virtual XmlNode ParentNode
	{
		 get { } //Length: 8
	}

	public virtual string Prefix
	{
		 get { } //Length: 28
	}

	public override bool Specified
	{
		 get { } //Length: 8
	}

	public virtual string Value
	{
		 get { } //Length: 16
		 set { } //Length: 16
	}

	internal XmlName XmlName
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	internal XmlAttribute(XmlName name, XmlDocument doc) { }

	protected private XmlAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc) { }

	public virtual XmlNode AppendChild(XmlNode newChild) { }

	internal virtual XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc) { }

	public virtual XmlNode CloneNode(bool deep) { }

	public virtual string get_BaseURI() { }

	internal virtual bool get_IsContainer() { }

	internal virtual XmlLinkedNode get_LastNode() { }

	public virtual string get_LocalName() { }

	public virtual string get_Name() { }

	public virtual string get_NamespaceURI() { }

	public virtual XmlNodeType get_NodeType() { }

	public virtual XmlDocument get_OwnerDocument() { }

	public override XmlElement get_OwnerElement() { }

	public virtual XmlNode get_ParentNode() { }

	public virtual string get_Prefix() { }

	public override bool get_Specified() { }

	public virtual string get_Value() { }

	internal XmlName get_XmlName() { }

	internal virtual bool IsValidChildType(XmlNodeType type) { }

	internal bool PrepareOwnerElementInElementIdAttrMap() { }

	public virtual XmlNode RemoveChild(XmlNode oldChild) { }

	internal void ResetOwnerElementInElementIdAttrMap(string oldInnerText) { }

	public virtual void set_InnerText(string value) { }

	public virtual void set_InnerXml(string value) { }

	internal virtual void set_LastNode(XmlLinkedNode value) { }

	public virtual void set_Value(string value) { }

	internal void set_XmlName(XmlName value) { }

	internal virtual void SetParent(XmlNode node) { }

}

