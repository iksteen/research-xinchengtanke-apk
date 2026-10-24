namespace System.Xml.Linq;

public abstract class XNode : XObject
{
	internal XNode next; //Field offset: 0x20

	internal XNode() { }

	internal override void AppendText(StringBuilder sb) { }

	internal abstract XNode CloneNode() { }

	internal static XmlReaderSettings GetXmlReaderSettings(LoadOptions o) { }

	private string GetXmlString(SaveOptions o) { }

	public virtual string ToString() { }

	public abstract void WriteTo(XmlWriter writer) { }

}

