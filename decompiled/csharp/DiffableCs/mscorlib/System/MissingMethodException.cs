namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MissingMethodException : MissingMemberException, ISerializable
{
	private string signature; //Field offset: 0xA0

	public virtual string Message
	{
		 get { } //Length: 272
	}

	public MissingMethodException() { }

	public MissingMethodException(string message) { }

	protected MissingMethodException(SerializationInfo info, StreamingContext context) { }

	public MissingMethodException(string className, string methodName) { }

	private MissingMethodException(string className, string methodName, string signature, string message) { }

	public virtual string get_Message() { }

}

