namespace Mono.Net;

internal class CFProxySettings
{
	private static IntPtr kCFNetworkProxiesHTTPEnable; //Field offset: 0x0
	private static IntPtr kCFNetworkProxiesHTTPPort; //Field offset: 0x8
	private static IntPtr kCFNetworkProxiesHTTPProxy; //Field offset: 0x10
	private static IntPtr kCFNetworkProxiesProxyAutoConfigEnable; //Field offset: 0x18
	private static IntPtr kCFNetworkProxiesProxyAutoConfigJavaScript; //Field offset: 0x20
	private static IntPtr kCFNetworkProxiesProxyAutoConfigURLString; //Field offset: 0x28
	private CFDictionary settings; //Field offset: 0x10

	public CFDictionary Dictionary
	{
		 get { } //Length: 8
	}

	private static CFProxySettings() { }

	public CFProxySettings(CFDictionary settings) { }

	public CFDictionary get_Dictionary() { }

}

