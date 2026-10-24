namespace UnityEngine;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public struct Color : IEquatable<Color>, IFormattable
{
	public float r; //Field offset: 0x0
	public float g; //Field offset: 0x4
	public float b; //Field offset: 0x8
	public float a; //Field offset: 0xC

	public static Color black
	{
		 get { } //Length: 20
	}

	public static Color blue
	{
		 get { } //Length: 20
	}

	public static Color clear
	{
		 get { } //Length: 20
	}

	public static Color green
	{
		 get { } //Length: 20
	}

	public static Color grey
	{
		 get { } //Length: 20
	}

	public Color linear
	{
		 get { } //Length: 180
	}

	public float maxColorComponent
	{
		 get { } //Length: 28
	}

	public static Color red
	{
		 get { } //Length: 20
	}

	public static Color white
	{
		 get { } //Length: 20
	}

	public static Color yellow
	{
		 get { } //Length: 28
	}

	public Color(float r, float g, float b, float a) { }

	public Color(float r, float g, float b) { }

	public virtual bool Equals(object other) { }

	public override bool Equals(Color other) { }

	public static Color get_black() { }

	public static Color get_blue() { }

	public static Color get_clear() { }

	public static Color get_green() { }

	public static Color get_grey() { }

	public Color get_linear() { }

	public float get_maxColorComponent() { }

	public static Color get_red() { }

	public static Color get_white() { }

	public static Color get_yellow() { }

	public virtual int GetHashCode() { }

	public static Color Lerp(Color a, Color b, float t) { }

	public static Color op_Addition(Color a, Color b) { }

	public static bool op_Equality(Color lhs, Color rhs) { }

	public static Vector4 op_Implicit(Color c) { }

	public static Color op_Implicit(Vector4 v) { }

	public static bool op_Inequality(Color lhs, Color rhs) { }

	public static Color op_Multiply(Color a, float b) { }

	public static Color op_Multiply(Color a, Color b) { }

	public static Color op_Subtraction(Color a, Color b) { }

	internal Color RGBMultiplied(float multiplier) { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

	public virtual string ToString() { }

}

