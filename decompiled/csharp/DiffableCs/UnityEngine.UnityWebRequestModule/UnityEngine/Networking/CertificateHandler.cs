namespace UnityEngine.Networking;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CertificateHandler
{
	internal IntPtr m_Ptr; //Field offset: 0x10

	public override void Dispose() { }

	[NativeMethod]
	private void Release() { }

	protected override bool ValidateCertificate(Byte[] certificateData) { }

	[RequiredByNativeCode]
	internal bool ValidateCertificateNative(Byte[] certificateData) { }

}

