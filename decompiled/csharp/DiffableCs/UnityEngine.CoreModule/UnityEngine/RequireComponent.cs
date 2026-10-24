namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public sealed class RequireComponent : Attribute
{
	public Type m_Type0; //Field offset: 0x10
	public Type m_Type1; //Field offset: 0x18
	public Type m_Type2; //Field offset: 0x20

	public RequireComponent(Type requiredComponent) { }

	public RequireComponent(Type requiredComponent, Type requiredComponent2) { }

}

