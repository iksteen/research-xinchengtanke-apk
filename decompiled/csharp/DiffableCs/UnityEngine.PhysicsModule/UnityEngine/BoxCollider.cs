namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class BoxCollider : Collider
{

	public Vector3 center
	{
		 get { } //Length: 96
		 set { } //Length: 88
	}

	public Vector3 size
	{
		 get { } //Length: 96
		 set { } //Length: 88
	}

	public Vector3 get_center() { }

	private void get_center_Injected(out Vector3 ret) { }

	public Vector3 get_size() { }

	private void get_size_Injected(out Vector3 ret) { }

	public void set_center(Vector3 value) { }

	private void set_center_Injected(ref Vector3 value) { }

	public void set_size(Vector3 value) { }

	private void set_size_Injected(ref Vector3 value) { }

}

