namespace System.Runtime.InteropServices;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class COMException : ExternalException
{

	public COMException() { }

	protected COMException(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

}

