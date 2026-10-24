namespace System.Runtime.InteropServices;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ExternalException : SystemException
{

	public ExternalException() { }

	public ExternalException(string message) { }

	protected ExternalException(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

}

