namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TextAsset : object
{
	private static class EncodingUtility
	{
		internal static readonly KeyValuePair<Byte[], Encoding>[] encodingLookup; //Field offset: 0x0
		internal static readonly Encoding targetEncoding; //Field offset: 0x8

		private static EncodingUtility() { }

	}


	public Byte[] bytes
	{
		 get { } //Length: 64
	}

	public string text
	{
		 get { } //Length: 68
	}

	internal static string DecodeString(Byte[] bytes) { }

	public Byte[] get_bytes() { }

	public string get_text() { }

	public virtual string ToString() { }

}

