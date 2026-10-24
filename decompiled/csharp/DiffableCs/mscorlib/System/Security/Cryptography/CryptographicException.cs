namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CryptographicException : SystemException
{

	public CryptographicException() { }

	public CryptographicException(string message) { }

	public CryptographicException(string format, string insert) { }

	public CryptographicException(string message, Exception inner) { }

	protected CryptographicException(SerializationInfo info, StreamingContext context) { }

}

