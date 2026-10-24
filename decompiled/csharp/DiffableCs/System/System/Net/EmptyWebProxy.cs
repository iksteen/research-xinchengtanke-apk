namespace System.Net;

internal sealed class EmptyWebProxy : IWebProxy
{
	private ICredentials m_credentials; //Field offset: 0x10

	public override ICredentials Credentials
	{
		 get { } //Length: 8
	}

	public EmptyWebProxy() { }

	public override ICredentials get_Credentials() { }

	public override Uri GetProxy(Uri uri) { }

	public override bool IsBypassed(Uri uri) { }

}

