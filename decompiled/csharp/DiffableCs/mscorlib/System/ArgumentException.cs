namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ArgumentException : SystemException, ISerializable
{
	private string m_paramName; //Field offset: 0x88

	public virtual string Message
	{
		 get { } //Length: 296
	}

	public ArgumentException() { }

	public ArgumentException(string message) { }

	public ArgumentException(string message, Exception innerException) { }

	public ArgumentException(string message, string paramName) { }

	protected ArgumentException(SerializationInfo info, StreamingContext context) { }

	public virtual string get_Message() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

