namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MissingMemberException : MemberAccessException, ISerializable
{
	protected string ClassName; //Field offset: 0x88
	protected string MemberName; //Field offset: 0x90
	protected Byte[] Signature; //Field offset: 0x98

	public virtual string Message
	{
		 get { } //Length: 392
	}

	public MissingMemberException() { }

	public MissingMemberException(string message) { }

	protected MissingMemberException(SerializationInfo info, StreamingContext context) { }

	internal static string FormatSignature(Byte[] signature) { }

	public virtual string get_Message() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

