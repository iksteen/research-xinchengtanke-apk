namespace MS.Internal.Xml.XPath;

internal class Variable : AstNode
{
	private string localname; //Field offset: 0x10
	private string prefix; //Field offset: 0x18

	public virtual XPathResultType ReturnType
	{
		 get { } //Length: 8
	}

	public virtual AstType Type
	{
		 get { } //Length: 8
	}

	public Variable(string name, string prefix) { }

	public virtual XPathResultType get_ReturnType() { }

	public virtual AstType get_Type() { }

}

