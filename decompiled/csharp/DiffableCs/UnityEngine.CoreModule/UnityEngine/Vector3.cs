namespace UnityEngine;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Il2CppEagerStaticClassConstruction]
[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeType]
[RequiredByNativeCode]
public struct Vector3 : IEquatable<Vector3>, IFormattable
{
	public const float kEpsilon = 1E-05; //Field offset: 0x0
	public const float kEpsilonNormalSqrt = 1E-15; //Field offset: 0x0
	private static readonly Vector3 zeroVector; //Field offset: 0x0
	private static readonly Vector3 oneVector; //Field offset: 0xC
	private static readonly Vector3 upVector; //Field offset: 0x18
	private static readonly Vector3 downVector; //Field offset: 0x24
	private static readonly Vector3 leftVector; //Field offset: 0x30
	private static readonly Vector3 rightVector; //Field offset: 0x3C
	private static readonly Vector3 forwardVector; //Field offset: 0x48
	private static readonly Vector3 backVector; //Field offset: 0x54
	private static readonly Vector3 positiveInfinityVector; //Field offset: 0x60
	private static readonly Vector3 negativeInfinityVector; //Field offset: 0x6C
	public float x; //Field offset: 0x0
	public float y; //Field offset: 0x4
	public float z; //Field offset: 0x8

	public static Vector3 back
	{
		 get { } //Length: 80
	}

	public static Vector3 down
	{
		 get { } //Length: 80
	}

	public static Vector3 forward
	{
		 get { } //Length: 80
	}

	public float Item
	{
		 get { } //Length: 124
		 set { } //Length: 124
	}

	public static Vector3 left
	{
		 get { } //Length: 80
	}

	public float magnitude
	{
		 get { } //Length: 172
	}

	public Vector3 normalized
	{
		 get { } //Length: 12
	}

	public static Vector3 one
	{
		 get { } //Length: 80
	}

	public static Vector3 right
	{
		 get { } //Length: 80
	}

	public float sqrMagnitude
	{
		 get { } //Length: 32
	}

	public static Vector3 up
	{
		 get { } //Length: 80
	}

	public static Vector3 zero
	{
		 get { } //Length: 80
	}

	private static Vector3() { }

	public Vector3(float x, float y, float z) { }

	public Vector3(float x, float y) { }

	public static Vector3 Cross(Vector3 lhs, Vector3 rhs) { }

	public static float Distance(Vector3 a, Vector3 b) { }

	public static float Dot(Vector3 lhs, Vector3 rhs) { }

	public override bool Equals(Vector3 other) { }

	public virtual bool Equals(object other) { }

	public static Vector3 get_back() { }

	public static Vector3 get_down() { }

	public static Vector3 get_forward() { }

	public float get_Item(int index) { }

	public static Vector3 get_left() { }

	public float get_magnitude() { }

	public Vector3 get_normalized() { }

	public static Vector3 get_one() { }

	public static Vector3 get_right() { }

	public float get_sqrMagnitude() { }

	public static Vector3 get_up() { }

	public static Vector3 get_zero() { }

	public virtual int GetHashCode() { }

	public static Vector3 Lerp(Vector3 a, Vector3 b, float t) { }

	public static Vector3 LerpUnclamped(Vector3 a, Vector3 b, float t) { }

	public static float Magnitude(Vector3 vector) { }

	public static Vector3 Max(Vector3 lhs, Vector3 rhs) { }

	public static Vector3 Min(Vector3 lhs, Vector3 rhs) { }

	public static Vector3 MoveTowards(Vector3 current, Vector3 target, float maxDistanceDelta) { }

	public static Vector3 Normalize(Vector3 value) { }

	public static Vector3 op_Addition(Vector3 a, Vector3 b) { }

	public static Vector3 op_Division(Vector3 a, float d) { }

	public static bool op_Equality(Vector3 lhs, Vector3 rhs) { }

	public static bool op_Inequality(Vector3 lhs, Vector3 rhs) { }

	public static Vector3 op_Multiply(Vector3 a, float d) { }

	public static Vector3 op_Multiply(float d, Vector3 a) { }

	public static Vector3 op_Subtraction(Vector3 a, Vector3 b) { }

	public static Vector3 op_UnaryNegation(Vector3 a) { }

	public static Vector3 Scale(Vector3 a, Vector3 b) { }

	public void Scale(Vector3 scale) { }

	public void set_Item(int index, float value) { }

	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime, float maxSpeed, float deltaTime) { }

	[ExcludeFromDocs]
	public static Vector3 SmoothDamp(Vector3 current, Vector3 target, ref Vector3 currentVelocity, float smoothTime) { }

	public static float SqrMagnitude(Vector3 vector) { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

	public virtual string ToString() { }

}

