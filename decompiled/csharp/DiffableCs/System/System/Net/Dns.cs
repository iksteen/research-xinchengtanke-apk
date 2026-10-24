namespace System.Net;

public static class Dns
{

	private static void Error_11001(string hostName) { }

	private static bool GetHostByAddr_internal(string addr, out string h_name, out String[] h_aliases, out String[] h_addr_list, int hint) { }

	private static IPHostEntry GetHostByAddressFromString(string address, bool parse) { }

	[Obsolete]
	public static IPHostEntry GetHostByName(string hostName) { }

	private static bool GetHostByName_internal(string host, out string h_name, out String[] h_aliases, out String[] h_addr_list, int hint) { }

	public static IPHostEntry GetHostEntry(string hostNameOrAddress) { }

	public static IPHostEntry GetHostEntry(IPAddress address) { }

	public static string GetHostName() { }

	private static bool GetHostName_internal(out string h_name) { }

	private static IPHostEntry hostent_to_IPHostEntry(string originalHostName, string h_name, String[] h_aliases, String[] h_addrlist) { }

}

