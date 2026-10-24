namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MissingFieldException : MissingMemberException, ISerializable
{

	public virtual string Message
	{
		 get { } //Length: 352
	}

	public MissingFieldException() { }

	public MissingFieldException(string message) { }

	protected MissingFieldException(SerializationInfo info, StreamingContext context) { }

	public MissingFieldException(string className, string fieldName) { }

	public virtual string get_Message() { }

}

