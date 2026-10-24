namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class RijndaelManaged : Rijndael
{

	public RijndaelManaged() { }

	public virtual ICryptoTransform CreateDecryptor(Byte[] rgbKey, Byte[] rgbIV) { }

	public virtual ICryptoTransform CreateEncryptor(Byte[] rgbKey, Byte[] rgbIV) { }

	public virtual void GenerateIV() { }

	public virtual void GenerateKey() { }

	private ICryptoTransform NewEncryptor(Byte[] rgbKey, CipherMode mode, Byte[] rgbIV, int feedbackSize, RijndaelManagedTransformMode encryptMode) { }

}

