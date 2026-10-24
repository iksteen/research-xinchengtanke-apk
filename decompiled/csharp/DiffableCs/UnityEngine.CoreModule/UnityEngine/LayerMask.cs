namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public struct LayerMask
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int m_Mask; //Field offset: 0x0

	[NativeMethod]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int NameToLayer(string layerName) { }

	public static LayerMask op_Implicit(int intVal) { }

	public static int op_Implicit(LayerMask mask) { }

}

