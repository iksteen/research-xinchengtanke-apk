namespace MS.Internal.Xml.Cache;

internal sealed class XPathNodeInfoAtom
{
	private string localName; //Field offset: 0x10
	private string namespaceUri; //Field offset: 0x18
	private string prefix; //Field offset: 0x20
	private XPathNode[] pageParent; //Field offset: 0x28
	private XPathNode[] pageSibling; //Field offset: 0x30
	private XPathDocument doc; //Field offset: 0x38
	private int lineNumBase; //Field offset: 0x40
	private int linePosBase; //Field offset: 0x44
	private XPathNodePageInfo pageInfo; //Field offset: 0x48

	public XPathDocument Document
	{
		 get { } //Length: 8
	}

	public int LineNumberBase
	{
		 get { } //Length: 8
	}

	public int LinePositionBase
	{
		 get { } //Length: 8
	}

	public string LocalName
	{
		 get { } //Length: 8
	}

	public string NamespaceUri
	{
		 get { } //Length: 8
	}

	public XPathNodePageInfo PageInfo
	{
		 get { } //Length: 8
	}

	public XPathNode[] ParentPage
	{
		 get { } //Length: 8
	}

	public string Prefix
	{
		 get { } //Length: 8
	}

	public XPathNode[] SiblingPage
	{
		 get { } //Length: 8
	}

	public XPathDocument get_Document() { }

	public int get_LineNumberBase() { }

	public int get_LinePositionBase() { }

	public string get_LocalName() { }

	public string get_NamespaceUri() { }

	public XPathNodePageInfo get_PageInfo() { }

	public XPathNode[] get_ParentPage() { }

	public string get_Prefix() { }

	public XPathNode[] get_SiblingPage() { }

}

