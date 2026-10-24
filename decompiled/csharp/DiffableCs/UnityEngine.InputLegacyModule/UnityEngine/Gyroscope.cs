namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Gyroscope
{
	private int m_GyroIndex; //Field offset: 0x10

	public bool enabled
	{
		 set { } //Length: 80
	}

	public Vector3 gravity
	{
		 get { } //Length: 8
	}

	public Vector3 rotationRate
	{
		 get { } //Length: 8
	}

	public Vector3 rotationRateUnbiased
	{
		 get { } //Length: 8
	}

	public float updateInterval
	{
		 set { } //Length: 80
	}

	public Vector3 userAcceleration
	{
		 get { } //Length: 8
	}

	internal Gyroscope(int index) { }

	public Vector3 get_gravity() { }

	public Vector3 get_rotationRate() { }

	public Vector3 get_rotationRateUnbiased() { }

	public Vector3 get_userAcceleration() { }

	[FreeFunction]
	private static Vector3 gravity_Internal(int idx) { }

	private static void gravity_Internal_Injected(int idx, out Vector3 ret) { }

	[FreeFunction]
	private static Vector3 rotationRate_Internal(int idx) { }

	private static void rotationRate_Internal_Injected(int idx, out Vector3 ret) { }

	[FreeFunction]
	private static Vector3 rotationRateUnbiased_Internal(int idx) { }

	private static void rotationRateUnbiased_Internal_Injected(int idx, out Vector3 ret) { }

	public void set_enabled(bool value) { }

	public void set_updateInterval(float value) { }

	[FreeFunction]
	private static void setEnabled_Internal(int idx, bool enabled) { }

	[FreeFunction]
	private static void setUpdateInterval_Internal(int idx, float interval) { }

	[FreeFunction]
	private static Vector3 userAcceleration_Internal(int idx) { }

	private static void userAcceleration_Internal_Injected(int idx, out Vector3 ret) { }

}

