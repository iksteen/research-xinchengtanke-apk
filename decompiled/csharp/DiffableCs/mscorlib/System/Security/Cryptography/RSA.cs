namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class RSA : AsymmetricAlgorithm
{

	protected RSA() { }

	public static RSA Create() { }

	public abstract RSAParameters ExportParameters(bool includePrivateParameters) { }

	public virtual void FromXmlString(string xmlString) { }

	public abstract void ImportParameters(RSAParameters parameters) { }

	public virtual string ToXmlString(bool includePrivateParameters) { }

}

