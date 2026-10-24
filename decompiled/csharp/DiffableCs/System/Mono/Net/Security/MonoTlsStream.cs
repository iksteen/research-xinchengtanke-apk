namespace Mono.Net.Security;

internal class MonoTlsStream
{
	[CompilerGenerated]
	private struct <CreateStream>d__17 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Stream> <>t__builder; //Field offset: 0x8
		public MonoTlsStream <>4__this; //Field offset: 0x20
		private Socket <socket>5__1; //Field offset: 0x28
		public WebConnectionTunnel tunnel; //Field offset: 0x30
		public CancellationToken cancellationToken; //Field offset: 0x38
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x40

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private readonly MonoTlsProvider provider; //Field offset: 0x10
	private readonly NetworkStream networkStream; //Field offset: 0x18
	private readonly HttpWebRequest request; //Field offset: 0x20
	private readonly MonoTlsSettings settings; //Field offset: 0x28
	private IMonoSslStream sslStream; //Field offset: 0x30
	private WebExceptionStatus status; //Field offset: 0x38
	[CompilerGenerated]
	private bool <CertificateValidationFailed>k__BackingField; //Field offset: 0x3C

	internal bool CertificateValidationFailed
	{
		[CompilerGenerated]
		internal get { } //Length: 8
		[CompilerGenerated]
		internal set { } //Length: 12
	}

	internal WebExceptionStatus ExceptionStatus
	{
		internal get { } //Length: 8
	}

	internal HttpWebRequest Request
	{
		internal get { } //Length: 8
	}

	public MonoTlsStream(HttpWebRequest request, NetworkStream networkStream) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task<Stream> CreateStream(WebConnectionTunnel tunnel, CancellationToken cancellationToken) { }

	[CompilerGenerated]
	internal bool get_CertificateValidationFailed() { }

	internal WebExceptionStatus get_ExceptionStatus() { }

	internal HttpWebRequest get_Request() { }

	[CompilerGenerated]
	internal void set_CertificateValidationFailed(bool value) { }

}

