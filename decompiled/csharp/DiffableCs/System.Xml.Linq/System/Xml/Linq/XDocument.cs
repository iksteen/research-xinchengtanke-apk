namespace System.Xml.Linq;

public class XDocument : XContainer
{
	private XDeclaration declaration; //Field offset: 0x30

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 8
	}

	public XDocument(XDocument other) { }

	internal virtual void AddAttribute(XAttribute a) { }

	internal virtual void AddAttributeSkipNotify(XAttribute a) { }

	internal virtual XNode CloneNode() { }

	public virtual XmlNodeType get_NodeType() { }

	internal static bool IsWhitespace(string s) { }

	private void ValidateDocument(XNode previous, XmlNodeType allowBefore, XmlNodeType allowAfter) { }

	internal virtual void ValidateNode(XNode node, XNode previous) { }

	internal virtual void ValidateString(string s) { }

	public virtual void WriteTo(XmlWriter writer) { }

}

