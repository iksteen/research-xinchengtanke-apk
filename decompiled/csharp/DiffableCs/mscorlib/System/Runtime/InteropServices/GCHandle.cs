namespace System.Runtime.InteropServices;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[MonoTODO]
public struct GCHandle
{
	private int handle; //Field offset: 0x0

	public bool IsAllocated
	{
		 get { } //Length: 16
	}

	public object Target
	{
		 get { } //Length: 104
		 set { } //Length: 52
	}

	private GCHandle(IntPtr h) { }

	private GCHandle(object obj) { }

	internal GCHandle(object value, GCHandleType type) { }

	public IntPtr AddrOfPinnedObject() { }

	public static GCHandle Alloc(object value) { }

	public static GCHandle Alloc(object value, GCHandleType type) { }

	private static bool CheckCurrentDomain(int handle) { }

	public virtual bool Equals(object o) { }

	public void Free() { }

	private static void FreeHandle(int handle) { }

	public static GCHandle FromIntPtr(IntPtr value) { }

	public bool get_IsAllocated() { }

	public object get_Target() { }

	private static IntPtr GetAddrOfPinnedObject(int handle) { }

	public virtual int GetHashCode() { }

	private static object GetTarget(int handle) { }

	private static int GetTargetHandle(object obj, int handle, GCHandleType type) { }

	public static bool op_Equality(GCHandle a, GCHandle b) { }

	public static IntPtr op_Explicit(GCHandle value) { }

	public static GCHandle op_Explicit(IntPtr value) { }

	public void set_Target(object value) { }

	public static IntPtr ToIntPtr(GCHandle value) { }

}

