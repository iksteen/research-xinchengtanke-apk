namespace System.Net;

internal struct IPv6AddressFormatter
{
	private UInt16[] address; //Field offset: 0x0
	private long scopeId; //Field offset: 0x8

	public IPv6AddressFormatter(UInt16[] addr, long scopeId) { }

	private uint AsIPv4Int() { }

	private bool IsIPv4Compatible() { }

	private bool IsIPv4Mapped() { }

	private static ushort SwapUShort(ushort number) { }

	public virtual string ToString() { }

}

