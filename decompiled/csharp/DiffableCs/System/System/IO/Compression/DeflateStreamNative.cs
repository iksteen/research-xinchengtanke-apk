namespace System.IO.Compression;

internal class DeflateStreamNative
{
	private sealed class SafeDeflateStreamHandle : SafeHandle
	{

		public virtual bool IsInvalid
		{
			 get { } //Length: 72
		}

		private SafeDeflateStreamHandle() { }

		public virtual bool get_IsInvalid() { }

		protected virtual bool ReleaseHandle() { }

	}

	[UnmanagedFunctionPointer(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private sealed class UnmanagedReadOrWrite : MulticastDelegate
	{

		public UnmanagedReadOrWrite(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(IntPtr buffer, int length, IntPtr data, AsyncCallback callback, object object) { }

		public override int EndInvoke(IAsyncResult result) { }

		public override int Invoke(IntPtr buffer, int length, IntPtr data) { }

	}

	private UnmanagedReadOrWrite feeder; //Field offset: 0x10
	private Stream base_stream; //Field offset: 0x18
	private SafeDeflateStreamHandle z_stream; //Field offset: 0x20
	private GCHandle data; //Field offset: 0x28
	private bool disposed; //Field offset: 0x2C
	private Byte[] io_buffer; //Field offset: 0x30

	private DeflateStreamNative() { }

	private static void CheckResult(int result, string where) { }

	private static int CloseZStream(IntPtr stream) { }

	public static DeflateStreamNative Create(Stream compressedStream, CompressionMode mode, bool gzip) { }

	private static SafeDeflateStreamHandle CreateZStream(CompressionMode compress, bool gzip, UnmanagedReadOrWrite feeder, IntPtr data) { }

	public void Dispose(bool disposing) { }

	protected virtual void Finalize() { }

	public void Flush() { }

	private static int Flush(SafeDeflateStreamHandle stream) { }

	public int ReadZStream(IntPtr buffer, int length) { }

	private static int ReadZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length) { }

	private int UnmanagedRead(IntPtr buffer, int length) { }

	[MonoPInvokeCallback(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static int UnmanagedRead(IntPtr buffer, int length, IntPtr data) { }

	[MonoPInvokeCallback(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static int UnmanagedWrite(IntPtr buffer, int length, IntPtr data) { }

	private int UnmanagedWrite(IntPtr buffer, int length) { }

	public void WriteZStream(IntPtr buffer, int length) { }

	private static int WriteZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length) { }

}

