namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class Collider2D : Behaviour
{

	public bool isTrigger
	{
		 set { } //Length: 80
	}

	public Vector2 offset
	{
		 get { } //Length: 88
		 set { } //Length: 84
	}

	public Collider2D() { }

	public Vector2 get_offset() { }

	private void get_offset_Injected(out Vector2 ret) { }

	public void set_isTrigger(bool value) { }

	public void set_offset(Vector2 value) { }

	private void set_offset_Injected(ref Vector2 value) { }

}

