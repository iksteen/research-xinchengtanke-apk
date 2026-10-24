namespace System.Xml;

internal class XmlAsyncCheckReaderWithLineInfo : XmlAsyncCheckReader, IXmlLineInfo
{
	private readonly IXmlLineInfo readerAsIXmlLineInfo; //Field offset: 0x20

	public override int LineNumber
	{
		 get { } //Length: 176
	}

	public override int LinePosition
	{
		 get { } //Length: 176
	}

	public XmlAsyncCheckReaderWithLineInfo(XmlReader reader) { }

	public override int get_LineNumber() { }

	public override int get_LinePosition() { }

	public override bool HasLineInfo() { }

}

