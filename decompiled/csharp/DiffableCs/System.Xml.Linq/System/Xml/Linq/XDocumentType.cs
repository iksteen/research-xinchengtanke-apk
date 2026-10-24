namespace System.Xml.Linq;

public class XDocumentType : XNode
{
	private string name; //Field offset: 0x28
	private string publicId; //Field offset: 0x30
	private string systemId; //Field offset: 0x38
	private string internalSubset; //Field offset: 0x40
	private IDtdInfo dtdInfo; //Field offset: 0x48

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 8
	}

	public XDocumentType(string name, string publicId, string systemId, string internalSubset) { }

	public XDocumentType(XDocumentType other) { }

	internal XDocumentType(string name, string publicId, string systemId, string internalSubset, IDtdInfo dtdInfo) { }

	internal virtual XNode CloneNode() { }

	public virtual XmlNodeType get_NodeType() { }

	public virtual void WriteTo(XmlWriter writer) { }

}

