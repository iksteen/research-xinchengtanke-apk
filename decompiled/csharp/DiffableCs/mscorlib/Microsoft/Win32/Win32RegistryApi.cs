namespace Microsoft.Win32;

internal class Win32RegistryApi : IRegistryApi
{
	private readonly int NativeBytesPerCharacter; //Field offset: 0x10

	public Win32RegistryApi() { }

	public override void Close(RegistryKey rkey) { }

	internal static string CombineName(RegistryKey rkey, string localName) { }

	public override void Flush(RegistryKey rkey) { }

	private void GenerateException(int errorCode) { }

	private int GetBinaryValue(RegistryKey rkey, string name, RegistryValueKind type, out Byte[] data, int size) { }

	public override IntPtr GetHandle(RegistryKey key) { }

	public override String[] GetSubKeyNames(RegistryKey rkey) { }

	public override object GetValue(RegistryKey rkey, string name, object defaultValue, RegistryValueOptions options) { }

	private static bool IsHandleValid(RegistryKey key) { }

	public override RegistryKey OpenSubKey(RegistryKey rkey, string keyName, bool writable) { }

	private static int RegCloseKey(IntPtr keyHandle) { }

	internal static int RegEnumKeyEx(IntPtr keyHandle, int dwIndex, Char* lpName, ref int lpcbName, Int32[] lpReserved, out StringBuilder lpClass, Int32[] lpcbClass, Int64[] lpftLastWriteTime) { }

	private static int RegFlushKey(IntPtr keyHandle) { }

	private static int RegOpenKeyEx(IntPtr keyBase, string keyName, IntPtr reserved, int access, out IntPtr keyHandle) { }

	internal static int RegQueryInfoKey(IntPtr hKey, out StringBuilder lpClass, Int32[] lpcbClass, IntPtr lpReserved_MustBeZero, ref int lpcSubKeys, Int32[] lpcbMaxSubKeyLen, Int32[] lpcbMaxClassLen, ref int lpcValues, Int32[] lpcbMaxValueNameLen, Int32[] lpcbMaxValueLen, Int32[] lpcbSecurityDescriptor, Int32[] lpftLastWriteTime) { }

	private static int RegQueryValueEx(IntPtr keyBase, string valueName, IntPtr reserved, ref RegistryValueKind type, ref long data, ref int dataSize) { }

	private static int RegQueryValueEx(IntPtr keyBase, string valueName, IntPtr reserved, ref RegistryValueKind type, ref int data, ref int dataSize) { }

	private static int RegQueryValueEx(IntPtr keyBase, string valueName, IntPtr reserved, ref RegistryValueKind type, out Byte[] data, ref int dataSize) { }

	private static int RegQueryValueEx(IntPtr keyBase, string valueName, IntPtr reserved, ref RegistryValueKind type, IntPtr zero, ref int dataSize) { }

	public override int SubKeyCount(RegistryKey rkey) { }

	public override string ToString(RegistryKey rkey) { }

}

