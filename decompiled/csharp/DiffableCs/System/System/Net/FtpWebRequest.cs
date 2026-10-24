namespace System.Net;

public sealed class FtpWebRequest : WebRequest
{
	private enum RequestState
	{
		Before = 0,
		Scheduled = 1,
		Connecting = 2,
		Authenticating = 3,
		OpeningData = 4,
		TransferInProgress = 5,
		Finished = 6,
		Aborted = 7,
		Error = 8,
	}

	private static readonly String[] supportedCommands; //Field offset: 0x0
	private Uri requestUri; //Field offset: 0x38
	private string file_name; //Field offset: 0x40
	private ServicePoint servicePoint; //Field offset: 0x48
	private Stream origDataStream; //Field offset: 0x50
	private Stream dataStream; //Field offset: 0x58
	private Stream controlStream; //Field offset: 0x60
	private StreamReader controlReader; //Field offset: 0x68
	private NetworkCredential credentials; //Field offset: 0x70
	private IPHostEntry hostEntry; //Field offset: 0x78
	private IPEndPoint localEndPoint; //Field offset: 0x80
	private IPEndPoint remoteEndPoint; //Field offset: 0x88
	private IWebProxy proxy; //Field offset: 0x90
	private int timeout; //Field offset: 0x98
	private int rwTimeout; //Field offset: 0x9C
	private long offset; //Field offset: 0xA0
	private bool binary; //Field offset: 0xA8
	private bool enableSsl; //Field offset: 0xA9
	private bool usePassive; //Field offset: 0xAA
	private bool keepAlive; //Field offset: 0xAB
	private string method; //Field offset: 0xB0
	private string renameTo; //Field offset: 0xB8
	private object locker; //Field offset: 0xC0
	private RequestState requestState; //Field offset: 0xC8
	private FtpAsyncResult asyncResult; //Field offset: 0xD0
	private FtpWebResponse ftpResponse; //Field offset: 0xD8
	private Stream requestStream; //Field offset: 0xE0
	private string initial_path; //Field offset: 0xE8
	private Encoding dataEncoding; //Field offset: 0xF0

	public virtual long ContentLength
	{
		 get { } //Length: 8
	}

	public virtual ICredentials Credentials
	{
		 get { } //Length: 8
		 set { } //Length: 232
	}

	private string DataType
	{
		private get { } //Length: 104
	}

	public bool EnableSsl
	{
		 get { } //Length: 8
	}

	[MonoTODO]
	public virtual WebHeaderCollection Headers
	{
		 get { } //Length: 100
	}

	public virtual string Method
	{
		 get { } //Length: 8
		 set { } //Length: 328
	}

	public virtual IWebProxy Proxy
	{
		 get { } //Length: 8
		 set { } //Length: 48
	}

	public int ReadWriteTimeout
	{
		 get { } //Length: 8
	}

	public virtual Uri RequestUri
	{
		 get { } //Length: 8
	}

	public ServicePoint ServicePoint
	{
		 get { } //Length: 4
	}

	private RequestState State
	{
		private get { } //Length: 200
		private set { } //Length: 212
	}

	public virtual int Timeout
	{
		 get { } //Length: 8
	}

	[MonoTODO]
	public virtual bool UseDefaultCredentials
	{
		 get { } //Length: 100
	}

	private static FtpWebRequest() { }

	internal FtpWebRequest(Uri uri) { }

	public virtual void Abort() { }

	private void Authenticate() { }

	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state) { }

	internal bool ChangeToSSLSocket(ref Stream stream) { }

	private void CheckFinalState() { }

	internal void CheckIfAborted() { }

	private void CheckRequestStarted() { }

	private void CloseConnection() { }

	private void CloseControlConnection() { }

	internal void CloseDataConnection() { }

	private Exception CreateExceptionFromResponse(FtpStatus status) { }

	private void CWDAndSetFileName(Uri uri) { }

	private void DownloadData() { }

	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult) { }

	private string FormatAddress(IPAddress address, int Port) { }

	private string FormatAddressV6(IPAddress address, int port) { }

	public virtual long get_ContentLength() { }

	public virtual ICredentials get_Credentials() { }

	private string get_DataType() { }

	public bool get_EnableSsl() { }

	public virtual WebHeaderCollection get_Headers() { }

	public virtual string get_Method() { }

	public virtual IWebProxy get_Proxy() { }

	public int get_ReadWriteTimeout() { }

	public virtual Uri get_RequestUri() { }

	public ServicePoint get_ServicePoint() { }

	private RequestState get_State() { }

	public virtual int get_Timeout() { }

	public virtual bool get_UseDefaultCredentials() { }

	private static string GetInitialPath(FtpStatus status) { }

	private static Exception GetMustImplement() { }

	private int GetPortV4(string responseString) { }

	private int GetPortV6(string responseString) { }

	private string GetRemoteFolderPath(Uri uri) { }

	public virtual WebResponse GetResponse() { }

	internal FtpStatus GetResponseStatus() { }

	private ServicePoint GetServicePoint() { }

	private bool InFinalState() { }

	private Socket InitDataConnection() { }

	private void InitiateSecureConnection(ref Stream stream) { }

	private bool InProgress() { }

	private void OpenControlConnection() { }

	private void OpenDataConnection() { }

	internal void OperationCompleted() { }

	private void ProcessMethod() { }

	private void ProcessRequest() { }

	private void ProcessSimpleMethod() { }

	private void ResolveHost() { }

	private FtpStatus SendCommand(string command, String[] parameters) { }

	private FtpStatus SendCommand(bool waitResponse, string command, String[] parameters) { }

	internal static FtpStatus ServiceNotAvailable() { }

	public virtual void set_Credentials(ICredentials value) { }

	public virtual void set_Method(string value) { }

	public virtual void set_Proxy(IWebProxy value) { }

	private void set_State(RequestState value) { }

	private void SetCompleteWithError(Exception exc) { }

	internal void SetTransferCompleted() { }

	private void SetType() { }

	private Socket SetupPassiveConnection(string statusDescription, bool ipv6) { }

	private void UploadData() { }

}

