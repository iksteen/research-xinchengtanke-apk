namespace Mono.Security.Cryptography;

internal sealed class PKCS1
{
	private static Byte[] emptySHA1; //Field offset: 0x0
	private static Byte[] emptySHA256; //Field offset: 0x8
	private static Byte[] emptySHA384; //Field offset: 0x10
	private static Byte[] emptySHA512; //Field offset: 0x18

	private static PKCS1() { }

	internal static HashAlgorithm CreateFromName(string name) { }

}

