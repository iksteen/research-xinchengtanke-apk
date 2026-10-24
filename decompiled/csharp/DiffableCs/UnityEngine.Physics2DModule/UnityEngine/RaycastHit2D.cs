namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public struct RaycastHit2D
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Vector2 m_Centroid; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Vector2 m_Point; //Field offset: 0x8
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Vector2 m_Normal; //Field offset: 0x10
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private float m_Distance; //Field offset: 0x18
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private float m_Fraction; //Field offset: 0x1C
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int m_Collider; //Field offset: 0x20

	public Collider2D collider
	{
		 get { } //Length: 184
	}

	public float distance
	{
		 get { } //Length: 8
	}

	public Vector2 normal
	{
		 get { } //Length: 8
	}

	public Vector2 point
	{
		 get { } //Length: 8
	}

	public Collider2D get_collider() { }

	public float get_distance() { }

	public Vector2 get_normal() { }

	public Vector2 get_point() { }

}

