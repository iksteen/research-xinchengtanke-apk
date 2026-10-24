namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public struct ContactPoint
{
	internal Vector3 m_Point; //Field offset: 0x0
	internal Vector3 m_Normal; //Field offset: 0xC
	internal int m_ThisColliderInstanceID; //Field offset: 0x18
	internal int m_OtherColliderInstanceID; //Field offset: 0x1C
	internal float m_Separation; //Field offset: 0x20

}

