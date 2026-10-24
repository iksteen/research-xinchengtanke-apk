namespace System.Net.Sockets;

public class SocketAsyncEventArgs : EventArgs, IDisposable
{
	private bool disposed; //Field offset: 0x10
	internal int in_progress; //Field offset: 0x14
	internal EndPoint remote_ep; //Field offset: 0x18
	internal Socket current_socket; //Field offset: 0x20
	[CompilerGenerated]
	private Socket <AcceptSocket>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <BytesTransferred>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private SocketError <SocketError>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private EventHandler<SocketAsyncEventArgs> Completed; //Field offset: 0x38

	public Socket AcceptSocket
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	internal int BytesTransferred
	{
		[CompilerGenerated]
		internal set { } //Length: 8
	}

	public SocketError SocketError
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	internal void Complete() { }

	private void Dispose(bool disposing) { }

	public override void Dispose() { }

	[CompilerGenerated]
	public Socket get_AcceptSocket() { }

	protected override void OnCompleted(SocketAsyncEventArgs e) { }

	[CompilerGenerated]
	public void set_AcceptSocket(Socket value) { }

	[CompilerGenerated]
	internal void set_BytesTransferred(int value) { }

	[CompilerGenerated]
	public void set_SocketError(SocketError value) { }

}

