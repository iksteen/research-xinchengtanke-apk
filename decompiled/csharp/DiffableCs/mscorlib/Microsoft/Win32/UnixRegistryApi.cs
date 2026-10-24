namespace Microsoft.Win32;

internal class UnixRegistryApi : IRegistryApi
{

	public UnixRegistryApi() { }

	public override void Close(RegistryKey rkey) { }

	private RegistryKey CreateSubKey(RegistryKey rkey, string keyname, bool writable) { }

	private RegistryKey CreateSubKey(RegistryKey rkey, string keyname, bool writable, bool is_volatile) { }

	public override void Flush(RegistryKey rkey) { }

	public override IntPtr GetHandle(RegistryKey key) { }

	public override String[] GetSubKeyNames(RegistryKey rkey) { }

	public override object GetValue(RegistryKey rkey, string name, object default_value, RegistryValueOptions options) { }

	private static bool IsWellKnownKey(string parentKeyName, string keyname) { }

	public override RegistryKey OpenSubKey(RegistryKey rkey, string keyname, bool writable) { }

	public override string ToString(RegistryKey rkey) { }

	private static string ToUnix(string keyname) { }

}

