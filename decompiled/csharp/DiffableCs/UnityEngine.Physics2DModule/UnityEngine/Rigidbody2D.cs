namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Rigidbody2D : Component
{

	public RigidbodyType2D bodyType
	{
		[NativeMethod]
		 set { } //Length: 80
	}

	public bool isKinematic
	{
		 set { } //Length: 88
	}

	[NativeMethod]
	public void set_bodyType(RigidbodyType2D value) { }

	public void set_isKinematic(bool value) { }

}

