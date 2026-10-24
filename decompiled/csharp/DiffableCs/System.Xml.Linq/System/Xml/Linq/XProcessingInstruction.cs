namespace System.Xml.Linq;

public class XProcessingInstruction : XNode
{
	internal string target; //Field offset: 0x28
	internal string data; //Field offset: 0x30

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 8
	}

	public XProcessingInstruction(string target, string data) { }

	public XProcessingInstruction(XProcessingInstruction other) { }

	internal virtual XNode CloneNode() { }

	public virtual XmlNodeType get_NodeType() { }

	private static void ValidateName(string name) { }

	public virtual void WriteTo(XmlWriter writer) { }

}

