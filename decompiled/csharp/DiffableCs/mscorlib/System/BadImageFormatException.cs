namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class BadImageFormatException : SystemException
{
	private string _fileName; //Field offset: 0x88
	private string _fusionLog; //Field offset: 0x90

	public string FusionLog
	{
		 get { } //Length: 8
	}

	public virtual string Message
	{
		 get { } //Length: 36
	}

	public BadImageFormatException() { }

	public BadImageFormatException(string message) { }

	public BadImageFormatException(string message, Exception inner) { }

	public BadImageFormatException(string message, string fileName) { }

	protected BadImageFormatException(SerializationInfo info, StreamingContext context) { }

	public string get_FusionLog() { }

	public virtual string get_Message() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	private void SetMessageField() { }

	public virtual string ToString() { }

}

