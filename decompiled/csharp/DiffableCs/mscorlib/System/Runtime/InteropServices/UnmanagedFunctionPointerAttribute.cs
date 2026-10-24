namespace System.Runtime.InteropServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class UnmanagedFunctionPointerAttribute : Attribute
{
	private CallingConvention m_callingConvention; //Field offset: 0x10
	public CharSet CharSet; //Field offset: 0x14
	public bool BestFitMapping; //Field offset: 0x18
	public bool ThrowOnUnmappableChar; //Field offset: 0x19
	public bool SetLastError; //Field offset: 0x1A

	public UnmanagedFunctionPointerAttribute(CallingConvention callingConvention) { }

}

