namespace System.Xml;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class XmlNode : ICloneable, IEnumerable
{
	internal XmlNode parentNode; //Field offset: 0x10

	public override XmlAttributeCollection Attributes
	{
		 get { } //Length: 8
	}

	public override string BaseURI
	{
		 get { } //Length: 296
	}

	public override XmlNodeList ChildNodes
	{
		 get { } //Length: 96
	}

	public override XmlNode FirstChild
	{
		 get { } //Length: 40
	}

	public override bool HasChildNodes
	{
		 get { } //Length: 40
	}

	public override string InnerText
	{
		 get { } //Length: 268
		 set { } //Length: 220
	}

	public override string InnerXml
	{
		 set { } //Length: 92
	}

	internal override bool IsContainer
	{
		internal get { } //Length: 8
	}

	public override bool IsReadOnly
	{
		 get { } //Length: 48
	}

	internal override bool IsText
	{
		internal get { } //Length: 8
	}

	public override XmlNode LastChild
	{
		 get { } //Length: 16
	}

	internal override XmlLinkedNode LastNode
	{
		internal get { } //Length: 8
		internal set { } //Length: 4
	}

	public abstract string LocalName
	{
		 get { } //Length: 0
	}

	public abstract string Name
	{
		 get { } //Length: 0
	}

	public override string NamespaceURI
	{
		 get { } //Length: 76
	}

	public override XmlNode NextSibling
	{
		 get { } //Length: 8
	}

	public abstract XmlNodeType NodeType
	{
		 get { } //Length: 0
	}

	public override XmlDocument OwnerDocument
	{
		 get { } //Length: 196
	}

	public override XmlNode ParentNode
	{
		 get { } //Length: 240
	}

	public override string Prefix
	{
		 get { } //Length: 76
	}

	public override XmlNode PreviousSibling
	{
		 get { } //Length: 8
	}

	public override string Value
	{
		 get { } //Length: 8
		 set { } //Length: 284
	}

	internal XmlNode() { }

	internal XmlNode(XmlDocument doc) { }

	internal override void AfterEvent(XmlNodeChangedEventArgs args) { }

	internal bool AncestorNode(XmlNode node) { }

	public override XmlNode AppendChild(XmlNode newChild) { }

	internal override XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc) { }

	private void AppendChildText(StringBuilder builder) { }

	internal override void BeforeEvent(XmlNodeChangedEventArgs args) { }

	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild) { }

	public abstract XmlNode CloneNode(bool deep) { }

	internal override void CopyChildren(XmlDocument doc, XmlNode container, bool deep) { }

	internal override XmlNode FindChild(XmlNodeType type) { }

	public override XmlAttributeCollection get_Attributes() { }

	public override string get_BaseURI() { }

	public override XmlNodeList get_ChildNodes() { }

	public override XmlNode get_FirstChild() { }

	public override bool get_HasChildNodes() { }

	public override string get_InnerText() { }

	internal override bool get_IsContainer() { }

	public override bool get_IsReadOnly() { }

	internal override bool get_IsText() { }

	public override XmlNode get_LastChild() { }

	internal override XmlLinkedNode get_LastNode() { }

	public abstract string get_LocalName() { }

	public abstract string get_Name() { }

	public override string get_NamespaceURI() { }

	public override XmlNode get_NextSibling() { }

	public abstract XmlNodeType get_NodeType() { }

	public override XmlDocument get_OwnerDocument() { }

	public override XmlNode get_ParentNode() { }

	public override string get_Prefix() { }

	public override XmlNode get_PreviousSibling() { }

	public override string get_Value() { }

	internal override XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action) { }

	internal static bool HasReadOnlyParent(XmlNode n) { }

	internal override bool IsValidChildType(XmlNodeType type) { }

	internal static void NestTextNodes(XmlNode prevNode, XmlNode nextNode) { }

	public override void RemoveAll() { }

	public override XmlNode RemoveChild(XmlNode oldChild) { }

	public override void set_InnerText(string value) { }

	public override void set_InnerXml(string value) { }

	internal override void set_LastNode(XmlLinkedNode value) { }

	public override void set_Value(string value) { }

	internal override void SetParent(XmlNode node) { }

	internal override void SetParentForLoad(XmlNode node) { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	private override object System.ICloneable.Clone() { }

	internal static void UnnestTextNodes(XmlNode prevNode, XmlNode nextNode) { }

}

