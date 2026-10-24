namespace UnityEngine.Networking;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UnityWebRequest
{
	internal enum Result
	{
		InProgress = 0,
		Success = 1,
		ConnectionError = 2,
		ProtocolError = 3,
		DataProcessingError = 4,
	}

	internal IntPtr m_Ptr; //Field offset: 0x10
	internal DownloadHandler m_DownloadHandler; //Field offset: 0x18
	internal UploadHandler m_UploadHandler; //Field offset: 0x20
	internal CertificateHandler m_CertificateHandler; //Field offset: 0x28
	internal Uri m_Uri; //Field offset: 0x30
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <disposeCertificateHandlerOnDispose>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <disposeDownloadHandlerOnDispose>k__BackingField; //Field offset: 0x39
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <disposeUploadHandlerOnDispose>k__BackingField; //Field offset: 0x3A

	public CertificateHandler certificateHandler
	{
		 get { } //Length: 8
	}

	public bool disposeCertificateHandlerOnDispose
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public bool disposeDownloadHandlerOnDispose
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public bool disposeUploadHandlerOnDispose
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public DownloadHandler downloadHandler
	{
		 get { } //Length: 8
	}

	public bool isDone
	{
		 get { } //Length: 76
	}

	public Result result
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public UploadHandler uploadHandler
	{
		 get { } //Length: 8
	}

	[NativeMethod]
	public void Abort() { }

	public override void Dispose() { }

	private void DisposeHandlers() { }

	public CertificateHandler get_certificateHandler() { }

	[CompilerGenerated]
	public bool get_disposeCertificateHandlerOnDispose() { }

	[CompilerGenerated]
	public bool get_disposeDownloadHandlerOnDispose() { }

	[CompilerGenerated]
	public bool get_disposeUploadHandlerOnDispose() { }

	public DownloadHandler get_downloadHandler() { }

	public bool get_isDone() { }

	[NativeMethod]
	public Result get_result() { }

	public UploadHandler get_uploadHandler() { }

	internal void InternalDestroy() { }

	[NativeMethod]
	private void Release() { }

}

