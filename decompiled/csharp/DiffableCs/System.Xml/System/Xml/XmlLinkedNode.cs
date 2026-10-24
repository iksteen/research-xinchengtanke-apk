namespace System.Xml;

public abstract class XmlLinkedNode : XmlNode
{
	internal XmlLinkedNode next; //Field offset: 0x18

	public virtual XmlNode NextSibling
	{
		 get { } //Length: 84
	}

	public virtual XmlNode PreviousSibling
	{
		 get { } //Length: 108
	}

	internal XmlLinkedNode(XmlDocument doc) { }

	public virtual XmlNode get_NextSibling() { }

	public virtual XmlNode get_PreviousSibling() { }

}

