namespace Mono.Net;

internal static class CFNetwork
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public CFProxy[] proxies; //Field offset: 0x10
		public CFRunLoop runLoop; //Field offset: 0x18

		public <>c__DisplayClass13_0() { }

		internal void <ExecuteProxyAutoConfigurationURL>b__0(IntPtr client, IntPtr proxyList, IntPtr error) { }

	}

	private sealed class CFProxyAutoConfigurationResultCallback : MulticastDelegate
	{

		public CFProxyAutoConfigurationResultCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(IntPtr client, IntPtr proxyList, IntPtr error, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(IntPtr client, IntPtr proxyList, IntPtr error) { }

	}

	private class CFWebProxy : IWebProxy
	{
		private ICredentials credentials; //Field offset: 0x10
		private bool userSpecified; //Field offset: 0x18

		public override ICredentials Credentials
		{
			 get { } //Length: 8
		}

		public CFWebProxy() { }

		private static Uri ExecuteProxyAutoConfigurationURL(IntPtr proxyAutoConfigURL, Uri targetUri, out NetworkCredential credentials) { }

		public override ICredentials get_Credentials() { }

		public override Uri GetProxy(Uri targetUri) { }

		private static Uri GetProxyUri(CFProxy proxy, out NetworkCredential credentials) { }

		private static Uri GetProxyUriFromScript(IntPtr script, Uri targetUri, out NetworkCredential credentials) { }

		public override bool IsBypassed(Uri targetUri) { }

		private static Uri SelectProxy(CFProxy[] proxies, Uri targetUri, out NetworkCredential credentials) { }

	}

	private class GetProxyData : IDisposable
	{
		public IntPtr script; //Field offset: 0x10
		public IntPtr targetUri; //Field offset: 0x18
		public IntPtr error; //Field offset: 0x20
		public IntPtr result; //Field offset: 0x28
		public ManualResetEvent evt; //Field offset: 0x30

		public GetProxyData() { }

		public override void Dispose() { }

	}

	private static object lock_obj; //Field offset: 0x0
	private static Queue<GetProxyData> get_proxy_queue; //Field offset: 0x8
	private static AutoResetEvent proxy_event; //Field offset: 0x10

	private static CFNetwork() { }

	private static IntPtr CFNetworkCopyProxiesForAutoConfigurationScript(IntPtr proxyAutoConfigurationScript, IntPtr targetURL, out IntPtr error) { }

	private static IntPtr CFNetworkCopyProxiesForAutoConfigurationScriptSequential(IntPtr proxyAutoConfigurationScript, IntPtr targetURL, out IntPtr error) { }

	private static void CFNetworkCopyProxiesForAutoConfigurationScriptThread() { }

	private static IntPtr CFNetworkCopyProxiesForURL(IntPtr url, IntPtr proxySettings) { }

	private static IntPtr CFNetworkCopySystemProxySettings() { }

	private static IntPtr CFNetworkExecuteProxyAutoConfigurationURL(IntPtr proxyAutoConfigURL, IntPtr targetURL, CFProxyAutoConfigurationResultCallback cb, ref CFStreamClientContext clientContext) { }

	private static CFArray CopyProxiesForAutoConfigurationScript(IntPtr proxyAutoConfigurationScript, CFUrl targetURL) { }

	private static CFArray CopyProxiesForURL(CFUrl url, CFDictionary proxySettings) { }

	public static CFProxy[] ExecuteProxyAutoConfigurationURL(IntPtr proxyAutoConfigURL, Uri targetURL) { }

	public static IWebProxy GetDefaultProxy() { }

	public static CFProxy[] GetProxiesForAutoConfigurationScript(IntPtr proxyAutoConfigurationScript, CFUrl targetURL) { }

	public static CFProxy[] GetProxiesForAutoConfigurationScript(IntPtr proxyAutoConfigurationScript, Uri targetUri) { }

	public static CFProxy[] GetProxiesForUri(Uri uri, CFProxySettings proxySettings) { }

	public static CFProxy[] GetProxiesForURL(CFUrl url, CFProxySettings proxySettings) { }

	public static CFProxySettings GetSystemProxySettings() { }

}

