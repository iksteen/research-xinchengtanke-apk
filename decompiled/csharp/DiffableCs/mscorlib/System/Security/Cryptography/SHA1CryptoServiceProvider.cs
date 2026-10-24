namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SHA1CryptoServiceProvider : SHA1
{
	private SHA1Internal sha; //Field offset: 0x28

	public SHA1CryptoServiceProvider() { }

	protected virtual void Dispose(bool disposing) { }

	protected virtual void Finalize() { }

	protected virtual void HashCore(Byte[] rgb, int ibStart, int cbSize) { }

	protected virtual Byte[] HashFinal() { }

	public virtual void Initialize() { }

}

