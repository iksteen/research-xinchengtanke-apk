namespace System.Xml;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class XmlAttributeCollection : XmlNamedNodeMap, ICollection, IEnumerable
{

	public XmlAttribute ItemOf
	{
		 get { } //Length: 336
	}

	private override int System.Collections.ICollection.Count
	{
		private get { } //Length: 8
	}

	private override object System.Collections.ICollection.SyncRoot
	{
		private get { } //Length: 4
	}

	internal XmlAttributeCollection(XmlNode parent) { }

	internal virtual XmlNode AddNode(XmlNode node) { }

	public XmlAttribute Append(XmlAttribute node) { }

	internal void Detach(XmlAttribute attr) { }

	public XmlAttribute get_ItemOf(int i) { }

	internal virtual XmlNode InsertNodeAt(int i, XmlNode node) { }

	internal void InsertParentIntoElementIdAttrMap(XmlAttribute attr) { }

	internal XmlAttribute InternalAppendAttribute(XmlAttribute node) { }

	internal bool PrepareParentInElementIdAttrMap(string attrPrefix, string attrLocalName) { }

	public XmlAttribute Remove(XmlAttribute node) { }

	public void RemoveAll() { }

	public XmlAttribute RemoveAt(int i) { }

	internal int RemoveDuplicateAttribute(XmlAttribute attr) { }

	internal virtual XmlNode RemoveNodeAt(int i) { }

	internal void RemoveParentFromElementIdAttrMap(XmlAttribute attr) { }

	internal void ResetParentInElementIdAttrMap(string oldVal, string newVal) { }

	public virtual XmlNode SetNamedItem(XmlNode node) { }

	private override void System.Collections.ICollection.CopyTo(Array array, int index) { }

	private override int System.Collections.ICollection.get_Count() { }

	private override object System.Collections.ICollection.get_SyncRoot() { }

}

