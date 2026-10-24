namespace Mono.Security.Interface;

public interface IMonoSslStream : IDisposable
{

	public AuthenticatedStream AuthenticatedStream
	{
		 get { } //Length: 0
	}

	public bool CanRead
	{
		 get { } //Length: 0
	}

	public bool CanWrite
	{
		 get { } //Length: 0
	}

	public X509Certificate InternalLocalCertificate
	{
		 get { } //Length: 0
	}

	public bool IsAuthenticated
	{
		 get { } //Length: 0
	}

	public long Length
	{
		 get { } //Length: 0
	}

	public long Position
	{
		 get { } //Length: 0
	}

	public int ReadTimeout
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int WriteTimeout
	{
		 get { } //Length: 0
	}

	public void AuthenticateAsClient(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	public Task AuthenticateAsClientAsync(string targetHost, X509CertificateCollection clientCertificates, SslProtocols enabledSslProtocols, bool checkCertificateRevocation) { }

	public IAsyncResult BeginRead(Byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	public IAsyncResult BeginWrite(Byte[] buffer, int offset, int count, AsyncCallback asyncCallback, object asyncState) { }

	public int EndRead(IAsyncResult asyncResult) { }

	public void EndWrite(IAsyncResult asyncResult) { }

	public AuthenticatedStream get_AuthenticatedStream() { }

	public bool get_CanRead() { }

	public bool get_CanWrite() { }

	public X509Certificate get_InternalLocalCertificate() { }

	public bool get_IsAuthenticated() { }

	public long get_Length() { }

	public long get_Position() { }

	public int get_ReadTimeout() { }

	public int get_WriteTimeout() { }

	public int Read(Byte[] buffer, int offset, int count) { }

	public void set_ReadTimeout(int value) { }

	public void Write(Byte[] buffer, int offset, int count) { }

	public Task WriteAsync(Byte[] buffer, int offset, int count, CancellationToken cancellationToken) { }

}

