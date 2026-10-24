namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Rigidbody : Component
{

	public float angularDrag
	{
		 set { } //Length: 80
	}

	public float drag
	{
		 set { } //Length: 80
	}

	public bool isKinematic
	{
		 set { } //Length: 80
	}

	public float mass
	{
		 set { } //Length: 80
	}

	public Vector3 position
	{
		 set { } //Length: 88
	}

	public bool useGravity
	{
		 set { } //Length: 80
	}

	public Rigidbody() { }

	public void AddForce(Vector3 force, ForceMode mode) { }

	[ExcludeFromDocs]
	public void AddForce(Vector3 force) { }

	private void AddForce_Injected(ref Vector3 force, ForceMode mode) { }

	public void set_angularDrag(float value) { }

	public void set_drag(float value) { }

	public void set_isKinematic(bool value) { }

	public void set_mass(float value) { }

	public void set_position(Vector3 value) { }

	private void set_position_Injected(ref Vector3 value) { }

	public void set_useGravity(bool value) { }

}

