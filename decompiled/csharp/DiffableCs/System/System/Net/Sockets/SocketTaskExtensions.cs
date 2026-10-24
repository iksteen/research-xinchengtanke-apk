namespace System.Net.Sockets;

[Extension]
public static class SocketTaskExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<EndPoint, AsyncCallback, Object, IAsyncResult> <>9__2_0; //Field offset: 0x8
		public static Action<IAsyncResult> <>9__2_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal IAsyncResult <ConnectAsync>b__2_0(EndPoint targetEndPoint, AsyncCallback callback, object state) { }

		internal void <ConnectAsync>b__2_1(IAsyncResult asyncResult) { }

	}


	[Extension]
	public static Task ConnectAsync(Socket socket, EndPoint remoteEP) { }

}

