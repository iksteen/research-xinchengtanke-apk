namespace Microsoft.Win32;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class RegistryKey : MarshalByRefObject, IDisposable
{
	private static readonly IRegistryApi RegistryApi; //Field offset: 0x0
	private object handle; //Field offset: 0x18
	private SafeRegistryHandle safe_handle; //Field offset: 0x20
	private object hive; //Field offset: 0x28
	private readonly string qname; //Field offset: 0x30
	private readonly bool isRemoteRoot; //Field offset: 0x38
	private readonly bool isWritable; //Field offset: 0x39

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[MonoTODO]
	public SafeRegistryHandle Handle
	{
		 get { } //Length: 340
	}

	internal RegistryHive Hive
	{
		internal get { } //Length: 164
	}

	internal object InternalHandle
	{
		internal get { } //Length: 8
	}

	internal bool IsRoot
	{
		internal get { } //Length: 16
	}

	public string Name
	{
		 get { } //Length: 8
	}

	private static RegistryKey() { }

	internal RegistryKey(RegistryHive hiveId) { }

	internal RegistryKey(RegistryHive hiveId, IntPtr keyHandle, bool remoteRoot) { }

	internal RegistryKey(object data, string keyName, bool writable) { }

	private void AssertKeyNameLength(string name) { }

	private void AssertKeyStillValid() { }

	public void Close() { }

	internal static IOException CreateMarkedForDeletionException() { }

	internal static string DecodeString(Byte[] data) { }

	public override void Dispose() { }

	public void Flush() { }

	public SafeRegistryHandle get_Handle() { }

	internal RegistryHive get_Hive() { }

	internal object get_InternalHandle() { }

	internal bool get_IsRoot() { }

	public string get_Name() { }

	private static string GetHiveName(RegistryHive hive) { }

	public String[] GetSubKeyNames() { }

	public object GetValue(string name, object defaultValue) { }

	public object GetValue(string name) { }

	internal static bool IsEquals(RegistryKey a, RegistryKey b) { }

	public RegistryKey OpenSubKey(string name) { }

	public RegistryKey OpenSubKey(string name, bool writable) { }

	public virtual string ToString() { }

}

