namespace Mono.Net.Security;

internal abstract class MobileAuthenticatedStream : AuthenticatedStream, IMonoSslStream, IDisposable
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass66_0
	{
		public MobileAuthenticatedStream <>4__this; //Field offset: 0x10
		public int len; //Field offset: 0x18

		public <>c__DisplayClass66_0() { }

		internal int <InnerRead>b__0() { }

	}

	[CompilerGenerated]
	private struct <InnerRead>d__66 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Int32> <>t__builder; //Field offset: 0x8
		public MobileAuthenticatedStream <>4__this; //Field offset: 0x20
		public CancellationToken cancellationToken; //Field offset: 0x28
		public int requestedSize; //Field offset: 0x30
		public bool sync; //Field offset: 0x34
		private ConfiguredTaskAwaiter<Int32> <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <InnerWrite>d__67 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public CancellationToken cancellationToken; //Field offset: 0x20
		public MobileAuthenticatedStream <>4__this; //Field offset: 0x28
		public bool sync; //Field offset: 0x30
		private ConfiguredTaskAwaiter <>u__1; //Field offset: 0x38

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <ProcessAuthentication>d__47 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public bool serverMode; //Field offset: 0x20
		public X509Certificate serverCertificate; //Field offset: 0x28
		public string targetHost; //Field offset: 0x30
		public MobileAuthenticatedStream <>4__this; //Field offset: 0x38
		public bool runSynchronously; //Field offset: 0x40
		public SslProtocols enabledProtocols; //Field offset: 0x44
		public X509CertificateCollection clientCertificates; //Field offset: 0x48
		public bool clientCertRequired; //Field offset: 0x50
		private ConfiguredTaskAwaiter<AsyncProtocolResult> <>u__1; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <StartOperation>d__58 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncTaskMethodBuilder<Int32> <>t__builder; //Field offset: 0x8
		public MobileAuthenticatedStream <>4__this; //Field offset: 0x20
		public OperationType type; //Field offset: 0x28
		public AsyncProtocolRequest asyncRequest; //Field offset: 0x30
		public CancellationToken cancellationToken; //Field offset: 0x38
		private ConfiguredTaskAwaiter<AsyncProtocolResult> <>u__1; //Field offset: 0x40

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	private enum OperationType
	{
		Read = 0,
		Write = 1,
		Shutdown = 2,
	}

	private static int uniqueNameInteger; //Field offset: 0x0
	private static int nextId; //Field offset: 0x4
	private MobileTlsContext xobileTlsContext; //Field offset: 0x38
	private ExceptionDispatchInfo lastException; //Field offset: 0x40
	private AsyncProtocolRequest asyncHandshakeRequest; //Field offset: 0x48
	private AsyncProtocolRequest asyncReadRequest; //Field offset: 0x50
	private AsyncProtocolRequest asyncWriteRequest; //Field offset: 0x58
	private BufferOffsetSize2 readBuffer; //Field offset: 0x60
	private BufferOffsetSize2 writeBuffer; //Field offset: 0x68
	private object ioLock; //Field offset: 0x70
	private int closeRequested; //Field offset: 0x78
	private bool shutdown; //Field offset: 0x7C
	[CompilerGenerated]
	private readonly SslStream <SslStream>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private readonly MonoTlsSettings <Settings>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private readonly MonoTlsProvider <Provider>k__BackingField; //Field offset: 0x90
	internal readonly int ID; //Field offset: 0x98

	public override AuthenticatedStream AuthenticatedStream
	{
		 get { } //Length: 4
	}

	public virtual bool CanRead
	{
		 get { } //Length: 84
	}

	public virtual bool CanSeek
	{
		 get { } //Length: 8
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 104
	}

	public override X509Certificate InternalLocalCertificate
	{
		 get { } //Length: 268
	}

	public virtual bool IsAuthenticated
	{
		 get { } //Length: 240
	}

	public virtual long Length
	{
		 get { } //Length: 32
	}

	public virtual long Position
	{
		 get { } //Length: 32
		 set { } //Length: 64
	}

	public override MonoTlsProvider Provider
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public virtual int ReadTimeout
	{
		 get { } //Length: 36
		 set { } //Length: 36
	}

	public MonoTlsSettings Settings
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public virtual int WriteTimeout
	{
		 get { } //Length: 36
	}

	private static MobileAuthenticatedStream() { }

	public MobileAuthenticatedStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MonoTlsProvider provider) { }

	[CompilerGenerated]
	private void <InnerWrite>b__67_0() { }

	public override void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	public override Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	public virtual IAsyncResult BeginRead(Byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	public virtual IAsyncResult BeginWrite(Byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	internal void CheckThrow(bool authSuccessCheck, bool shutdownCheck = false) { }

	protected abstract MobileTlsContext CreateContext(bool serverMode, string targetHost, SslProtocols enabledProtocols, X509Certificate serverCertificate, X509CertificateCollection clientCertificates, bool askForClientCert) { }

	protected virtual void Dispose(bool disposing) { }

	public virtual int EndRead(IAsyncResult asyncResult) { }

	public virtual void EndWrite(IAsyncResult asyncResult) { }

	public virtual void Flush() { }

	public override AuthenticatedStream get_AuthenticatedStream() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanSeek() { }

	public virtual bool get_CanWrite() { }

	public override X509Certificate get_InternalLocalCertificate() { }

	public virtual bool get_IsAuthenticated() { }

	public virtual long get_Length() { }

	public virtual long get_Position() { }

	[CompilerGenerated]
	public override MonoTlsProvider get_Provider() { }

	public virtual int get_ReadTimeout() { }

	[CompilerGenerated]
	public MonoTlsSettings get_Settings() { }

	public virtual int get_WriteTimeout() { }

	internal static Exception GetIOException(Exception e, string message) { }

	internal static Exception GetSSPIException(Exception e) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task<Int32> InnerRead(bool sync, int requestedSize, CancellationToken cancellationToken) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Task InnerWrite(bool sync, CancellationToken cancellationToken) { }

	private ValueTuple<Int32, Boolean> InternalRead(AsyncProtocolRequest asyncRequest, BufferOffsetSize internalBuffer, Byte[] buffer, int offset, int size) { }

	internal int InternalRead(Byte[] buffer, int offset, int size, out bool outWantMore) { }

	internal bool InternalWrite(Byte[] buffer, int offset, int size) { }

	private bool InternalWrite(AsyncProtocolRequest asyncRequest, BufferOffsetSize2 internalBuffer, Byte[] buffer, int offset, int size) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task ProcessAuthentication(bool runSynchronously, bool serverMode, string targetHost, SslProtocols enabledProtocols, X509Certificate serverCertificate, X509CertificateCollection clientCertificates, bool clientCertRequired) { }

	internal AsyncOperationStatus ProcessHandshake(AsyncOperationStatus status) { }

	internal ValueTuple<Int32, Boolean> ProcessRead(BufferOffsetSize userBuffer) { }

	internal ValueTuple<Int32, Boolean> ProcessWrite(BufferOffsetSize userBuffer) { }

	public virtual int Read(Byte[] buffer, int offset, int count) { }

	public virtual Task<Int32> ReadAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

	public virtual long Seek(long offset, SeekOrigin origin) { }

	public virtual void set_Position(long value) { }

	public virtual void set_ReadTimeout(int value) { }

	internal ExceptionDispatchInfo SetException(Exception e) { }

	[AsyncStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Task<Int32> StartOperation(OperationType type, AsyncProtocolRequest asyncRequest, CancellationToken cancellationToken) { }

	public virtual void Write(Byte[] buffer, int offset, int count) { }

	public virtual Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

}

