namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TargetException : ApplicationException
{

	public TargetException() { }

	public TargetException(string message) { }

	protected TargetException(SerializationInfo info, StreamingContext context) { }

}

