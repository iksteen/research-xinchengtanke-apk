namespace Mono.Xml;

internal class SmallXmlParserException : SystemException
{
	private int line; //Field offset: 0x88
	private int column; //Field offset: 0x8C

	public SmallXmlParserException(string msg, int line, int column) { }

}

