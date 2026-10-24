namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class HMACSHA512 : HMAC
{
	private bool m_useLegacyBlockSize; //Field offset: 0x61

	private int BlockSize
	{
		private get { } //Length: 24
	}

	public HMACSHA512() { }

	public HMACSHA512(Byte[] key) { }

	private int get_BlockSize() { }

}

