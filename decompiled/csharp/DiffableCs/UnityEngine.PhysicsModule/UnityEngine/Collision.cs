namespace UnityEngine;

[RequiredByNativeCode]
public class Collision
{
	internal Vector3 m_Impulse; //Field offset: 0x10
	internal Vector3 m_RelativeVelocity; //Field offset: 0x1C
	internal Component m_Body; //Field offset: 0x28
	internal Collider m_Collider; //Field offset: 0x30
	internal int m_ContactCount; //Field offset: 0x38
	internal ContactPoint[] m_ReusedContacts; //Field offset: 0x40
	internal ContactPoint[] m_LegacyContacts; //Field offset: 0x48

}

