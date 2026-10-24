namespace System.Runtime.InteropServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class MarshalAsAttribute : Attribute
{
	public string MarshalCookie; //Field offset: 0x10
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string MarshalType; //Field offset: 0x18
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Type MarshalTypeRef; //Field offset: 0x20
	public Type SafeArrayUserDefinedSubType; //Field offset: 0x28
	private UnmanagedType utype; //Field offset: 0x30
	public UnmanagedType ArraySubType; //Field offset: 0x34
	public VarEnum SafeArraySubType; //Field offset: 0x38
	public int SizeConst; //Field offset: 0x3C
	public int IidParameterIndex; //Field offset: 0x40
	public short SizeParamIndex; //Field offset: 0x44

	internal MarshalAsAttribute Copy() { }

}

