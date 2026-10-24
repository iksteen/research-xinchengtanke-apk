namespace System.Security;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class XmlSyntaxException : SystemException
{

	public XmlSyntaxException() { }

	public XmlSyntaxException(int lineNumber) { }

	public XmlSyntaxException(int lineNumber, string message) { }

	public XmlSyntaxException(string message) { }

	public XmlSyntaxException(string message, Exception inner) { }

	internal XmlSyntaxException(SerializationInfo info, StreamingContext context) { }

}

