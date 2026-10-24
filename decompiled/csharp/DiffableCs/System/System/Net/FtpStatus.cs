namespace System.Net;

internal class FtpStatus
{
	private readonly FtpStatusCode statusCode; //Field offset: 0x10
	private readonly string statusDescription; //Field offset: 0x18

	public FtpStatusCode StatusCode
	{
		 get { } //Length: 8
	}

	public string StatusDescription
	{
		 get { } //Length: 8
	}

	public FtpStatus(FtpStatusCode statusCode, string statusDescription) { }

	public FtpStatusCode get_StatusCode() { }

	public string get_StatusDescription() { }

}

