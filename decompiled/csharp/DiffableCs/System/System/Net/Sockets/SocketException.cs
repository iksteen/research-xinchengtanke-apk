namespace System.Net.Sockets;

public class SocketException : Win32Exception
{
	private EndPoint m_EndPoint; //Field offset: 0x90

	public virtual string Message
	{
		 get { } //Length: 160
	}

	public SocketError SocketErrorCode
	{
		 get { } //Length: 8
	}

	public SocketException() { }

	internal SocketException(int error, string message) { }

	public SocketException(int errorCode) { }

	internal SocketException(SocketError socketError) { }

	protected SocketException(SerializationInfo serializationInfo, StreamingContext streamingContext) { }

	public virtual string get_Message() { }

	public SocketError get_SocketErrorCode() { }

	private static int WSAGetLastError_internal() { }

}

