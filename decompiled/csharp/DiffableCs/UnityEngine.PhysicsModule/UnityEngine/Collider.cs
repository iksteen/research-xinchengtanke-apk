namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class Collider : Component
{

	public Rigidbody attachedRigidbody
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public bool enabled
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public bool isTrigger
	{
		 set { } //Length: 80
	}

	[NativeMethod]
	public Rigidbody get_attachedRigidbody() { }

	public bool get_enabled() { }

	public void set_enabled(bool value) { }

	public void set_isTrigger(bool value) { }

}

