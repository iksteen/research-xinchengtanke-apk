namespace System.Net;

public class HttpWebRequest : WebRequest, ISerializable
{
	[CompilerGenerated]
	private struct <<GetRewriteHandler>b__263_0>d : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<BufferOffsetSize> <>t__builder; //Field offset: 0x8
		public HttpWebRequest <>4__this; //Field offset: 0x20
		private MemoryStream <ms>5__1; //Field offset: 0x28
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x30

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private sealed class <>c__234
	{
		public static readonly <>c__234<T> <>9; //Field offset: 0x0
		public static Func<Task`1<T>, Nullable`1<Int32>> <>9__234_0; //Field offset: 0x0

		private static <>c__234`1() { }

		public <>c__234`1() { }

		internal Nullable<Int32> <RunWithTimeout>b__234_0(Task<T> t) { }

	}

	[CompilerGenerated]
	private struct <GetResponseFromData>d__237 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		[TupleElementNames(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public AsyncTaskMethodBuilder<ValueTuple`5<HttpWebResponse, Boolean, Boolean, BufferOffsetSize, WebOperation>> <>t__builder; //Field offset: 0x8
		public HttpWebRequest <>4__this; //Field offset: 0x20
		public WebResponseStream stream; //Field offset: 0x28
		public CancellationToken cancellationToken; //Field offset: 0x30
		private WebException <throwMe>5__1; //Field offset: 0x38
		private Task<BufferOffsetSize> <rewriteHandler>5__2; //Field offset: 0x40
		private bool <redirect>5__3; //Field offset: 0x48
		private HttpWebResponse <response>5__4; //Field offset: 0x50
		private BufferOffsetSize <writeBuffer>5__5; //Field offset: 0x58
		private bool <mustReadAll>5__6; //Field offset: 0x60
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x68
		private ConfiguredTaskAwaiter<BufferOffsetSize> <>u__2; //Field offset: 0x78

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <MyGetResponseAsync>d__236 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<HttpWebResponse> <>t__builder; //Field offset: 0x8
		public HttpWebRequest <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		private WebOperation <operation>5__1; //Field offset: 0x30
		private WebException <throwMe>5__2; //Field offset: 0x38
		private WebCompletionSource <completion>5__3; //Field offset: 0x40
		private bool <redirect>5__4; //Field offset: 0x48
		private HttpWebResponse <response>5__5; //Field offset: 0x50
		private WebOperation <ntlm>5__6; //Field offset: 0x58
		private bool <mustReadAll>5__7; //Field offset: 0x60
		private WebResponseStream <stream>5__8; //Field offset: 0x68
		private BufferOffsetSize <writeBuffer>5__9; //Field offset: 0x70
		private TaskAwaiter<WebRequestStream> <>u__1; //Field offset: 0x78
		private ConfiguredTaskAwaiter <>u__2; //Field offset: 0x80
		private TaskAwaiter<WebResponseStream> <>u__3; //Field offset: 0x90
		[TupleElementNames(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private ConfiguredTaskAwaiter<ValueTuple<HttpWebResponse, Boolean, Boolean, BufferOffsetSize, WebOperation>> <>u__4; //Field offset: 0x98

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <RunWithTimeout>d__234 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<T> <>t__builder; //Field offset: 0x0
		public int timeout; //Field offset: 0x0
		public Func<CancellationToken, Task`1<T>> func; //Field offset: 0x0
		private Task <timeoutTask>5__1; //Field offset: 0x0
		private CancellationTokenSource <cts>5__2; //Field offset: 0x0
		public Action abort; //Field offset: 0x0
		private Task<T> <workerTask>5__3; //Field offset: 0x0
		private ConfiguredTaskAwaiter<Task> <>u__1; //Field offset: 0x0

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private struct AuthorizationState
	{
		private readonly HttpWebRequest request; //Field offset: 0x0
		private readonly bool isProxy; //Field offset: 0x8
		private bool isCompleted; //Field offset: 0x9
		private NtlmAuthState ntlm_auth_state; //Field offset: 0xC

		public bool IsCompleted
		{
			 get { } //Length: 8
		}

		public bool IsNtlmAuthenticated
		{
			 get { } //Length: 32
		}

		public NtlmAuthState NtlmAuthState
		{
			 get { } //Length: 8
		}

		public AuthorizationState(HttpWebRequest request, bool isProxy) { }

		public bool CheckAuthorization(WebResponse response, HttpStatusCode code) { }

		public bool get_IsCompleted() { }

		public bool get_IsNtlmAuthenticated() { }

		public NtlmAuthState get_NtlmAuthState() { }

		public void Reset() { }

		public virtual string ToString() { }

	}

	private enum NtlmAuthState
	{
		None = 0,
		Challenge = 1,
		Response = 2,
	}

	private static int defaultMaxResponseHeadersLength; //Field offset: 0x0
	private Uri requestUri; //Field offset: 0x38
	private Uri actualUri; //Field offset: 0x40
	private bool hostChanged; //Field offset: 0x48
	private bool allowAutoRedirect; //Field offset: 0x49
	private bool allowBuffering; //Field offset: 0x4A
	private X509CertificateCollection certificates; //Field offset: 0x50
	private string connectionGroup; //Field offset: 0x58
	private bool haveContentLength; //Field offset: 0x60
	private long contentLength; //Field offset: 0x68
	private HttpContinueDelegate continueDelegate; //Field offset: 0x70
	private CookieContainer cookieContainer; //Field offset: 0x78
	private ICredentials credentials; //Field offset: 0x80
	private bool haveResponse; //Field offset: 0x88
	private bool requestSent; //Field offset: 0x89
	private WebHeaderCollection webHeaders; //Field offset: 0x90
	private bool keepAlive; //Field offset: 0x98
	private int maxAutoRedirect; //Field offset: 0x9C
	private string mediaType; //Field offset: 0xA0
	private string method; //Field offset: 0xA8
	private string initialMethod; //Field offset: 0xB0
	private bool pipelined; //Field offset: 0xB8
	private bool preAuthenticate; //Field offset: 0xB9
	private bool usedPreAuth; //Field offset: 0xBA
	private Version version; //Field offset: 0xC0
	private bool force_version; //Field offset: 0xC8
	private Version actualVersion; //Field offset: 0xD0
	private IWebProxy proxy; //Field offset: 0xD8
	private bool sendChunked; //Field offset: 0xE0
	private ServicePoint servicePoint; //Field offset: 0xE8
	private int timeout; //Field offset: 0xF0
	private WebRequestStream writeStream; //Field offset: 0xF8
	private HttpWebResponse webResponse; //Field offset: 0x100
	private WebCompletionSource responseTask; //Field offset: 0x108
	private WebOperation currentOperation; //Field offset: 0x110
	private int aborted; //Field offset: 0x118
	private bool gotRequestStream; //Field offset: 0x11C
	private int redirects; //Field offset: 0x120
	private bool expectContinue; //Field offset: 0x124
	private bool getResponseCalled; //Field offset: 0x125
	private object locker; //Field offset: 0x128
	private bool finished_reading; //Field offset: 0x130
	private DecompressionMethods auto_decomp; //Field offset: 0x134
	private int readWriteTimeout; //Field offset: 0x138
	private MonoTlsProvider tlsProvider; //Field offset: 0x140
	private MonoTlsSettings tlsSettings; //Field offset: 0x148
	private ServerCertValidationCallback certValidationCallback; //Field offset: 0x150
	private AuthorizationState auth_state; //Field offset: 0x158
	private AuthorizationState proxy_auth_state; //Field offset: 0x168
	private string host; //Field offset: 0x178
	internal Func<Stream, Task> ResendContentFactory; //Field offset: 0x180
	[CompilerGenerated]
	private bool <ThrowOnError>k__BackingField; //Field offset: 0x188
	private bool unsafe_auth_blah; //Field offset: 0x189

	internal bool Aborted
	{
		internal get { } //Length: 44
	}

	public internal Uri Address
	{
		 get { } //Length: 8
		internal set { } //Length: 8
	}

	public override bool AllowWriteStreamBuffering
	{
		 get { } //Length: 8
	}

	internal Uri AuthUri
	{
		internal get { } //Length: 8
	}

	public DecompressionMethods AutomaticDecompression
	{
		 get { } //Length: 8
	}

	public X509CertificateCollection ClientCertificates
	{
		 get { } //Length: 116
	}

	public virtual long ContentLength
	{
		 get { } //Length: 8
	}

	public virtual ICredentials Credentials
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	internal bool ExpectContinue
	{
		internal get { } //Length: 8
		internal set { } //Length: 12
	}

	internal bool FinishedReading
	{
		internal set { } //Length: 12
	}

	public virtual WebHeaderCollection Headers
	{
		 get { } //Length: 8
	}

	public string Host
	{
		 get { } //Length: 44
	}

	internal bool InternalAllowBuffering
	{
		internal get { } //Length: 20
	}

	internal long InternalContentLength
	{
		internal set { } //Length: 8
	}

	public bool KeepAlive
	{
		 get { } //Length: 8
	}

	public virtual string Method
	{
		 get { } //Length: 8
		 set { } //Length: 560
	}

	private bool MethodWithBuffer
	{
		private get { } //Length: 256
	}

	public Version ProtocolVersion
	{
		 get { } //Length: 8
	}

	public virtual IWebProxy Proxy
	{
		 get { } //Length: 8
		 set { } //Length: 72
	}

	internal bool ProxyQuery
	{
		internal get { } //Length: 52
	}

	public int ReadWriteTimeout
	{
		 get { } //Length: 8
	}

	public virtual Uri RequestUri
	{
		 get { } //Length: 8
	}

	public bool SendChunked
	{
		 get { } //Length: 8
	}

	internal ServerCertValidationCallback ServerCertValidationCallback
	{
		internal get { } //Length: 8
	}

	public ServicePoint ServicePoint
	{
		 get { } //Length: 4
	}

	internal ServicePoint ServicePointNoLock
	{
		internal get { } //Length: 8
	}

	internal bool ThrowOnError
	{
		[CompilerGenerated]
		internal get { } //Length: 8
		[CompilerGenerated]
		internal set { } //Length: 12
	}

	public virtual int Timeout
	{
		 get { } //Length: 8
	}

	internal MonoTlsProvider TlsProvider
	{
		internal get { } //Length: 8
	}

	internal MonoTlsSettings TlsSettings
	{
		internal get { } //Length: 8
	}

	public string TransferEncoding
	{
		 get { } //Length: 88
	}

	public bool UnsafeAuthenticatedConnectionSharing
	{
		 get { } //Length: 8
	}

	public virtual bool UseDefaultCredentials
	{
		 get { } //Length: 132
	}

	private static HttpWebRequest() { }

	[Obsolete]
	protected HttpWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Obsolete]
	public HttpWebRequest() { }

	public HttpWebRequest(Uri uri) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[CompilerGenerated]
	private Task<BufferOffsetSize> <GetRewriteHandler>b__263_0() { }

	public virtual void Abort() { }

	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state) { }

	private bool CheckAuthorization(WebResponse response, HttpStatusCode code) { }

	private ValueTuple<Boolean, Boolean, Task`1<BufferOffsetSize>, WebException> CheckFinalStatus(HttpWebResponse response) { }

	private void CheckRequestStarted() { }

	internal static WebException CreateRequestAbortedException() { }

	internal void DoContinueDelegate(int statusCode, WebHeaderCollection headers) { }

	private void DoPreAuthenticate() { }

	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult) { }

	internal static Exception FlattenException(Exception e) { }

	internal bool get_Aborted() { }

	public Uri get_Address() { }

	public override bool get_AllowWriteStreamBuffering() { }

	internal Uri get_AuthUri() { }

	public DecompressionMethods get_AutomaticDecompression() { }

	public X509CertificateCollection get_ClientCertificates() { }

	public virtual long get_ContentLength() { }

	public virtual ICredentials get_Credentials() { }

	internal bool get_ExpectContinue() { }

	public virtual WebHeaderCollection get_Headers() { }

	public string get_Host() { }

	internal bool get_InternalAllowBuffering() { }

	public bool get_KeepAlive() { }

	public virtual string get_Method() { }

	private bool get_MethodWithBuffer() { }

	public Version get_ProtocolVersion() { }

	public virtual IWebProxy get_Proxy() { }

	internal bool get_ProxyQuery() { }

	public int get_ReadWriteTimeout() { }

	public virtual Uri get_RequestUri() { }

	public bool get_SendChunked() { }

	internal ServerCertValidationCallback get_ServerCertValidationCallback() { }

	public ServicePoint get_ServicePoint() { }

	internal ServicePoint get_ServicePointNoLock() { }

	[CompilerGenerated]
	internal bool get_ThrowOnError() { }

	public virtual int get_Timeout() { }

	internal MonoTlsProvider get_TlsProvider() { }

	internal MonoTlsSettings get_TlsSettings() { }

	public string get_TransferEncoding() { }

	public bool get_UnsafeAuthenticatedConnectionSharing() { }

	public virtual bool get_UseDefaultCredentials() { }

	private string GetHeaders() { }

	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	internal Byte[] GetRequestHeaders() { }

	public virtual WebResponse GetResponse() { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<ValueTuple`5<HttpWebResponse, Boolean, Boolean, BufferOffsetSize, WebOperation>> GetResponseFromData(WebResponseStream stream, CancellationToken cancellationToken) { }

	private ValueTuple<Task`1<BufferOffsetSize>, WebException> GetRewriteHandler(HttpWebResponse response, bool redirect) { }

	internal ServicePoint GetServicePoint() { }

	private WebException GetWebException(Exception e) { }

	private ValueTuple<WebOperation, Boolean> HandleNtlmAuth(WebResponseStream stream, HttpWebResponse response, BufferOffsetSize writeBuffer, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<HttpWebResponse> MyGetResponseAsync(CancellationToken cancellationToken) { }

	private bool Redirect(HttpStatusCode code, WebResponse response) { }

	private void ResetAuthorization() { }

	private void RewriteRedirectToGet() { }

	private Task<T> RunWithTimeout(Func<CancellationToken, Task`1<T>> func) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal static Task<T> RunWithTimeout(Func<CancellationToken, Task`1<T>> func, int timeout, Action abort) { }

	private WebOperation SendRequest(bool redirecting, BufferOffsetSize writeBuffer, CancellationToken cancellationToken) { }

	internal void set_Address(Uri value) { }

	public virtual void set_Credentials(ICredentials value) { }

	internal void set_ExpectContinue(bool value) { }

	internal void set_FinishedReading(bool value) { }

	internal void set_InternalContentLength(long value) { }

	public virtual void set_Method(string value) { }

	public virtual void set_Proxy(IWebProxy value) { }

	[CompilerGenerated]
	internal void set_ThrowOnError(bool value) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

}

