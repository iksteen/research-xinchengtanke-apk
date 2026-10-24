namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class StringWriter : TextWriter
{
	private static UnicodeEncoding m_encoding; //Field offset: 0x0
	private StringBuilder _sb; //Field offset: 0x28
	private bool _isOpen; //Field offset: 0x30

	public virtual Encoding Encoding
	{
		 get { } //Length: 176
	}

	public StringWriter() { }

	public StringWriter(IFormatProvider formatProvider) { }

	public StringWriter(StringBuilder sb, IFormatProvider formatProvider) { }

	public virtual void Close() { }

	protected virtual void Dispose(bool disposing) { }

	public virtual Encoding get_Encoding() { }

	public virtual string ToString() { }

	public virtual void Write(char value) { }

	public virtual void Write(Char[] buffer, int index, int count) { }

	public virtual void Write(string value) { }

}

