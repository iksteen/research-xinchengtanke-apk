namespace System.Globalization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CultureNotFoundException : ArgumentException, ISerializable
{
	private string m_invalidCultureName; //Field offset: 0x90
	private Nullable<Int32> m_invalidCultureId; //Field offset: 0x98

	private static string DefaultMessage
	{
		private get { } //Length: 72
	}

	private string FormatedInvalidCultureId
	{
		private get { } //Length: 308
	}

	public override Nullable<Int32> InvalidCultureId
	{
		 get { } //Length: 8
	}

	public override string InvalidCultureName
	{
		 get { } //Length: 8
	}

	public virtual string Message
	{
		 get { } //Length: 320
	}

	public CultureNotFoundException() { }

	public CultureNotFoundException(string paramName, string message) { }

	public CultureNotFoundException(string paramName, string invalidCultureName, string message) { }

	protected CultureNotFoundException(SerializationInfo info, StreamingContext context) { }

	private static string get_DefaultMessage() { }

	private string get_FormatedInvalidCultureId() { }

	public override Nullable<Int32> get_InvalidCultureId() { }

	public override string get_InvalidCultureName() { }

	public virtual string get_Message() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

