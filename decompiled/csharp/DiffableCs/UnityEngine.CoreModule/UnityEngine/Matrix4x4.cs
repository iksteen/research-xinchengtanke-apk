namespace UnityEngine;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Il2CppEagerStaticClassConstruction]
[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeType]
[RequiredByNativeCode]
public struct Matrix4x4 : IEquatable<Matrix4x4>, IFormattable
{
	private static readonly Matrix4x4 zeroMatrix; //Field offset: 0x0
	private static readonly Matrix4x4 identityMatrix; //Field offset: 0x40
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m00; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m10; //Field offset: 0x4
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m20; //Field offset: 0x8
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m30; //Field offset: 0xC
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m01; //Field offset: 0x10
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m11; //Field offset: 0x14
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m21; //Field offset: 0x18
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m31; //Field offset: 0x1C
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m02; //Field offset: 0x20
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m12; //Field offset: 0x24
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m22; //Field offset: 0x28
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m32; //Field offset: 0x2C
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m03; //Field offset: 0x30
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m13; //Field offset: 0x34
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m23; //Field offset: 0x38
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float m33; //Field offset: 0x3C

	public static Matrix4x4 identity
	{
		 get { } //Length: 92
	}

	public Vector3 lossyScale
	{
		 get { } //Length: 4
	}

	private static Matrix4x4() { }

	public Matrix4x4(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3) { }

	public virtual bool Equals(object other) { }

	public override bool Equals(Matrix4x4 other) { }

	public static Matrix4x4 get_identity() { }

	public Vector3 get_lossyScale() { }

	public Vector4 GetColumn(int index) { }

	public virtual int GetHashCode() { }

	[ThreadSafe]
	private Vector3 GetLossyScale() { }

	private static void GetLossyScale_Injected(ref Matrix4x4 _unity_self, out Vector3 ret) { }

	public Vector3 MultiplyPoint(Vector3 point) { }

	public Vector3 MultiplyPoint3x4(Vector3 point) { }

	public Vector3 MultiplyVector(Vector3 vector) { }

	public static Matrix4x4 op_Multiply(Matrix4x4 lhs, Matrix4x4 rhs) { }

	public void SetTRS(Vector3 pos, Quaternion q, Vector3 s) { }

	public virtual string ToString() { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

	[FreeFunction]
	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s) { }

	private static void TRS_Injected(ref Vector3 pos, ref Quaternion q, ref Vector3 s, out Matrix4x4 ret) { }

}

