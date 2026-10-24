namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public struct RaycastHit
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Vector3 m_Point; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Vector3 m_Normal; //Field offset: 0xC
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal uint m_FaceID; //Field offset: 0x18
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal float m_Distance; //Field offset: 0x1C
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal Vector2 m_UV; //Field offset: 0x20
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal int m_Collider; //Field offset: 0x28

	public Collider collider
	{
		 get { } //Length: 184
	}

	public float distance
	{
		 get { } //Length: 8
	}

	public Vector3 normal
	{
		 get { } //Length: 12
	}

	public Vector3 point
	{
		 get { } //Length: 12
	}

	public Rigidbody rigidbody
	{
		 get { } //Length: 200
	}

	public Transform transform
	{
		 get { } //Length: 252
	}

	public Collider get_collider() { }

	public float get_distance() { }

	public Vector3 get_normal() { }

	public Vector3 get_point() { }

	public Rigidbody get_rigidbody() { }

	public Transform get_transform() { }

}

