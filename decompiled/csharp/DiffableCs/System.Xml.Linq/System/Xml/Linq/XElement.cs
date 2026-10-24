namespace System.Xml.Linq;

[TypeDescriptionProvider(/*Cpp2IL Warning: missing at least one required parameter*/)]
[XmlSchemaProvider(/*Cpp2IL Warning: missing at least one required parameter*/)]
[XmlTypeConvertor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class XElement : XContainer
{
	private static IEnumerable<XElement> emptySequence; //Field offset: 0x0
	internal XName name; //Field offset: 0x30
	internal XAttribute lastAttr; //Field offset: 0x38

	public static IEnumerable<XElement> EmptySequence
	{
		 get { } //Length: 148
	}

	public XName Name
	{
		 get { } //Length: 8
	}

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 8
	}

	public string Value
	{
		 get { } //Length: 196
	}

	public XElement(XName name) { }

	public XElement(XName name, object content) { }

	public XElement(XElement other) { }

	public XElement(XStreamingElement other) { }

	internal XElement(XmlReader r, LoadOptions o) { }

	internal virtual void AddAttribute(XAttribute a) { }

	internal virtual void AddAttributeSkipNotify(XAttribute a) { }

	internal void AppendAttribute(XAttribute a) { }

	internal void AppendAttributeSkipNotify(XAttribute a) { }

	public XAttribute Attribute(XName name) { }

	internal virtual XNode CloneNode() { }

	public static IEnumerable<XElement> get_EmptySequence() { }

	public XName get_Name() { }

	public virtual XmlNodeType get_NodeType() { }

	public string get_Value() { }

	private string GetNamespaceOfPrefixInScope(string prefix, XElement outOfScope) { }

	public string GetPrefixOfNamespace(XNamespace ns) { }

	public static XElement Load(XmlReader reader, LoadOptions options) { }

	public static XElement Parse(string text, LoadOptions options) { }

	public static XElement Parse(string text) { }

	private void ReadElementFrom(XmlReader r, LoadOptions o) { }

	internal void SetEndElementLineInfo(int lineNumber, int linePosition) { }

	internal virtual void ValidateNode(XNode node, XNode previous) { }

	public virtual void WriteTo(XmlWriter writer) { }

}

