namespace System.Net;

public class FtpWebResponse : WebResponse
{
	private Stream stream; //Field offset: 0x18
	private Uri uri; //Field offset: 0x20
	private FtpStatusCode statusCode; //Field offset: 0x28
	private DateTime lastModified; //Field offset: 0x30
	private string bannerMessage; //Field offset: 0x38
	private string welcomeMessage; //Field offset: 0x40
	private string exitMessage; //Field offset: 0x48
	private string statusDescription; //Field offset: 0x50
	private string method; //Field offset: 0x58
	private bool disposed; //Field offset: 0x60
	private FtpWebRequest request; //Field offset: 0x68
	internal long contentLength; //Field offset: 0x70

	internal string BannerMessage
	{
		internal set { } //Length: 8
	}

	public virtual WebHeaderCollection Headers
	{
		 get { } //Length: 88
	}

	internal DateTime LastModified
	{
		internal set { } //Length: 8
	}

	public virtual Uri ResponseUri
	{
		 get { } //Length: 8
	}

	internal FtpStatusCode StatusCode
	{
		internal set { } //Length: 8
	}

	internal Stream Stream
	{
		internal set { } //Length: 8
	}

	internal string WelcomeMessage
	{
		internal set { } //Length: 8
	}

	internal FtpWebResponse(FtpWebRequest request, Uri uri, string method, bool keepAlive) { }

	internal FtpWebResponse(FtpWebRequest request, Uri uri, string method, FtpStatusCode statusCode, string statusDescription) { }

	internal FtpWebResponse(FtpWebRequest request, Uri uri, string method, FtpStatus status) { }

	private void CheckDisposed() { }

	public virtual void Close() { }

	public virtual WebHeaderCollection get_Headers() { }

	public virtual Uri get_ResponseUri() { }

	public virtual Stream GetResponseStream() { }

	internal bool IsFinal() { }

	internal void set_BannerMessage(string value) { }

	internal void set_LastModified(DateTime value) { }

	internal void set_StatusCode(FtpStatusCode value) { }

	internal void set_Stream(Stream value) { }

	internal void set_WelcomeMessage(string value) { }

	internal void UpdateStatus(FtpStatus status) { }

}

