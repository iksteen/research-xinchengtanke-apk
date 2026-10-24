namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class DSA : AsymmetricAlgorithm
{

	protected DSA() { }

	public static DSA Create() { }

	public abstract DSAParameters ExportParameters(bool includePrivateParameters) { }

	public virtual void FromXmlString(string xmlString) { }

	public abstract void ImportParameters(DSAParameters parameters) { }

	public virtual string ToXmlString(bool includePrivateParameters) { }

}

