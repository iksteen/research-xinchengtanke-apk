namespace System.Xml;

public class XmlCDataSection : XmlCharacterData
{

	internal virtual bool IsText
	{
		internal get { } //Length: 8
	}

	public virtual string LocalName
	{
		 get { } //Length: 44
	}

	public virtual string Name
	{
		 get { } //Length: 44
	}

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 8
	}

	public virtual XmlNode ParentNode
	{
		 get { } //Length: 144
	}

	protected private XmlCDataSection(string data, XmlDocument doc) { }

	public virtual XmlNode CloneNode(bool deep) { }

	internal virtual bool get_IsText() { }

	public virtual string get_LocalName() { }

	public virtual string get_Name() { }

	public virtual XmlNodeType get_NodeType() { }

	public virtual XmlNode get_ParentNode() { }

}

