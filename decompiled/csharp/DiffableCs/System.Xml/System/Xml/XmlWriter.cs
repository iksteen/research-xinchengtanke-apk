namespace System.Xml;

public abstract class XmlWriter : IDisposable
{

	public abstract WriteState WriteState
	{
		 get { } //Length: 0
	}

	protected XmlWriter() { }

	public override void Close() { }

	public static XmlWriter Create(Stream output, XmlWriterSettings settings) { }

	public static XmlWriter Create(TextWriter output, XmlWriterSettings settings) { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	public abstract void Flush() { }

	public abstract WriteState get_WriteState() { }

	public abstract string LookupPrefix(string ns) { }

	public void WriteAttributeString(string prefix, string localName, string ns, string value) { }

	public abstract void WriteBase64(Byte[] buffer, int index, int count) { }

	public override void WriteBinHex(Byte[] buffer, int index, int count) { }

	public abstract void WriteCData(string text) { }

	public abstract void WriteCharEntity(char ch) { }

	public abstract void WriteChars(Char[] buffer, int index, int count) { }

	public abstract void WriteComment(string text) { }

	public abstract void WriteDocType(string name, string pubid, string sysid, string subset) { }

	public abstract void WriteEndAttribute() { }

	public abstract void WriteEndDocument() { }

	public abstract void WriteEndElement() { }

	public abstract void WriteEntityRef(string name) { }

	public abstract void WriteFullEndElement() { }

	public abstract void WriteProcessingInstruction(string name, string text) { }

	public abstract void WriteRaw(Char[] buffer, int index, int count) { }

	public abstract void WriteRaw(string data) { }

	public abstract void WriteStartAttribute(string prefix, string localName, string ns) { }

	public abstract void WriteStartDocument() { }

	public abstract void WriteStartDocument(bool standalone) { }

	public abstract void WriteStartElement(string prefix, string localName, string ns) { }

	public abstract void WriteString(string text) { }

	public abstract void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	public override void WriteValue(string value) { }

	public abstract void WriteWhitespace(string ws) { }

}

