namespace MS.Internal.Xml.Cache;

internal sealed class XPathNodePageInfo
{
	private int pageNum; //Field offset: 0x10
	private int nodeCount; //Field offset: 0x14
	private XPathNode[] pageNext; //Field offset: 0x18

	public XPathNode[] NextPage
	{
		 get { } //Length: 8
	}

	public int NodeCount
	{
		 get { } //Length: 8
	}

	public int PageNumber
	{
		 get { } //Length: 8
	}

	public XPathNode[] get_NextPage() { }

	public int get_NodeCount() { }

	public int get_PageNumber() { }

}

