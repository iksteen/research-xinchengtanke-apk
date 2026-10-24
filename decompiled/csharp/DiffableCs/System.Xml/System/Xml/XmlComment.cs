namespace System.Xml;

public class XmlComment : XmlCharacterData
{

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

	protected private XmlComment(string comment, XmlDocument doc) { }

	public virtual XmlNode CloneNode(bool deep) { }

	public virtual string get_LocalName() { }

	public virtual string get_Name() { }

	public virtual XmlNodeType get_NodeType() { }

}

