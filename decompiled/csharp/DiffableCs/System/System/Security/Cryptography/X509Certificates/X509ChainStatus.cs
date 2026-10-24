namespace System.Security.Cryptography.X509Certificates;

public struct X509ChainStatus
{
	private X509ChainStatusFlags status; //Field offset: 0x0
	private string info; //Field offset: 0x8

	internal X509ChainStatus(X509ChainStatusFlags flag) { }

	internal static string GetInformation(X509ChainStatusFlags flags) { }

}

