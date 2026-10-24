namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class UnityLogWriter : TextWriter
{

	public virtual Encoding Encoding
	{
		 get { } //Length: 8
	}

	public UnityLogWriter() { }

	public virtual Encoding get_Encoding() { }

	public static void Init() { }

	public virtual void Write(char value) { }

	public virtual void Write(string s) { }

	public virtual void Write(Char[] buffer, int index, int count) { }

	[ThreadAndSerializationSafe]
	public static void WriteStringToUnityLog(string s) { }

	[FreeFunction]
	private static void WriteStringToUnityLogImpl(string s) { }

}

