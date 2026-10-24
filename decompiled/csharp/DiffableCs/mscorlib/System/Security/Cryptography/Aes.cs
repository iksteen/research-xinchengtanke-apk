namespace System.Security.Cryptography;

[TypeForwardedFrom(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Aes : SymmetricAlgorithm
{
	private static KeySizes[] s_legalBlockSizes; //Field offset: 0x0
	private static KeySizes[] s_legalKeySizes; //Field offset: 0x8

	private static Aes() { }

	protected Aes() { }

}

