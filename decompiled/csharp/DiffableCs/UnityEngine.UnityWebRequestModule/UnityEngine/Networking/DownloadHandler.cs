namespace UnityEngine.Networking;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class DownloadHandler
{
	[VisibleToOtherModules]
	internal IntPtr m_Ptr; //Field offset: 0x10

	public override void Dispose() { }

	[Obsolete]
	protected override void ReceiveContentLength(int contentLength) { }

	[RequiredByNativeCode]
	protected override void ReceiveContentLengthHeader(ulong contentLength) { }

	[NativeMethod]
	private void Release() { }

}

