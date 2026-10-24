namespace System.Xml.Schema;

internal class Asttree
{
	private ArrayList fAxisArray; //Field offset: 0x10
	private string xpathexpr; //Field offset: 0x18
	private bool isField; //Field offset: 0x20
	private XmlNamespaceManager nsmgr; //Field offset: 0x28

	internal ArrayList SubtreeArray
	{
		internal get { } //Length: 8
	}

	public Asttree(string xPath, bool isField, XmlNamespaceManager nsmgr) { }

	public void CompileXPath(string xPath, bool isField, XmlNamespaceManager nsmgr) { }

	internal ArrayList get_SubtreeArray() { }

	internal static bool IsAttribute(Axis ast) { }

	private static bool IsDescendantOrSelf(Axis ast) { }

	private static bool IsNameTest(Axis ast) { }

	internal static bool IsSelf(Axis ast) { }

	private void SetURN(Axis axis, XmlNamespaceManager nsmgr) { }

}

