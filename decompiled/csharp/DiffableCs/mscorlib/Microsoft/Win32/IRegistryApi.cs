namespace Microsoft.Win32;

internal interface IRegistryApi
{

	public void Close(RegistryKey rkey) { }

	public void Flush(RegistryKey rkey) { }

	public IntPtr GetHandle(RegistryKey key) { }

	public String[] GetSubKeyNames(RegistryKey rkey) { }

	public object GetValue(RegistryKey rkey, string name, object default_value, RegistryValueOptions options) { }

	public RegistryKey OpenSubKey(RegistryKey rkey, string keyname, bool writtable) { }

	public string ToString(RegistryKey rkey) { }

}

