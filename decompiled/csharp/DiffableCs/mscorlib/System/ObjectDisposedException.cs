namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ObjectDisposedException : InvalidOperationException
{
	private string objectName; //Field offset: 0x88

	public virtual string Message
	{
		 get { } //Length: 296
	}

	public string ObjectName
	{
		 get { } //Length: 132
	}

	private ObjectDisposedException() { }

	public ObjectDisposedException(string objectName) { }

	public ObjectDisposedException(string objectName, string message) { }

	protected ObjectDisposedException(SerializationInfo info, StreamingContext context) { }

	public virtual string get_Message() { }

	public string get_ObjectName() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

