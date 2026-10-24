namespace System.Security.Cryptography.X509Certificates;

public class X509ChainElement
{
	private X509Certificate2 certificate; //Field offset: 0x10
	private string info; //Field offset: 0x18

	public X509Certificate2 Certificate
	{
		 get { } //Length: 8
	}

	internal X509ChainElement(X509Certificate2 certificate) { }

	public X509Certificate2 get_Certificate() { }

}

