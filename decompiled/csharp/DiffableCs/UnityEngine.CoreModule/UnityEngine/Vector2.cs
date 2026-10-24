namespace UnityEngine;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Il2CppEagerStaticClassConstruction]
[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public struct Vector2 : IEquatable<Vector2>, IFormattable
{
	private static readonly Vector2 zeroVector; //Field offset: 0x0
	public const float kEpsilon = 1E-05; //Field offset: 0x0
	public const float kEpsilonNormalSqrt = 1E-15; //Field offset: 0x0
	private static readonly Vector2 oneVector; //Field offset: 0x8
	private static readonly Vector2 upVector; //Field offset: 0x10
	private static readonly Vector2 downVector; //Field offset: 0x18
	private static readonly Vector2 leftVector; //Field offset: 0x20
	private static readonly Vector2 rightVector; //Field offset: 0x28
	private static readonly Vector2 positiveInfinityVector; //Field offset: 0x30
	private static readonly Vector2 negativeInfinityVector; //Field offset: 0x38
	public float x; //Field offset: 0x0
	public float y; //Field offset: 0x4

	public float Item
	{
		 get { } //Length: 108
		 set { } //Length: 108
	}

	public float magnitude
	{
		 get { } //Length: 148
	}

	public Vector2 normalized
	{
		 get { } //Length: 44
	}

	public static Vector2 one
	{
		 get { } //Length: 76
	}

	public static Vector2 right
	{
		 get { } //Length: 76
	}

	public float sqrMagnitude
	{
		 get { } //Length: 20
	}

	public static Vector2 up
	{
		 get { } //Length: 76
	}

	public static Vector2 zero
	{
		 get { } //Length: 76
	}

	private static Vector2() { }

	public Vector2(float x, float y) { }

	public static float Angle(Vector2 from, Vector2 to) { }

	public static float Distance(Vector2 a, Vector2 b) { }

	public static float Dot(Vector2 lhs, Vector2 rhs) { }

	public virtual bool Equals(object other) { }

	public override bool Equals(Vector2 other) { }

	public float get_Item(int index) { }

	public float get_magnitude() { }

	public Vector2 get_normalized() { }

	public static Vector2 get_one() { }

	public static Vector2 get_right() { }

	public float get_sqrMagnitude() { }

	public static Vector2 get_up() { }

	public static Vector2 get_zero() { }

	public virtual int GetHashCode() { }

	public static Vector2 Lerp(Vector2 a, Vector2 b, float t) { }

	public void Normalize() { }

	public static Vector2 op_Addition(Vector2 a, Vector2 b) { }

	public static Vector2 op_Division(Vector2 a, Vector2 b) { }

	public static Vector2 op_Division(Vector2 a, float d) { }

	public static bool op_Equality(Vector2 lhs, Vector2 rhs) { }

	public static Vector3 op_Implicit(Vector2 v) { }

	public static Vector2 op_Implicit(Vector3 v) { }

	public static bool op_Inequality(Vector2 lhs, Vector2 rhs) { }

	public static Vector2 op_Multiply(Vector2 a, Vector2 b) { }

	public static Vector2 op_Multiply(Vector2 a, float d) { }

	public static Vector2 op_Multiply(float d, Vector2 a) { }

	public static Vector2 op_Subtraction(Vector2 a, Vector2 b) { }

	public static Vector2 op_UnaryNegation(Vector2 a) { }

	public static Vector2 Scale(Vector2 a, Vector2 b) { }

	public void set_Item(int index, float value) { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

	public virtual string ToString() { }

}

