namespace System.Runtime.InteropServices;

public static class Marshal
{
	public static readonly int SystemMaxDBCSCharSize; //Field offset: 0x0
	public static readonly int SystemDefaultCharSize; //Field offset: 0x4

	private static Marshal() { }

	public static IntPtr AllocCoTaskMem(int cb) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr AllocHGlobal(int cb) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr AllocHGlobal(IntPtr cb) { }

	private static void ClearUnicode(IntPtr ptr) { }

	public static void Copy(Byte[] source, int startIndex, IntPtr destination, int length) { }

	public static void Copy(IntPtr source, Byte[] destination, int startIndex, int length) { }

	public static void Copy(IntPtr source, Char[] destination, int startIndex, int length) { }

	internal static void copy_from_unmanaged(IntPtr source, int startIndex, Array destination, int length) { }

	internal static void copy_to_unmanaged(Array source, int startIndex, IntPtr destination, int length) { }

	public static void FreeBSTR(IntPtr ptr) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void FreeHGlobal(IntPtr hglobal) { }

	public static IntPtr GetFunctionPointerForDelegate(TDelegate d) { }

	private static IntPtr GetFunctionPointerForDelegateInternal(Delegate d) { }

	public static int GetHRForException(Exception e) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int GetLastWin32Error() { }

	public static string PtrToStringAnsi(IntPtr ptr) { }

	public static string PtrToStringUni(IntPtr ptr) { }

	public static T PtrToStructure(IntPtr ptr) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object PtrToStructure(IntPtr ptr, Type structureType) { }

	public static short ReadInt16(IntPtr ptr, int ofs) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int ReadInt32(IntPtr ptr) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static long ReadInt64(IntPtr ptr) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr ReadIntPtr(IntPtr ptr) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Release(IntPtr pUnk) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static int ReleaseInternal(IntPtr pUnk) { }

	public static IntPtr SecureStringToCoTaskMemUnicode(SecureString s) { }

	public static IntPtr SecureStringToGlobalAllocUnicode(SecureString s) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void StructureToPtr(object structure, IntPtr ptr, bool fDeleteOld) { }

	public static void StructureToPtr(T structure, IntPtr ptr, bool fDeleteOld) { }

	public static IntPtr UnsafeAddrOfPinnedArrayElement(Array arr, int index) { }

	public static IntPtr UnsafeAddrOfPinnedArrayElement(T[] arr, int index) { }

	public static void WriteInt16(IntPtr ptr, int ofs, short val) { }

	public static void ZeroFreeGlobalAllocUnicode(IntPtr s) { }

}

