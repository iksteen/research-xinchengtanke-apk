namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CryptoConfig
{

	[MonoLimitation(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool AllowOnlyFipsAlgorithms
	{
		 get { } //Length: 8
	}

	public static object CreateFromName(string name) { }

	public static object CreateFromName(string name, Object[] args) { }

	private static Byte[] EncodeLongNumber(long x) { }

	public static Byte[] EncodeOID(string str) { }

	public static bool get_AllowOnlyFipsAlgorithms() { }

	internal static string MapNameToOID(string name, object arg) { }

	public static string MapNameToOID(string name) { }

}

