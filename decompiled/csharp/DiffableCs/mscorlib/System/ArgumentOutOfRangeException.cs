namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ArgumentOutOfRangeException : ArgumentException, ISerializable
{
	private static string _rangeMessage; //Field offset: 0x0
	private object m_actualValue; //Field offset: 0x90

	public virtual string Message
	{
		 get { } //Length: 312
	}

	private static string RangeMessage
	{
		private get { } //Length: 164
	}

	public ArgumentOutOfRangeException() { }

	public ArgumentOutOfRangeException(string paramName) { }

	public ArgumentOutOfRangeException(string paramName, string message) { }

	public ArgumentOutOfRangeException(string paramName, object actualValue, string message) { }

	protected ArgumentOutOfRangeException(SerializationInfo info, StreamingContext context) { }

	public virtual string get_Message() { }

	private static string get_RangeMessage() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

