namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class WheelCollider : Collider
{

	public float brakeTorque
	{
		 set { } //Length: 80
	}

	public float motorTorque
	{
		 set { } //Length: 80
	}

	public float rpm
	{
		 get { } //Length: 64
	}

	public float steerAngle
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public float get_rpm() { }

	public float get_steerAngle() { }

	public void set_brakeTorque(float value) { }

	public void set_motorTorque(float value) { }

	public void set_steerAngle(float value) { }

}

