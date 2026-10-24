namespace System.Net;

public class IPAddress
{
	public static readonly IPAddress Any; //Field offset: 0x0
	internal const int IPv4AddressBytes = 4; //Field offset: 0x0
	internal const int IPv6AddressBytes = 16; //Field offset: 0x0
	internal const long LoopbackMask = 255; //Field offset: 0x0
	internal const int NumberOfLabels = 8; //Field offset: 0x0
	public static readonly IPAddress Loopback; //Field offset: 0x8
	public static readonly IPAddress Broadcast; //Field offset: 0x10
	public static readonly IPAddress None; //Field offset: 0x18
	public static readonly IPAddress IPv6Any; //Field offset: 0x20
	public static readonly IPAddress IPv6Loopback; //Field offset: 0x28
	public static readonly IPAddress IPv6None; //Field offset: 0x30
	internal long m_Address; //Field offset: 0x10
	internal string m_ToString; //Field offset: 0x18
	private AddressFamily m_Family; //Field offset: 0x20
	private UInt16[] m_Numbers; //Field offset: 0x28
	private long m_ScopeId; //Field offset: 0x30
	private int m_HashCode; //Field offset: 0x38

	public AddressFamily AddressFamily
	{
		 get { } //Length: 8
	}

	public long ScopeId
	{
		 get { } //Length: 88
	}

	private static IPAddress() { }

	internal IPAddress(int newAddress) { }

	public IPAddress(long newAddress) { }

	public IPAddress(Byte[] address, long scopeid) { }

	private IPAddress(UInt16[] address, uint scopeid) { }

	internal bool Equals(object comparandObj, bool compareScopeId) { }

	public virtual bool Equals(object comparand) { }

	public AddressFamily get_AddressFamily() { }

	public long get_ScopeId() { }

	public Byte[] GetAddressBytes() { }

	public virtual int GetHashCode() { }

	private static IPAddress InternalParse(string ipString, bool tryParse) { }

	public static bool IsLoopback(IPAddress address) { }

	public IPAddress MapToIPv6() { }

	public static IPAddress Parse(string ipString) { }

	public virtual string ToString() { }

	public static bool TryParse(string ipString, out IPAddress address) { }

}

