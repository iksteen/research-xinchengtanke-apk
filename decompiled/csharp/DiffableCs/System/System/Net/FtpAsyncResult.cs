namespace System.Net;

internal class FtpAsyncResult : IAsyncResult
{
	private FtpWebResponse response; //Field offset: 0x10
	private ManualResetEvent waitHandle; //Field offset: 0x18
	private Exception exception; //Field offset: 0x20
	private AsyncCallback callback; //Field offset: 0x28
	private Stream stream; //Field offset: 0x30
	private object state; //Field offset: 0x38
	private bool completed; //Field offset: 0x40
	private bool synch; //Field offset: 0x41
	private object locker; //Field offset: 0x48

	public override object AsyncState
	{
		 get { } //Length: 8
	}

	public override WaitHandle AsyncWaitHandle
	{
		 get { } //Length: 288
	}

	public override bool CompletedSynchronously
	{
		 get { } //Length: 8
	}

	internal Exception Exception
	{
		internal get { } //Length: 8
	}

	internal bool GotException
	{
		internal get { } //Length: 16
	}

	public override bool IsCompleted
	{
		 get { } //Length: 208
	}

	internal FtpWebResponse Response
	{
		internal get { } //Length: 8
	}

	internal Stream Stream
	{
		internal set { } //Length: 8
	}

	public FtpAsyncResult(AsyncCallback callback, object state) { }

	internal void DoCallback() { }

	public override object get_AsyncState() { }

	public override WaitHandle get_AsyncWaitHandle() { }

	public override bool get_CompletedSynchronously() { }

	internal Exception get_Exception() { }

	internal bool get_GotException() { }

	public override bool get_IsCompleted() { }

	internal FtpWebResponse get_Response() { }

	internal void set_Stream(Stream value) { }

	internal void SetCompleted(bool synch, Exception exc, FtpWebResponse response) { }

	internal void SetCompleted(bool synch, FtpWebResponse response) { }

	internal void SetCompleted(bool synch, Exception exc) { }

	internal bool WaitUntilComplete(int timeout, bool exitContext) { }

}

