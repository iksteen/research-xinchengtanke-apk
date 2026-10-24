namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CustomAttributeFormatException : FormatException
{

	public CustomAttributeFormatException() { }

	public CustomAttributeFormatException(string message) { }

	protected CustomAttributeFormatException(SerializationInfo info, StreamingContext context) { }

}

