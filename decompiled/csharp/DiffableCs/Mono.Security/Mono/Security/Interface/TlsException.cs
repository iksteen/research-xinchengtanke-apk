namespace Mono.Security.Interface;

public sealed class TlsException : Exception
{
	private Alert alert; //Field offset: 0x88

	public TlsException(Alert alert, string message) { }

	public TlsException(AlertDescription description, string message) { }

}

